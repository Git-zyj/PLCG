#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-127;
unsigned char var_4 = (unsigned char)178;
long long int var_5 = 5012589045901055344LL;
unsigned int var_6 = 434959981U;
unsigned char var_8 = (unsigned char)160;
unsigned int var_11 = 3298717336U;
int zero = 0;
unsigned int var_14 = 1481845639U;
signed char var_15 = (signed char)-72;
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
