#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1116853667U;
signed char var_5 = (signed char)111;
signed char var_7 = (signed char)-10;
_Bool var_8 = (_Bool)0;
int var_9 = -854418680;
short var_14 = (short)18922;
unsigned char var_17 = (unsigned char)93;
short var_19 = (short)27526;
int zero = 0;
long long int var_20 = -3397599822063771945LL;
int var_21 = 359703426;
long long int var_22 = 1940784925806962792LL;
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
