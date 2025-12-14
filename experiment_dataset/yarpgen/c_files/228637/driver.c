#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)156;
unsigned long long int var_4 = 14284575090179016431ULL;
signed char var_5 = (signed char)(-127 - 1);
unsigned short var_8 = (unsigned short)1628;
unsigned short var_9 = (unsigned short)15126;
short var_10 = (short)-6653;
short var_11 = (short)-4007;
signed char var_12 = (signed char)111;
signed char var_13 = (signed char)34;
short var_14 = (short)-18432;
unsigned char var_15 = (unsigned char)147;
unsigned int var_16 = 1956966553U;
unsigned int var_17 = 4099877619U;
short var_18 = (short)-21833;
int zero = 0;
unsigned char var_19 = (unsigned char)12;
short var_20 = (short)18098;
signed char var_21 = (signed char)115;
unsigned long long int var_22 = 3651063999844479257ULL;
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
