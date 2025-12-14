#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2845336818136574299LL;
unsigned int var_1 = 4099049660U;
unsigned short var_2 = (unsigned short)11058;
unsigned int var_3 = 4272631262U;
signed char var_5 = (signed char)27;
unsigned int var_8 = 3131104448U;
unsigned short var_11 = (unsigned short)16944;
unsigned int var_13 = 3125399317U;
int var_16 = 379565800;
int zero = 0;
short var_19 = (short)-773;
short var_20 = (short)-6166;
signed char var_21 = (signed char)25;
int var_22 = -362812317;
short var_23 = (short)-4926;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
