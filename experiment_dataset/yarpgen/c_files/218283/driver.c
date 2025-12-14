#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2433266246213132291ULL;
short var_1 = (short)-9349;
unsigned int var_2 = 3997184796U;
int var_3 = 807631878;
unsigned short var_4 = (unsigned short)23157;
int var_5 = -983082672;
int var_7 = -2002865163;
unsigned char var_8 = (unsigned char)151;
short var_9 = (short)2915;
unsigned char var_10 = (unsigned char)93;
unsigned long long int var_11 = 15932471017460417958ULL;
int var_12 = -862494234;
unsigned int var_14 = 4162006574U;
int var_15 = 610387489;
int var_16 = -1650011694;
int zero = 0;
unsigned long long int var_18 = 6287780082807334305ULL;
short var_19 = (short)-2424;
unsigned int var_20 = 1383545715U;
unsigned long long int var_21 = 10214591700461860289ULL;
int var_22 = 489213210;
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
