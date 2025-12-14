#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4340844931510392386ULL;
unsigned short var_10 = (unsigned short)58675;
unsigned char var_12 = (unsigned char)83;
long long int var_13 = -4584865569400801297LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)111;
unsigned char var_20 = (unsigned char)52;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
