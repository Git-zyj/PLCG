#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3401843966052033350LL;
unsigned char var_1 = (unsigned char)169;
_Bool var_3 = (_Bool)1;
short var_4 = (short)19841;
signed char var_7 = (signed char)-80;
int zero = 0;
long long int var_10 = -3203803021705143398LL;
unsigned int var_11 = 1606593977U;
long long int var_12 = -7524461236345347336LL;
short var_13 = (short)25953;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
