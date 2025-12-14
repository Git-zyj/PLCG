#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-68;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-4918;
unsigned long long int var_11 = 5724810716030198452ULL;
short var_12 = (short)-31322;
signed char var_13 = (signed char)125;
short var_14 = (short)-26323;
short var_16 = (short)-11511;
unsigned short var_18 = (unsigned short)59250;
unsigned short var_19 = (unsigned short)50050;
int zero = 0;
unsigned int var_20 = 3849446872U;
unsigned int var_21 = 2752567892U;
unsigned char var_22 = (unsigned char)170;
int var_23 = -2089482608;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
