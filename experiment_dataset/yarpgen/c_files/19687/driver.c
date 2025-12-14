#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1484475956;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)39;
unsigned long long int var_11 = 14725171136161973328ULL;
unsigned long long int var_16 = 9426519222882332761ULL;
int zero = 0;
int var_19 = -1094173461;
signed char var_20 = (signed char)68;
short var_21 = (short)11937;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
