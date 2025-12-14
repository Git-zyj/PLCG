#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3333484147U;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 9425690542184860209ULL;
unsigned short var_3 = (unsigned short)62867;
unsigned short var_4 = (unsigned short)63538;
unsigned short var_5 = (unsigned short)44745;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)57410;
unsigned short var_8 = (unsigned short)22602;
unsigned int var_9 = 3346641419U;
int var_14 = 1581154755;
unsigned int var_16 = 2876817592U;
int zero = 0;
short var_18 = (short)-5600;
int var_19 = -1415529084;
int var_20 = -712429765;
_Bool var_21 = (_Bool)1;
int var_22 = 180719713;
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
