#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46743;
short var_3 = (short)-2317;
unsigned int var_7 = 2126418007U;
_Bool var_9 = (_Bool)0;
long long int var_15 = -3362076865979968105LL;
int zero = 0;
unsigned int var_16 = 3104379784U;
unsigned char var_17 = (unsigned char)234;
unsigned int var_18 = 3179551423U;
void init() {
}

void checksum() {
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
