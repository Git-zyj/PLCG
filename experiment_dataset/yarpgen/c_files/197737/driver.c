#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 893639167176304306LL;
int var_3 = 829149337;
short var_5 = (short)-3818;
signed char var_7 = (signed char)-59;
long long int var_9 = 3490994821169770465LL;
short var_12 = (short)30103;
unsigned char var_13 = (unsigned char)29;
long long int var_14 = -5346541898858570776LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_18 = -7692498450232217954LL;
signed char var_19 = (signed char)-35;
int var_20 = 149607361;
signed char var_21 = (signed char)50;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
