#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-25;
unsigned short var_4 = (unsigned short)41746;
long long int var_7 = -6938999127448770610LL;
unsigned char var_10 = (unsigned char)222;
unsigned short var_11 = (unsigned short)37515;
signed char var_12 = (signed char)119;
int zero = 0;
unsigned long long int var_13 = 9409130937345928536ULL;
signed char var_14 = (signed char)-68;
signed char var_15 = (signed char)122;
long long int var_16 = 7800508370467170713LL;
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
