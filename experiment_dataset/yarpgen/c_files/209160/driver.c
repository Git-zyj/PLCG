#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 9190373874604282950LL;
long long int var_7 = -5161244142764019046LL;
unsigned long long int var_13 = 2672118877608911028ULL;
unsigned char var_14 = (unsigned char)119;
int var_19 = 626514360;
int zero = 0;
unsigned char var_20 = (unsigned char)186;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
