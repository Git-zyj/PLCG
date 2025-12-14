#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1390301937U;
unsigned char var_2 = (unsigned char)61;
signed char var_3 = (signed char)-118;
long long int var_7 = 6440319903988843127LL;
long long int var_8 = 6513599927116048330LL;
signed char var_10 = (signed char)-44;
int var_14 = -1477784770;
int zero = 0;
signed char var_15 = (signed char)-52;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 6878442619055602133ULL;
void init() {
}

void checksum() {
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
