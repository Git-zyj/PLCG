#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1642302727741159480LL;
unsigned short var_2 = (unsigned short)19014;
unsigned long long int var_3 = 8195766544369191695ULL;
unsigned int var_4 = 2414141612U;
long long int var_5 = 796311970846222489LL;
unsigned char var_6 = (unsigned char)57;
_Bool var_9 = (_Bool)0;
int var_10 = 582412618;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 2846605295223322931LL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 17742102367108497983ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
