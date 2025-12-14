#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43275;
long long int var_3 = 5634034521141702549LL;
int var_7 = -1487902322;
short var_9 = (short)26239;
int zero = 0;
int var_10 = 1076104429;
int var_11 = 521995900;
unsigned int var_12 = 3973004848U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
