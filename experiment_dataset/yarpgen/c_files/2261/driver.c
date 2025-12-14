#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 5502045630565312294ULL;
unsigned char var_6 = (unsigned char)218;
unsigned char var_8 = (unsigned char)183;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)23053;
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
