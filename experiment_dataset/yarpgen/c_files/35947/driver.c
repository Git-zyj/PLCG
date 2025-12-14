#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)62648;
short var_3 = (short)-27760;
long long int var_10 = -3783057417541095279LL;
int var_11 = -761115115;
int zero = 0;
long long int var_12 = -7497011806783394721LL;
unsigned int var_13 = 2065133767U;
void init() {
}

void checksum() {
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
