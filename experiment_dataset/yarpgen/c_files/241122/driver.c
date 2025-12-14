#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)22601;
long long int var_4 = 67296085183290487LL;
long long int var_5 = 7698371329936439951LL;
unsigned short var_8 = (unsigned short)42468;
unsigned int var_10 = 3323863891U;
long long int var_11 = -653364507445132478LL;
short var_12 = (short)-8710;
int zero = 0;
unsigned short var_15 = (unsigned short)41028;
unsigned long long int var_16 = 2303434602290959658ULL;
signed char var_17 = (signed char)55;
long long int var_18 = 4391862864756251596LL;
int var_19 = -1821132681;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
