#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)20;
signed char var_9 = (signed char)-94;
unsigned int var_10 = 3197993727U;
unsigned int var_13 = 1513298024U;
unsigned long long int var_14 = 5357042820413668448ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)26638;
unsigned int var_17 = 3394315759U;
unsigned int var_18 = 4020506296U;
long long int var_19 = -3641991334274000163LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
