#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -76821710;
long long int var_1 = -8832842732497440951LL;
short var_3 = (short)22063;
int var_4 = -955303293;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)46859;
_Bool var_12 = (_Bool)0;
unsigned long long int var_15 = 15577675906096945123ULL;
long long int var_16 = -480393927507620576LL;
int var_18 = -1604363906;
int zero = 0;
signed char var_20 = (signed char)-62;
signed char var_21 = (signed char)127;
long long int var_22 = -898415578231852969LL;
void init() {
}

void checksum() {
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
