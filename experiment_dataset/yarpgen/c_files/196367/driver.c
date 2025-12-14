#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2091161641;
long long int var_3 = -1702331604610781454LL;
short var_5 = (short)8445;
long long int var_6 = -7984518839582305203LL;
signed char var_10 = (signed char)-55;
int zero = 0;
int var_11 = -964513442;
int var_12 = -36599349;
int var_13 = 1037909680;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
