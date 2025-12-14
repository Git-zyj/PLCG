#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14172963388815742361ULL;
unsigned int var_3 = 3079447451U;
unsigned short var_12 = (unsigned short)21743;
signed char var_15 = (signed char)32;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 12870159412750308987ULL;
long long int var_20 = -8987923241751882342LL;
long long int var_21 = 2348402920368966949LL;
void init() {
}

void checksum() {
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
