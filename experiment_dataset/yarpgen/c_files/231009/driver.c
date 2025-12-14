#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11863236529014229330ULL;
short var_2 = (short)25768;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 6995394359278902959ULL;
signed char var_7 = (signed char)-126;
unsigned short var_8 = (unsigned short)10442;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)32856;
unsigned long long int var_12 = 3647662860340538683ULL;
signed char var_13 = (signed char)44;
int zero = 0;
unsigned short var_15 = (unsigned short)19440;
signed char var_16 = (signed char)101;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
