#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2426010736U;
unsigned long long int var_2 = 9239960294922114726ULL;
long long int var_3 = -5368119684369032076LL;
unsigned long long int var_7 = 7980010949642745951ULL;
unsigned int var_15 = 2684614716U;
int zero = 0;
long long int var_17 = 2429102705395114591LL;
unsigned char var_18 = (unsigned char)232;
unsigned long long int var_19 = 10537170539240603569ULL;
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
