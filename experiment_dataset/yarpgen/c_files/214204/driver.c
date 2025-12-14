#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2511838749U;
unsigned short var_5 = (unsigned short)51087;
int var_10 = -1664469095;
unsigned char var_11 = (unsigned char)64;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 3562533265362355202ULL;
unsigned char var_20 = (unsigned char)161;
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
