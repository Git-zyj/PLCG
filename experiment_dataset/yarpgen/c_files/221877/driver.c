#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6704811517679676898LL;
unsigned long long int var_2 = 1324023263023681870ULL;
unsigned long long int var_3 = 17692224186224507152ULL;
unsigned long long int var_5 = 7776343926955695098ULL;
int var_7 = -961244756;
unsigned short var_8 = (unsigned short)26300;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)118;
long long int var_12 = 4814186604571908436LL;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)64252;
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
