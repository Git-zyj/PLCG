#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7017929639611850413LL;
signed char var_3 = (signed char)2;
unsigned int var_6 = 985284475U;
int var_7 = 156639334;
int zero = 0;
long long int var_10 = 2122874201171454986LL;
unsigned char var_11 = (unsigned char)78;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
