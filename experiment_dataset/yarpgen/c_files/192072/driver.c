#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31375;
signed char var_2 = (signed char)90;
int var_4 = 944226933;
unsigned char var_16 = (unsigned char)98;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-74;
unsigned int var_20 = 640224723U;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
