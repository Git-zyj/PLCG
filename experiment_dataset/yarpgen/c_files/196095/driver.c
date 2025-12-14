#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16515162017512196861ULL;
long long int var_1 = 7438643834677111746LL;
long long int var_2 = -388226112395817845LL;
long long int var_6 = -800665881789100181LL;
unsigned long long int var_7 = 3506853437807242400ULL;
long long int var_8 = 3017655911200358146LL;
unsigned int var_9 = 1738743519U;
int zero = 0;
unsigned long long int var_11 = 13358878629570519497ULL;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)6;
long long int var_14 = -718214217000460505LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
