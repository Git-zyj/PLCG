#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2461427511254019309ULL;
unsigned long long int var_1 = 11895257613503657359ULL;
short var_2 = (short)26245;
signed char var_3 = (signed char)-59;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)46216;
long long int var_7 = -5195114816826362506LL;
_Bool var_8 = (_Bool)0;
long long int var_9 = 458785180121805141LL;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2032042520U;
short var_13 = (short)-12161;
short var_14 = (short)10721;
int zero = 0;
unsigned char var_15 = (unsigned char)169;
unsigned long long int var_16 = 3891962288531331310ULL;
short var_17 = (short)-20042;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
