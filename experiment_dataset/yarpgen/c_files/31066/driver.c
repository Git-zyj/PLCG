#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
signed char var_10 = (signed char)102;
unsigned long long int var_11 = 13745283291302679361ULL;
unsigned int var_13 = 3616168134U;
long long int var_15 = 8989598764645910360LL;
int var_17 = 834712450;
int zero = 0;
unsigned char var_20 = (unsigned char)114;
long long int var_21 = -1874066975697805057LL;
unsigned short var_22 = (unsigned short)51253;
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
