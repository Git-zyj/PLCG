#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1959710448;
unsigned int var_9 = 842953599U;
unsigned char var_11 = (unsigned char)125;
unsigned short var_14 = (unsigned short)52337;
long long int var_15 = 4408491145039577941LL;
int zero = 0;
unsigned char var_17 = (unsigned char)156;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)5;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
