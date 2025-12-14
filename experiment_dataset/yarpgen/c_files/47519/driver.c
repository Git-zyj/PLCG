#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7027626826864320149LL;
long long int var_4 = 3178677758769175671LL;
signed char var_6 = (signed char)70;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 5721281282891887738ULL;
int zero = 0;
long long int var_15 = 1468500329531145651LL;
unsigned long long int var_16 = 5320423729435603530ULL;
_Bool var_17 = (_Bool)0;
long long int var_18 = 618340589268212584LL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
