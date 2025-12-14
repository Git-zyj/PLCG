#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2511848476235756140ULL;
unsigned char var_2 = (unsigned char)27;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-2567;
unsigned int var_13 = 2284940188U;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_17 = 240118301;
signed char var_18 = (signed char)-101;
signed char var_19 = (signed char)-82;
void init() {
}

void checksum() {
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
