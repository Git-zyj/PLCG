#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6212613908815047768LL;
unsigned char var_2 = (unsigned char)165;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)252;
unsigned long long int var_8 = 7501329466705099511ULL;
signed char var_9 = (signed char)-116;
unsigned long long int var_10 = 8395044586433053872ULL;
int zero = 0;
long long int var_12 = 6055327526103047341LL;
signed char var_13 = (signed char)-126;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
