#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27915;
long long int var_2 = -5940243065384125265LL;
unsigned char var_8 = (unsigned char)53;
short var_9 = (short)18066;
long long int var_10 = -4646306678347283145LL;
unsigned char var_12 = (unsigned char)167;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = 1524047547;
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
