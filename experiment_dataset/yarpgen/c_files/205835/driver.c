#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)44274;
unsigned char var_5 = (unsigned char)31;
long long int var_12 = 3346002459041781468LL;
int zero = 0;
long long int var_17 = -3885873966962248779LL;
unsigned short var_18 = (unsigned short)49162;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
