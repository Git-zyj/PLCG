#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3631336403U;
unsigned short var_4 = (unsigned short)39591;
int var_6 = 1555890447;
unsigned char var_7 = (unsigned char)65;
int zero = 0;
short var_10 = (short)-9637;
_Bool var_11 = (_Bool)0;
long long int var_12 = 9074039967528119653LL;
unsigned short var_13 = (unsigned short)50346;
long long int var_14 = -7532600465989879128LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
