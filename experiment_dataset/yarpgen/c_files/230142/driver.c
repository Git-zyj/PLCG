#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)2995;
int var_11 = -605859910;
short var_13 = (short)-9014;
signed char var_14 = (signed char)-19;
_Bool var_16 = (_Bool)0;
short var_18 = (short)-31807;
int zero = 0;
int var_19 = 1129561633;
signed char var_20 = (signed char)119;
unsigned long long int var_21 = 16864090621479837897ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
