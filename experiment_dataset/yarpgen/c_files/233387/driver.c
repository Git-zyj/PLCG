#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1118110181;
long long int var_4 = 9026002019295192984LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 9935213636476052722ULL;
short var_10 = (short)24800;
int zero = 0;
short var_12 = (short)209;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
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
