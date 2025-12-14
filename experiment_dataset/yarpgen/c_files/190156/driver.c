#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15451943968727679329ULL;
long long int var_2 = -106775793470487089LL;
unsigned long long int var_4 = 8785724549140117129ULL;
unsigned char var_5 = (unsigned char)171;
signed char var_6 = (signed char)68;
unsigned int var_8 = 1699482549U;
unsigned char var_11 = (unsigned char)10;
int zero = 0;
long long int var_12 = -5302709375673974962LL;
long long int var_13 = -8454160026927698489LL;
unsigned long long int var_14 = 4092238569311808156ULL;
unsigned int var_15 = 863219238U;
void init() {
}

void checksum() {
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
