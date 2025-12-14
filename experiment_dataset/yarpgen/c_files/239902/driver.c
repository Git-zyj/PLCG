#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)11994;
long long int var_4 = 6125089026773446781LL;
unsigned short var_6 = (unsigned short)19542;
unsigned char var_9 = (unsigned char)89;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3324920637U;
void init() {
}

void checksum() {
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
