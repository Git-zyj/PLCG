#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 210082760;
unsigned short var_2 = (unsigned short)3802;
unsigned int var_4 = 2972041539U;
int var_5 = -1669778724;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)33737;
_Bool var_8 = (_Bool)1;
int var_9 = 1191980413;
int zero = 0;
short var_11 = (short)-5492;
unsigned long long int var_12 = 15227030849761606599ULL;
unsigned long long int var_13 = 2638338539887780295ULL;
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
