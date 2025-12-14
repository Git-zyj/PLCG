#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 401558003;
unsigned short var_3 = (unsigned short)43995;
short var_5 = (short)-27454;
unsigned short var_6 = (unsigned short)18259;
unsigned char var_7 = (unsigned char)90;
unsigned int var_8 = 867774989U;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)15732;
int zero = 0;
int var_12 = -509897117;
long long int var_13 = -503818460729613261LL;
int var_14 = 2046247658;
void init() {
}

void checksum() {
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
