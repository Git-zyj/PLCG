#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14232735871357432197ULL;
unsigned char var_4 = (unsigned char)167;
short var_6 = (short)7872;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 5119436601058348573ULL;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 1194798736168044222ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
