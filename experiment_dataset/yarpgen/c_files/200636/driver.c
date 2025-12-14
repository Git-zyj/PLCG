#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1948781513U;
int var_1 = 166401736;
unsigned short var_2 = (unsigned short)12487;
unsigned int var_3 = 291127680U;
unsigned long long int var_5 = 7405323713061985123ULL;
signed char var_6 = (signed char)31;
unsigned long long int var_7 = 6518986936561285115ULL;
short var_8 = (short)-26581;
unsigned char var_10 = (unsigned char)170;
unsigned char var_11 = (unsigned char)125;
unsigned int var_15 = 4274797232U;
int zero = 0;
unsigned short var_18 = (unsigned short)11111;
unsigned long long int var_19 = 11513863210716704314ULL;
unsigned int var_20 = 3337932113U;
unsigned int var_21 = 3104285948U;
unsigned long long int var_22 = 1674652096910409245ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
