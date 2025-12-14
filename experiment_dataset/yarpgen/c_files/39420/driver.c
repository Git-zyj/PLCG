#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
unsigned short var_1 = (unsigned short)1478;
long long int var_3 = 4598284987904128293LL;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_11 = -3391072146811855726LL;
signed char var_12 = (signed char)53;
unsigned char var_13 = (unsigned char)229;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
