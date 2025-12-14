#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1082016429U;
long long int var_1 = 5599103818079946164LL;
unsigned long long int var_5 = 16325299780169532753ULL;
long long int var_8 = 2645437496118378326LL;
unsigned short var_11 = (unsigned short)45094;
int var_12 = 715524886;
unsigned long long int var_13 = 16591558788401187679ULL;
unsigned short var_15 = (unsigned short)11916;
int zero = 0;
long long int var_17 = 418282606529610104LL;
long long int var_18 = 8262935471670009503LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
