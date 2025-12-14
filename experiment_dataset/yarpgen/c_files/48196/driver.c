#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15909214764395539595ULL;
int var_2 = -1770642764;
unsigned int var_6 = 717144217U;
long long int var_7 = 6716736497214699342LL;
unsigned short var_13 = (unsigned short)34208;
long long int var_14 = 5437033074093497932LL;
int zero = 0;
unsigned long long int var_16 = 3397153974337823677ULL;
unsigned long long int var_17 = 12020529552493640551ULL;
short var_18 = (short)-10363;
unsigned long long int var_19 = 13993467432560350414ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
