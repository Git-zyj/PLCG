#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9330948409605624027ULL;
unsigned int var_3 = 565354720U;
int zero = 0;
unsigned long long int var_13 = 4328291600922847445ULL;
unsigned long long int var_14 = 2974224356860622542ULL;
int var_15 = -789378513;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
