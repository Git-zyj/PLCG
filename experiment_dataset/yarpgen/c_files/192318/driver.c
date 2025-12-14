#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1317063937;
_Bool var_2 = (_Bool)1;
long long int var_3 = 1002191890492803233LL;
unsigned long long int var_4 = 1155986409646886329ULL;
signed char var_5 = (signed char)-33;
short var_9 = (short)-12546;
unsigned short var_11 = (unsigned short)50301;
short var_12 = (short)-31468;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = 1465009766;
unsigned short var_15 = (unsigned short)58420;
unsigned char var_16 = (unsigned char)108;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
