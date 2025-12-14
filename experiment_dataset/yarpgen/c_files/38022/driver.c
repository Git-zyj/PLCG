#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-105;
long long int var_2 = 7420451687264765848LL;
int var_5 = -54591012;
int var_6 = -1794789667;
unsigned short var_7 = (unsigned short)25464;
signed char var_8 = (signed char)41;
unsigned int var_9 = 1706519732U;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)50;
signed char var_12 = (signed char)42;
unsigned short var_13 = (unsigned short)4240;
int var_14 = -789281023;
int zero = 0;
unsigned long long int var_15 = 15083448723489395991ULL;
signed char var_16 = (signed char)-14;
unsigned long long int var_17 = 10790647123030598055ULL;
unsigned int var_18 = 4016544321U;
unsigned char var_19 = (unsigned char)112;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
