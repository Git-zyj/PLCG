#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)195;
signed char var_9 = (signed char)-90;
long long int var_11 = 997418047058976614LL;
long long int var_12 = -927499084189604934LL;
int zero = 0;
unsigned long long int var_14 = 5280993424826141208ULL;
int var_15 = -1012487051;
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
