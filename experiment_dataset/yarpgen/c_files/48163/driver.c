#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1200878904U;
signed char var_9 = (signed char)-38;
int var_12 = -1258231372;
signed char var_13 = (signed char)82;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)94;
unsigned short var_18 = (unsigned short)25043;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
