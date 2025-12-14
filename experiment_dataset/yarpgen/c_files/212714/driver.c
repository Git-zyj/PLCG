#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)106;
int var_2 = -1196257519;
short var_7 = (short)-28849;
_Bool var_10 = (_Bool)0;
short var_11 = (short)3818;
long long int var_12 = 5091439257018813153LL;
unsigned char var_13 = (unsigned char)133;
unsigned short var_14 = (unsigned short)46690;
signed char var_15 = (signed char)31;
unsigned long long int var_17 = 9119149935968046913ULL;
signed char var_18 = (signed char)95;
int zero = 0;
unsigned int var_20 = 3647789035U;
signed char var_21 = (signed char)24;
signed char var_22 = (signed char)66;
_Bool var_23 = (_Bool)1;
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
