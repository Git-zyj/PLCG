#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1398946969043229313ULL;
unsigned long long int var_2 = 5901493883431586437ULL;
unsigned char var_6 = (unsigned char)44;
_Bool var_7 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)41;
long long int var_12 = 4176820899408495211LL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)56624;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
