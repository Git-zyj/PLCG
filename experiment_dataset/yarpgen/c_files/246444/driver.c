#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)13;
short var_3 = (short)109;
unsigned short var_7 = (unsigned short)8375;
unsigned long long int var_8 = 16981726042396005016ULL;
signed char var_11 = (signed char)64;
unsigned char var_15 = (unsigned char)30;
int zero = 0;
unsigned long long int var_18 = 8626981147813709318ULL;
unsigned long long int var_19 = 1441829354424884103ULL;
long long int var_20 = -513448523135100387LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
