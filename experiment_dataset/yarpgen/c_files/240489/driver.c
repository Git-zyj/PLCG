#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6130005661316342269LL;
unsigned long long int var_1 = 9238747511794945618ULL;
unsigned char var_2 = (unsigned char)220;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
long long int var_10 = -1326996708262206903LL;
unsigned long long int var_11 = 2985516412852400282ULL;
unsigned long long int var_12 = 5512697794222965161ULL;
signed char var_14 = (signed char)-63;
signed char var_16 = (signed char)-52;
long long int var_18 = 5824484406383744511LL;
int zero = 0;
signed char var_20 = (signed char)-38;
_Bool var_21 = (_Bool)0;
long long int var_22 = -5608153045103800702LL;
signed char var_23 = (signed char)101;
signed char var_24 = (signed char)-43;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
