#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-2;
long long int var_1 = -4201178307288569101LL;
unsigned char var_2 = (unsigned char)163;
unsigned short var_3 = (unsigned short)26545;
signed char var_4 = (signed char)-20;
unsigned long long int var_5 = 373921477752323925ULL;
_Bool var_6 = (_Bool)1;
long long int var_7 = -8194461205697801882LL;
signed char var_8 = (signed char)85;
unsigned int var_9 = 1767789713U;
long long int var_10 = -7844306774059012423LL;
int zero = 0;
short var_12 = (short)6674;
int var_13 = -763352154;
unsigned char var_14 = (unsigned char)231;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
