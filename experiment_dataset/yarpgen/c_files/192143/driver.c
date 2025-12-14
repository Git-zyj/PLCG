#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-78;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1478884132U;
unsigned char var_8 = (unsigned char)83;
unsigned int var_9 = 242225104U;
unsigned long long int var_10 = 11334241895947613932ULL;
signed char var_11 = (signed char)77;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)24;
unsigned long long int var_14 = 6334041814247658259ULL;
int zero = 0;
long long int var_16 = 1401947125195456652LL;
long long int var_17 = 791570778698006315LL;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 7203604401519205589ULL;
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
