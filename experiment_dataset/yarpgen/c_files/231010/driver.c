#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)181;
int var_6 = -968007370;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)52393;
signed char var_9 = (signed char)-102;
short var_10 = (short)-15818;
int zero = 0;
long long int var_11 = 8719131348157408037LL;
unsigned long long int var_12 = 11756285122491420244ULL;
signed char var_13 = (signed char)-127;
int var_14 = 223140514;
unsigned char var_15 = (unsigned char)80;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
