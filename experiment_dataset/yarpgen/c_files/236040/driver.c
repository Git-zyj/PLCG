#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)18;
short var_4 = (short)-31376;
int var_9 = -1616971667;
int var_11 = -1897140988;
short var_13 = (short)29411;
int zero = 0;
unsigned long long int var_18 = 14363164377218436406ULL;
short var_19 = (short)9862;
unsigned char var_20 = (unsigned char)116;
int var_21 = -515427758;
unsigned int var_22 = 4076070976U;
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
