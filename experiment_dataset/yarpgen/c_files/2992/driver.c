#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 654659760U;
int var_6 = -819875236;
long long int var_7 = 3081259583716704259LL;
unsigned int var_9 = 3281570532U;
int var_10 = -275517034;
unsigned int var_11 = 498440020U;
unsigned int var_12 = 3036300448U;
int var_16 = -419915091;
int zero = 0;
int var_17 = -2041487101;
unsigned int var_18 = 1193025793U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
