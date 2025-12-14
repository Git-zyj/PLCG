#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14564967051657618816ULL;
unsigned long long int var_12 = 11957886886440174365ULL;
long long int var_14 = 2122699515486447409LL;
int zero = 0;
unsigned long long int var_18 = 11442199526711751195ULL;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)176;
unsigned long long int var_21 = 13496783819990563414ULL;
_Bool var_22 = (_Bool)1;
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
