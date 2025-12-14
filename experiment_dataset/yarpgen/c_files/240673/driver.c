#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61744;
unsigned int var_1 = 2760787730U;
unsigned short var_2 = (unsigned short)14458;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_11 = 1118426750;
unsigned char var_12 = (unsigned char)196;
long long int var_13 = -1536259984458096545LL;
unsigned char var_14 = (unsigned char)214;
void init() {
}

void checksum() {
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
