#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)85;
long long int var_9 = 4985998066070244306LL;
signed char var_11 = (signed char)-56;
unsigned int var_13 = 1216328253U;
int zero = 0;
unsigned int var_20 = 2781788406U;
signed char var_21 = (signed char)-103;
long long int var_22 = 179178364595620580LL;
long long int var_23 = -148712628467956814LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
