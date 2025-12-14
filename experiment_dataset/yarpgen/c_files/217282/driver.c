#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54287;
int var_2 = 290670626;
unsigned short var_5 = (unsigned short)3266;
unsigned long long int var_10 = 15427756589583926814ULL;
signed char var_16 = (signed char)-85;
int zero = 0;
signed char var_17 = (signed char)61;
unsigned short var_18 = (unsigned short)21732;
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
