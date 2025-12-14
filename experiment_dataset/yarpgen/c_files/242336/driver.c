#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 37884595385350657LL;
unsigned char var_5 = (unsigned char)237;
unsigned long long int var_7 = 6748480308071123743ULL;
unsigned long long int var_8 = 15625764320751509069ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_17 = 2003176212U;
signed char var_19 = (signed char)92;
int zero = 0;
unsigned char var_20 = (unsigned char)157;
int var_21 = -1223306498;
int var_22 = -601782014;
long long int var_23 = -291176659847171102LL;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
