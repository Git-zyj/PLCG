#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-114;
unsigned long long int var_3 = 339192930170247482ULL;
unsigned short var_5 = (unsigned short)24482;
unsigned int var_8 = 2371285336U;
signed char var_15 = (signed char)50;
int var_18 = -1189254409;
int zero = 0;
unsigned long long int var_19 = 15036631108503200201ULL;
unsigned int var_20 = 1926948666U;
void init() {
}

void checksum() {
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
