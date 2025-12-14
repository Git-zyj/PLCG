#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4042160830U;
unsigned int var_1 = 3417143597U;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-29836;
unsigned long long int var_4 = 1596000455540260361ULL;
unsigned long long int var_9 = 10657913103891382126ULL;
unsigned long long int var_11 = 17796959237504951021ULL;
long long int var_12 = 1972916827629826783LL;
unsigned long long int var_14 = 432136882131477120ULL;
short var_15 = (short)-6521;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2002770190U;
short var_18 = (short)15784;
long long int var_19 = 1373106579869228357LL;
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
