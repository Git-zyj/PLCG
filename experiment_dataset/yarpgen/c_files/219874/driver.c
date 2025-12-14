#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10106104647681407567ULL;
unsigned long long int var_7 = 17848853711787674607ULL;
signed char var_8 = (signed char)93;
signed char var_9 = (signed char)22;
signed char var_10 = (signed char)-86;
unsigned int var_12 = 2143727819U;
short var_14 = (short)-27099;
long long int var_15 = 969316806219334603LL;
short var_16 = (short)-19538;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_18 = -6381935565636093614LL;
unsigned int var_19 = 4273687348U;
long long int var_20 = -7434487845696741012LL;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)35;
unsigned int var_23 = 412714457U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
