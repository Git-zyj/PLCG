#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14495651645020817501ULL;
unsigned short var_2 = (unsigned short)43163;
_Bool var_4 = (_Bool)0;
long long int var_5 = 7704086735550145044LL;
unsigned short var_6 = (unsigned short)8369;
long long int var_7 = 7954746353903670184LL;
int var_8 = 2025595201;
signed char var_11 = (signed char)0;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)64;
long long int var_15 = -619668204770524011LL;
unsigned char var_16 = (unsigned char)160;
unsigned short var_17 = (unsigned short)19579;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
