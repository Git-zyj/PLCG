#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)52;
long long int var_1 = 4882484961745932810LL;
long long int var_3 = -2401393743747881529LL;
unsigned char var_4 = (unsigned char)131;
long long int var_5 = -4275284437231386657LL;
unsigned char var_6 = (unsigned char)123;
unsigned long long int var_7 = 15334199729796430205ULL;
unsigned char var_8 = (unsigned char)18;
unsigned char var_9 = (unsigned char)82;
int zero = 0;
long long int var_11 = -7788946424331786534LL;
unsigned char var_12 = (unsigned char)130;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
