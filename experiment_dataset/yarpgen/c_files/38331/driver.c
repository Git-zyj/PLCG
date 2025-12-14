#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5459879857394486385LL;
long long int var_2 = -4111359380902923693LL;
long long int var_3 = -3102249092387008813LL;
long long int var_5 = 1635767785414798372LL;
long long int var_7 = -3758323954009335696LL;
long long int var_8 = 2976953696633822191LL;
long long int var_9 = 5930286509457785506LL;
int zero = 0;
long long int var_10 = -1002436316707541504LL;
long long int var_11 = -4223419550657520367LL;
long long int var_12 = -8126626824728880311LL;
long long int var_13 = 4155900342701310798LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
