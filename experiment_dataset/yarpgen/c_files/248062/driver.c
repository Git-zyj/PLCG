#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14721;
long long int var_2 = -3374308378240634493LL;
unsigned long long int var_3 = 2581581055070038475ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 3307828426U;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)86;
long long int var_8 = -2713857555669141162LL;
unsigned int var_9 = 211016189U;
unsigned short var_10 = (unsigned short)25399;
int zero = 0;
unsigned char var_18 = (unsigned char)149;
unsigned short var_19 = (unsigned short)35456;
unsigned char var_20 = (unsigned char)7;
long long int var_21 = 3389344579894335808LL;
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
