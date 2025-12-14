#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)36;
signed char var_3 = (signed char)93;
unsigned char var_8 = (unsigned char)95;
unsigned int var_9 = 2801053601U;
signed char var_10 = (signed char)-110;
unsigned char var_11 = (unsigned char)111;
int zero = 0;
long long int var_12 = -6509248306241696477LL;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2531331453U;
long long int var_15 = 6393505601104306800LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
