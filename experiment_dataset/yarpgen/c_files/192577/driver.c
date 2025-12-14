#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1048912639;
unsigned short var_1 = (unsigned short)43667;
long long int var_4 = -6964062054013824810LL;
long long int var_5 = 195490881388194323LL;
unsigned short var_6 = (unsigned short)1652;
_Bool var_8 = (_Bool)0;
long long int var_10 = -708445393057186808LL;
int zero = 0;
long long int var_11 = -4614503640793851818LL;
long long int var_12 = 8700413693938335019LL;
unsigned short var_13 = (unsigned short)13820;
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
