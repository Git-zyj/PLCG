#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)53463;
short var_4 = (short)-9176;
unsigned short var_7 = (unsigned short)23839;
signed char var_8 = (signed char)13;
int var_12 = -1328494657;
signed char var_13 = (signed char)-123;
int zero = 0;
long long int var_17 = 8953099936142027714LL;
unsigned long long int var_18 = 858034136103975794ULL;
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
