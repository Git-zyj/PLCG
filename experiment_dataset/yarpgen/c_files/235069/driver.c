#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -211926327;
short var_2 = (short)25266;
unsigned int var_3 = 284494930U;
unsigned int var_9 = 4117697189U;
unsigned int var_17 = 211438314U;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 682727709;
short var_22 = (short)23280;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
