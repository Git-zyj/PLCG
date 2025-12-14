#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-101;
_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)50137;
long long int var_8 = 4385137027137295631LL;
int zero = 0;
unsigned char var_10 = (unsigned char)117;
unsigned short var_11 = (unsigned short)4047;
int var_12 = 303541283;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
