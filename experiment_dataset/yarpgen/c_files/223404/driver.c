#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)20;
unsigned int var_4 = 3899839602U;
unsigned int var_7 = 444328747U;
short var_8 = (short)27697;
unsigned short var_10 = (unsigned short)13984;
unsigned char var_13 = (unsigned char)72;
int zero = 0;
unsigned short var_18 = (unsigned short)42439;
unsigned char var_19 = (unsigned char)174;
_Bool var_20 = (_Bool)0;
short var_21 = (short)27985;
int var_22 = -41738336;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
