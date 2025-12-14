#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_6 = 16923130840045143791ULL;
unsigned long long int var_8 = 658650401303887118ULL;
signed char var_9 = (signed char)-21;
int zero = 0;
unsigned char var_12 = (unsigned char)101;
unsigned short var_13 = (unsigned short)3920;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
