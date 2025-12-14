#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)14;
int var_9 = 766143659;
unsigned short var_10 = (unsigned short)5640;
long long int var_12 = -7964452015113220194LL;
int zero = 0;
long long int var_14 = -1917407936852887403LL;
signed char var_15 = (signed char)-68;
long long int var_16 = 5858409762817586394LL;
long long int var_17 = 378221296509957434LL;
unsigned char var_18 = (unsigned char)150;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
