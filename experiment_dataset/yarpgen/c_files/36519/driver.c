#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-27772;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)194;
short var_9 = (short)22094;
unsigned int var_12 = 353256856U;
int zero = 0;
unsigned short var_15 = (unsigned short)52847;
long long int var_16 = -3792122086242171941LL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 8747582537922645629ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
