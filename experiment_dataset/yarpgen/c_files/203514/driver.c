#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)104;
unsigned short var_2 = (unsigned short)26134;
long long int var_5 = -1115380771027020848LL;
long long int var_6 = -3784596770801635567LL;
unsigned int var_7 = 4033311779U;
_Bool var_8 = (_Bool)1;
int var_9 = -721715560;
int zero = 0;
unsigned int var_11 = 3208187828U;
unsigned char var_12 = (unsigned char)192;
signed char var_13 = (signed char)125;
unsigned int var_14 = 4234696968U;
unsigned short var_15 = (unsigned short)54964;
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
