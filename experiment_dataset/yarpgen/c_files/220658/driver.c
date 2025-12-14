#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15581;
long long int var_1 = 2868334152865901659LL;
unsigned int var_3 = 1779171043U;
unsigned int var_4 = 3819603290U;
unsigned long long int var_5 = 15730999364660048595ULL;
long long int var_6 = 1875975961584023941LL;
_Bool var_7 = (_Bool)0;
unsigned int var_11 = 3893825751U;
int zero = 0;
unsigned short var_12 = (unsigned short)48736;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)57;
long long int var_15 = 1793677750630366771LL;
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
