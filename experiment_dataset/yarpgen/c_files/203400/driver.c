#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 946803705;
short var_4 = (short)11994;
long long int var_5 = 4738561156037633063LL;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 6019680374448715986ULL;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-698;
unsigned long long int var_12 = 339301246402154212ULL;
signed char var_14 = (signed char)109;
int zero = 0;
short var_16 = (short)-27096;
unsigned char var_17 = (unsigned char)132;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)29;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
