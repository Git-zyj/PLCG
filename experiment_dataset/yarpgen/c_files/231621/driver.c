#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)26813;
unsigned int var_3 = 4133123163U;
unsigned int var_4 = 1659756742U;
signed char var_7 = (signed char)-96;
unsigned long long int var_10 = 13046335943671338781ULL;
int zero = 0;
unsigned long long int var_11 = 17974474279580766073ULL;
long long int var_12 = 4747675729928328457LL;
signed char var_13 = (signed char)-95;
short var_14 = (short)-29035;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
