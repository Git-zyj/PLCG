#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50248;
long long int var_3 = 1419154250925322210LL;
long long int var_4 = -2133990642137555995LL;
_Bool var_5 = (_Bool)0;
unsigned char var_8 = (unsigned char)170;
long long int var_10 = 4947202568976282669LL;
unsigned int var_12 = 3467831142U;
long long int var_13 = 7575439280663721561LL;
long long int var_15 = -5035346198196684477LL;
int zero = 0;
long long int var_16 = -3435300382793269114LL;
unsigned char var_17 = (unsigned char)15;
signed char var_18 = (signed char)-29;
void init() {
}

void checksum() {
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
