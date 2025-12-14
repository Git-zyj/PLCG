#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)65104;
unsigned char var_3 = (unsigned char)170;
unsigned short var_4 = (unsigned short)59851;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 3482144456U;
int zero = 0;
unsigned long long int var_13 = 14695993797339011586ULL;
int var_14 = 59944773;
void init() {
}

void checksum() {
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
