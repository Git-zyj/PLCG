#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)16;
_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)245;
short var_4 = (short)15272;
unsigned long long int var_7 = 18142467148513532374ULL;
int var_8 = -1690894622;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_10 = 506215757;
unsigned int var_11 = 1402082764U;
unsigned short var_12 = (unsigned short)25117;
short var_13 = (short)-8999;
unsigned long long int var_14 = 13363927574727992001ULL;
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
