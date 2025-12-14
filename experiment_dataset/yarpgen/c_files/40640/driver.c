#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1186458851;
short var_2 = (short)30648;
long long int var_3 = -6149602106565752344LL;
unsigned long long int var_4 = 7703973992449831711ULL;
signed char var_5 = (signed char)-50;
long long int var_7 = 1729958389711398356LL;
long long int var_8 = 6866529861936368029LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 327615145U;
short var_12 = (short)23443;
short var_13 = (short)5677;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
