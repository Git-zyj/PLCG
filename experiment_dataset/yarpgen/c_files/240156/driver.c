#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)141;
long long int var_3 = 5532699358346806458LL;
long long int var_4 = 3829059607363342697LL;
unsigned char var_8 = (unsigned char)61;
long long int var_10 = 6031986536142587315LL;
short var_12 = (short)22280;
int zero = 0;
long long int var_14 = -4051398184305949599LL;
long long int var_15 = 4250962051971388924LL;
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
