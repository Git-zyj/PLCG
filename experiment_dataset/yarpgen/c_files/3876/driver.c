#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62707;
unsigned short var_2 = (unsigned short)6738;
unsigned long long int var_4 = 4530143835819976246ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)22859;
int var_9 = -2097437064;
unsigned int var_10 = 414854034U;
unsigned int var_15 = 3504966160U;
unsigned int var_18 = 1539902044U;
int zero = 0;
unsigned char var_19 = (unsigned char)17;
unsigned int var_20 = 450037591U;
void init() {
}

void checksum() {
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
