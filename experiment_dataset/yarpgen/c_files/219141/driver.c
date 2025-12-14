#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)100;
short var_1 = (short)4110;
unsigned char var_2 = (unsigned char)196;
_Bool var_3 = (_Bool)0;
unsigned long long int var_6 = 9095607509137170240ULL;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 3739340196U;
int var_9 = 1185386620;
unsigned long long int var_10 = 6655850204959528378ULL;
unsigned int var_12 = 1745862504U;
long long int var_13 = 8737498501768100326LL;
unsigned char var_14 = (unsigned char)147;
unsigned short var_15 = (unsigned short)32969;
int zero = 0;
unsigned long long int var_17 = 8569945228593933683ULL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
