#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17619660416783442028ULL;
unsigned int var_4 = 3754316632U;
unsigned char var_6 = (unsigned char)117;
unsigned long long int var_10 = 365451472922525347ULL;
int zero = 0;
unsigned int var_20 = 4017839896U;
_Bool var_21 = (_Bool)1;
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
