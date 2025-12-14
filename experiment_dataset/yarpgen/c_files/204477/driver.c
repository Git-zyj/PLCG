#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 181027582513535093LL;
unsigned char var_3 = (unsigned char)182;
signed char var_9 = (signed char)-28;
long long int var_10 = -1746878565106504333LL;
int zero = 0;
int var_12 = -1421624372;
int var_13 = 1837313183;
short var_14 = (short)-26206;
unsigned char var_15 = (unsigned char)29;
unsigned short var_16 = (unsigned short)60485;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
