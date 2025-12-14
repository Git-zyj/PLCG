#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27207;
short var_9 = (short)-712;
unsigned char var_11 = (unsigned char)13;
int var_12 = 677543433;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = -8208802919824139118LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
