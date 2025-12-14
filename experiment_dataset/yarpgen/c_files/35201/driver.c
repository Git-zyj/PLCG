#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)178;
long long int var_2 = 5978951539819796049LL;
int var_4 = -378699667;
short var_5 = (short)1866;
long long int var_6 = -5821194677970989863LL;
unsigned char var_7 = (unsigned char)215;
signed char var_8 = (signed char)-65;
long long int var_10 = 3905389753545700071LL;
long long int var_11 = 103021593821217004LL;
int var_12 = -6248947;
int zero = 0;
unsigned short var_13 = (unsigned short)2649;
long long int var_14 = -8319094194423734261LL;
_Bool var_15 = (_Bool)0;
int var_16 = -1761090238;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
