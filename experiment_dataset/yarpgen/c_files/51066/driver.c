#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)33;
short var_2 = (short)22237;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)50676;
unsigned char var_6 = (unsigned char)230;
unsigned long long int var_7 = 3101438871166292010ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_10 = -4790472491753900200LL;
unsigned short var_11 = (unsigned short)28591;
_Bool var_12 = (_Bool)1;
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
