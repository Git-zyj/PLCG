#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)220;
int var_1 = 1457786906;
long long int var_2 = 7161069437117213789LL;
unsigned long long int var_9 = 9104465569352189052ULL;
signed char var_12 = (signed char)-32;
int zero = 0;
unsigned long long int var_16 = 4600511854272756045ULL;
long long int var_17 = -1018638818360462460LL;
unsigned short var_18 = (unsigned short)5289;
unsigned char var_19 = (unsigned char)50;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
