#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15957603857992819150ULL;
unsigned int var_4 = 503486888U;
signed char var_12 = (signed char)33;
signed char var_13 = (signed char)-12;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_17 = -651737087;
signed char var_18 = (signed char)51;
unsigned int var_19 = 269027106U;
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
