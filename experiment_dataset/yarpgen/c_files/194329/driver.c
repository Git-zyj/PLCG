#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-71;
signed char var_1 = (signed char)68;
int var_4 = 1141296905;
unsigned char var_5 = (unsigned char)149;
int var_7 = -1281288691;
unsigned long long int var_8 = 6843665359876841187ULL;
long long int var_9 = 1496650525113197256LL;
int zero = 0;
unsigned int var_10 = 2311393595U;
unsigned long long int var_11 = 4017534418969524293ULL;
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
