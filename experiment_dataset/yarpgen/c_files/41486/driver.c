#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3313801914U;
unsigned char var_2 = (unsigned char)115;
int var_3 = 1603375495;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 5459684666425460924ULL;
long long int var_6 = 1327840729209854666LL;
unsigned short var_9 = (unsigned short)49445;
unsigned short var_11 = (unsigned short)54260;
int zero = 0;
long long int var_12 = -7933093354282216076LL;
int var_13 = 290290019;
unsigned int var_14 = 252804869U;
_Bool var_15 = (_Bool)1;
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
