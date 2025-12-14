#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-104;
signed char var_2 = (signed char)-64;
unsigned long long int var_3 = 8803440375237154248ULL;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 4015838801U;
long long int var_8 = -1524022462056434153LL;
unsigned int var_9 = 1610940337U;
short var_11 = (short)25665;
unsigned short var_12 = (unsigned short)15026;
_Bool var_13 = (_Bool)1;
unsigned char var_15 = (unsigned char)163;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 14903205837037704547ULL;
signed char var_18 = (signed char)-67;
unsigned int var_19 = 4095801186U;
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
