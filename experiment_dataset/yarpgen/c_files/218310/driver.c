#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)35851;
long long int var_6 = 8735908849539718629LL;
unsigned long long int var_8 = 4980834581245767023ULL;
unsigned char var_11 = (unsigned char)238;
int zero = 0;
int var_12 = 515715466;
unsigned long long int var_13 = 1336368719046564096ULL;
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
