#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)8578;
unsigned short var_7 = (unsigned short)27767;
int var_9 = -777139001;
unsigned char var_10 = (unsigned char)149;
unsigned long long int var_11 = 13625180593881369600ULL;
int zero = 0;
int var_14 = -990656943;
long long int var_15 = 8468509454809289638LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
