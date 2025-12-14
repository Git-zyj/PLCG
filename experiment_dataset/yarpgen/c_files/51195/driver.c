#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1071783155901624704LL;
unsigned char var_6 = (unsigned char)138;
unsigned short var_7 = (unsigned short)64789;
signed char var_8 = (signed char)14;
signed char var_9 = (signed char)-9;
long long int var_10 = -8452602677516069560LL;
int var_12 = -2055546577;
long long int var_13 = -3923997162168151087LL;
int zero = 0;
long long int var_14 = -3628822965960105088LL;
signed char var_15 = (signed char)-32;
unsigned char var_16 = (unsigned char)52;
long long int var_17 = 6561313937654092466LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
