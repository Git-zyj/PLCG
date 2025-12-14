#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-121;
long long int var_1 = 9096180211848903088LL;
signed char var_3 = (signed char)40;
int var_4 = 1350364711;
long long int var_6 = 7580367736772147289LL;
unsigned short var_7 = (unsigned short)25395;
short var_8 = (short)-4034;
signed char var_9 = (signed char)62;
int zero = 0;
long long int var_12 = -7732254251352422663LL;
unsigned char var_13 = (unsigned char)102;
short var_14 = (short)-1002;
signed char var_15 = (signed char)54;
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
