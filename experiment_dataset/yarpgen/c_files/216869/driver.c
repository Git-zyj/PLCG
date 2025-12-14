#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)52;
short var_5 = (short)32474;
long long int var_6 = -5904540638871086446LL;
long long int var_9 = 5807135618917866821LL;
long long int var_13 = 8368420361870711762LL;
signed char var_14 = (signed char)-121;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 203850869;
short var_20 = (short)1079;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
