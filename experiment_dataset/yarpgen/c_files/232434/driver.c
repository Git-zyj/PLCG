#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16484492895817705414ULL;
long long int var_4 = 6154605253107208611LL;
unsigned short var_7 = (unsigned short)19661;
int var_10 = -1386085996;
int zero = 0;
int var_11 = -453021089;
long long int var_12 = -3344571106129252271LL;
void init() {
}

void checksum() {
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
