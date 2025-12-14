#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3181715568U;
unsigned char var_6 = (unsigned char)208;
unsigned short var_7 = (unsigned short)18851;
long long int var_10 = -3124467018654109120LL;
int zero = 0;
long long int var_13 = 7098865892085049317LL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
