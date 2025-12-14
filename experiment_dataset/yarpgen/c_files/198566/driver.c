#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1460954922U;
unsigned int var_1 = 526413034U;
unsigned short var_2 = (unsigned short)21984;
short var_3 = (short)28679;
unsigned int var_4 = 3993876383U;
unsigned int var_7 = 22622965U;
unsigned int var_8 = 2527804200U;
unsigned short var_9 = (unsigned short)31440;
int zero = 0;
unsigned int var_10 = 1960377949U;
unsigned int var_11 = 1847580020U;
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
