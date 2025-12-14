#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3103254880434130263ULL;
unsigned int var_1 = 1926534002U;
int var_3 = 1607967714;
signed char var_6 = (signed char)4;
unsigned char var_7 = (unsigned char)138;
_Bool var_8 = (_Bool)1;
unsigned short var_11 = (unsigned short)14468;
int zero = 0;
signed char var_12 = (signed char)-76;
unsigned int var_13 = 2947228653U;
unsigned int var_14 = 2495327475U;
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
