#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9181289209499452952ULL;
long long int var_3 = 490697981286065882LL;
long long int var_4 = 2170442981097195129LL;
long long int var_5 = 3335205084359512418LL;
long long int var_7 = 6349781190493635779LL;
long long int var_8 = 8892221438849875368LL;
int zero = 0;
long long int var_11 = 6670427326784461033LL;
unsigned long long int var_12 = 15087624350535456522ULL;
unsigned char var_13 = (unsigned char)35;
short var_14 = (short)8819;
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
