#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42194;
signed char var_2 = (signed char)-77;
signed char var_4 = (signed char)84;
long long int var_8 = -8808010557272215979LL;
int var_9 = 596279505;
signed char var_14 = (signed char)-115;
unsigned long long int var_15 = 173398693578545935ULL;
unsigned short var_16 = (unsigned short)19520;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)62388;
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
