#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 110118650U;
unsigned int var_7 = 1669117259U;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 10663094247361471805ULL;
unsigned int var_13 = 2630806903U;
unsigned long long int var_14 = 18348725363641697081ULL;
unsigned int var_15 = 3201678412U;
int zero = 0;
long long int var_18 = -2820677970164489896LL;
long long int var_19 = -1331016365674822916LL;
signed char var_20 = (signed char)17;
unsigned long long int var_21 = 5557080426422877275ULL;
signed char var_22 = (signed char)52;
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
