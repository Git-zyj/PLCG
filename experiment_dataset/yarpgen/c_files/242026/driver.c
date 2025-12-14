#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15018317582364552810ULL;
short var_1 = (short)19942;
signed char var_5 = (signed char)-31;
signed char var_6 = (signed char)-43;
unsigned short var_7 = (unsigned short)26452;
unsigned char var_8 = (unsigned char)64;
int zero = 0;
signed char var_10 = (signed char)77;
long long int var_11 = -5917789385374297141LL;
unsigned short var_12 = (unsigned short)54849;
_Bool var_13 = (_Bool)1;
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
