#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6960378448313725701ULL;
short var_1 = (short)4385;
unsigned long long int var_2 = 10593942495087622794ULL;
long long int var_3 = -3731877897633069757LL;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)35;
_Bool var_8 = (_Bool)0;
long long int var_9 = 869067592833935014LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)13457;
unsigned long long int var_13 = 8281087597836722262ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
