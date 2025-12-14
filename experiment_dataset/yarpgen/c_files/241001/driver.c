#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)149;
long long int var_11 = -4235770097814108524LL;
long long int var_13 = 8875167984348880762LL;
unsigned long long int var_14 = 16698188736788534620ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = 2105237905;
int var_18 = 2049209813;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
