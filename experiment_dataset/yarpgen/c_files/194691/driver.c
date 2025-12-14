#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40087;
long long int var_5 = -7233898001635265929LL;
short var_8 = (short)10765;
unsigned short var_9 = (unsigned short)19196;
signed char var_12 = (signed char)6;
int zero = 0;
unsigned short var_13 = (unsigned short)9070;
signed char var_14 = (signed char)-20;
void init() {
}

void checksum() {
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
