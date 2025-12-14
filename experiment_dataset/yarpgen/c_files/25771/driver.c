#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27516;
long long int var_5 = -2919178258192142177LL;
int var_7 = 1904181617;
short var_8 = (short)19114;
short var_10 = (short)-16301;
unsigned long long int var_11 = 4040526342867371948ULL;
int zero = 0;
unsigned long long int var_13 = 15304844859476003910ULL;
unsigned int var_14 = 3927449744U;
signed char var_15 = (signed char)-51;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
