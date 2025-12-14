#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)31937;
long long int var_9 = 247969752874836981LL;
long long int var_10 = 2705114008777596327LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 728541276705595789LL;
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
