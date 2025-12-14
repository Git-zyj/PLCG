#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)93;
long long int var_9 = -4436190216274994965LL;
short var_10 = (short)476;
int var_18 = -1830319177;
int zero = 0;
int var_19 = 2075493876;
signed char var_20 = (signed char)-51;
signed char var_21 = (signed char)113;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
