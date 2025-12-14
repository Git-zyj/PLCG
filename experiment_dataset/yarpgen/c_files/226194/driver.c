#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1015;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-75;
unsigned char var_3 = (unsigned char)228;
int var_4 = -1971429880;
unsigned char var_6 = (unsigned char)130;
unsigned int var_9 = 258718321U;
int zero = 0;
long long int var_10 = 7038710280029233876LL;
signed char var_11 = (signed char)-120;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
