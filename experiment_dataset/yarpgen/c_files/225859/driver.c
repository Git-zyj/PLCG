#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)12780;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)120;
short var_8 = (short)10213;
unsigned short var_10 = (unsigned short)49483;
int zero = 0;
long long int var_11 = -818054001389146996LL;
long long int var_12 = 1612493850417274603LL;
void init() {
}

void checksum() {
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
