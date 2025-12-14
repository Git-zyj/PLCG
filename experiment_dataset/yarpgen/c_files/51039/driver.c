#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25697;
signed char var_1 = (signed char)-90;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2698650227U;
unsigned long long int var_5 = 11172026228281216767ULL;
unsigned short var_6 = (unsigned short)59833;
short var_7 = (short)28269;
long long int var_9 = 6919781829639063518LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 762686320U;
int var_12 = -38218349;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
