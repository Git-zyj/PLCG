#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2033115336U;
unsigned char var_2 = (unsigned char)138;
int var_11 = -1752036431;
long long int var_12 = 6191021519653133071LL;
int zero = 0;
int var_16 = 997479963;
unsigned int var_17 = 3943853210U;
signed char var_18 = (signed char)-77;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
