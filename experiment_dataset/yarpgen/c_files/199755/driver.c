#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19133;
signed char var_2 = (signed char)-60;
unsigned long long int var_6 = 791038758685162205ULL;
unsigned char var_9 = (unsigned char)176;
unsigned char var_10 = (unsigned char)53;
long long int var_12 = -3309231680028325420LL;
long long int var_13 = -878488520392682029LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 17806424883050435826ULL;
long long int var_19 = -8810535990398125302LL;
unsigned char var_20 = (unsigned char)182;
int var_21 = 370021821;
unsigned char var_22 = (unsigned char)163;
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
