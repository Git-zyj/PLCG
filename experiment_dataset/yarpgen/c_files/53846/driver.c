#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)55155;
unsigned char var_2 = (unsigned char)17;
unsigned int var_3 = 2848624368U;
unsigned char var_5 = (unsigned char)134;
unsigned long long int var_6 = 14814215185110796677ULL;
unsigned long long int var_8 = 14021180719823217457ULL;
short var_9 = (short)20555;
int zero = 0;
int var_10 = -994457342;
_Bool var_11 = (_Bool)1;
int var_12 = -1913537353;
long long int var_13 = 5163608330588023240LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
