#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)31372;
signed char var_4 = (signed char)-65;
_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)30345;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 10793122211382581880ULL;
short var_13 = (short)-19738;
unsigned short var_17 = (unsigned short)57981;
int zero = 0;
long long int var_19 = -6265221768568457957LL;
short var_20 = (short)-25479;
void init() {
}

void checksum() {
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
