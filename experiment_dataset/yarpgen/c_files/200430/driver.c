#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-82;
unsigned char var_3 = (unsigned char)195;
long long int var_4 = -6764614755785161922LL;
unsigned char var_5 = (unsigned char)177;
int var_9 = -503540809;
int zero = 0;
unsigned int var_10 = 757843723U;
unsigned int var_11 = 2209287850U;
unsigned int var_12 = 2538797668U;
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
