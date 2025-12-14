#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2773712372U;
unsigned char var_1 = (unsigned char)116;
long long int var_3 = 8792865538959030114LL;
unsigned char var_6 = (unsigned char)211;
unsigned char var_8 = (unsigned char)110;
short var_9 = (short)11520;
unsigned short var_12 = (unsigned short)11892;
unsigned char var_13 = (unsigned char)155;
short var_14 = (short)13747;
unsigned char var_18 = (unsigned char)62;
int zero = 0;
long long int var_19 = -8147911384188077437LL;
signed char var_20 = (signed char)86;
long long int var_21 = 1855918000038400519LL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
