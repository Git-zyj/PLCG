#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 7966711323157889764ULL;
unsigned char var_8 = (unsigned char)32;
unsigned long long int var_10 = 11704636521976370007ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 3595240018022748438ULL;
unsigned short var_14 = (unsigned short)16912;
unsigned short var_16 = (unsigned short)57500;
int zero = 0;
unsigned char var_17 = (unsigned char)167;
unsigned short var_18 = (unsigned short)27316;
long long int var_19 = -1343732701868537255LL;
unsigned char var_20 = (unsigned char)80;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
