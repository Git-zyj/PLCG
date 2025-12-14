#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 12373721790333006262ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)26;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 10554524443720950871ULL;
unsigned long long int var_17 = 11445541593919345510ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
