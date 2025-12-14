#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)35;
long long int var_2 = 1288116953236792147LL;
int var_3 = -1597398585;
unsigned short var_4 = (unsigned short)3164;
signed char var_11 = (signed char)-65;
signed char var_12 = (signed char)20;
long long int var_13 = 1953311108561648614LL;
int zero = 0;
unsigned long long int var_14 = 14128698463839932441ULL;
unsigned long long int var_15 = 9881757732434955845ULL;
unsigned short var_16 = (unsigned short)56037;
void init() {
}

void checksum() {
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
