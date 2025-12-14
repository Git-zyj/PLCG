#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1321175963U;
signed char var_1 = (signed char)-53;
long long int var_2 = -8931636342832724545LL;
unsigned short var_5 = (unsigned short)3617;
long long int var_9 = -2185950046684379069LL;
unsigned int var_12 = 485322447U;
int zero = 0;
unsigned long long int var_13 = 6034692048506164580ULL;
short var_14 = (short)19708;
unsigned char var_15 = (unsigned char)139;
signed char var_16 = (signed char)41;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
