#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)195;
signed char var_1 = (signed char)118;
unsigned int var_2 = 1086531128U;
unsigned char var_3 = (unsigned char)170;
int var_4 = -92636525;
short var_6 = (short)-11967;
int var_9 = 2029194038;
int zero = 0;
long long int var_10 = -1359193579245970768LL;
unsigned int var_11 = 2288411035U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
