#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 365944338922739380LL;
unsigned long long int var_10 = 11354339719019293722ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-27605;
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
