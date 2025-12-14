#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1670055314;
unsigned long long int var_4 = 17330606633975130166ULL;
signed char var_10 = (signed char)82;
unsigned int var_11 = 4273351213U;
signed char var_12 = (signed char)108;
unsigned char var_13 = (unsigned char)101;
int var_15 = -1248420172;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)21017;
unsigned char var_18 = (unsigned char)145;
long long int var_19 = -3803821530608524469LL;
unsigned int var_20 = 2195704631U;
int var_21 = 359666739;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
