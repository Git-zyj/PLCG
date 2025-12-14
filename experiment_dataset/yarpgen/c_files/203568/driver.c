#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 234485159;
short var_1 = (short)19839;
signed char var_2 = (signed char)12;
unsigned long long int var_3 = 2761734381651097127ULL;
short var_4 = (short)-4608;
signed char var_5 = (signed char)-26;
signed char var_6 = (signed char)19;
int var_7 = 1603470868;
short var_10 = (short)11201;
int zero = 0;
long long int var_11 = 6280673902979655853LL;
long long int var_12 = 6831539819323547318LL;
signed char var_13 = (signed char)115;
unsigned long long int var_14 = 13351190004805829845ULL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
