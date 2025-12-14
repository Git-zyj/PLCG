#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 615526716U;
unsigned short var_4 = (unsigned short)31286;
unsigned int var_5 = 2620951727U;
signed char var_6 = (signed char)-79;
_Bool var_7 = (_Bool)0;
short var_8 = (short)18624;
int zero = 0;
int var_10 = -44723090;
unsigned long long int var_11 = 1398633987362066742ULL;
unsigned long long int var_12 = 3976166861512553968ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
