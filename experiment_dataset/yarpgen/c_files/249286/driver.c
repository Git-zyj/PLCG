#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9369;
unsigned long long int var_5 = 13696910424019219619ULL;
int var_7 = 624568848;
unsigned char var_9 = (unsigned char)101;
unsigned short var_10 = (unsigned short)55772;
short var_12 = (short)11967;
short var_16 = (short)981;
short var_18 = (short)-3085;
int zero = 0;
unsigned long long int var_19 = 3635472941491232893ULL;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)31;
int var_22 = -1272165945;
void init() {
}

void checksum() {
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
