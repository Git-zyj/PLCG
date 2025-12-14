#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-54;
signed char var_4 = (signed char)-47;
unsigned long long int var_8 = 7578545257884747075ULL;
long long int var_9 = 8962939842299311422LL;
unsigned long long int var_14 = 13896427895488810384ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)52694;
long long int var_21 = -7438151783193447081LL;
void init() {
}

void checksum() {
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
