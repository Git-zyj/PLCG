#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1008614450;
_Bool var_1 = (_Bool)0;
unsigned int var_3 = 4293247264U;
long long int var_7 = 5359140553385098834LL;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)217;
int var_11 = -1358587746;
long long int var_15 = -2498149822299197624LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_20 = 732782516;
signed char var_21 = (signed char)-26;
signed char var_22 = (signed char)44;
void init() {
}

void checksum() {
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
