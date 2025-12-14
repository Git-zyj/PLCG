#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-20;
signed char var_2 = (signed char)-29;
unsigned long long int var_4 = 4317269301917313446ULL;
int var_6 = -427537340;
unsigned long long int var_7 = 3605078977218033567ULL;
unsigned long long int var_11 = 17796042958467913864ULL;
signed char var_13 = (signed char)-47;
int zero = 0;
signed char var_20 = (signed char)-28;
unsigned long long int var_21 = 13599633210528304908ULL;
void init() {
}

void checksum() {
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
