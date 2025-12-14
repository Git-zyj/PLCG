#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3407586197119849348LL;
long long int var_7 = -4533727126463107168LL;
long long int var_16 = -5964969455880988523LL;
long long int var_19 = 5936638825288618575LL;
int zero = 0;
long long int var_20 = 741585306721982514LL;
long long int var_21 = -2421278315785857409LL;
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
