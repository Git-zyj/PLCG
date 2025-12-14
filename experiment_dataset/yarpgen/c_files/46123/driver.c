#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8598797144797972722LL;
unsigned long long int var_2 = 13333515373552329531ULL;
long long int var_5 = 3838765771328483552LL;
short var_7 = (short)15173;
long long int var_10 = 5141602140976853828LL;
unsigned long long int var_14 = 17842137068758525387ULL;
signed char var_15 = (signed char)-4;
int zero = 0;
unsigned long long int var_19 = 6540619619956666845ULL;
long long int var_20 = 5541713150835761586LL;
unsigned long long int var_21 = 17039264745338651717ULL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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
