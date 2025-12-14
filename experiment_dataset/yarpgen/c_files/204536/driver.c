#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13415852469638535050ULL;
unsigned long long int var_2 = 139191133840361569ULL;
short var_3 = (short)-31748;
int var_4 = -1370278109;
long long int var_5 = 6570617833427621420LL;
unsigned int var_8 = 1863627107U;
long long int var_9 = 914878630579707448LL;
int var_11 = -1383357344;
unsigned short var_12 = (unsigned short)60725;
unsigned char var_13 = (unsigned char)82;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 1322673972U;
unsigned short var_17 = (unsigned short)35176;
unsigned int var_18 = 1879913684U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
