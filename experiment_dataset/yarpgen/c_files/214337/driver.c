#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52979;
unsigned long long int var_1 = 1513515095122021081ULL;
_Bool var_3 = (_Bool)1;
unsigned char var_9 = (unsigned char)81;
_Bool var_12 = (_Bool)1;
long long int var_13 = 7238657819586526938LL;
int zero = 0;
int var_14 = -1536449641;
signed char var_15 = (signed char)-89;
unsigned short var_16 = (unsigned short)24882;
signed char var_17 = (signed char)-31;
long long int var_18 = 3466303067923001096LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
