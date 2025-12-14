#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 5467045048301908149LL;
signed char var_8 = (signed char)40;
signed char var_10 = (signed char)26;
long long int var_12 = 6516429617918879569LL;
long long int var_14 = 9013808894204121912LL;
unsigned long long int var_15 = 2235063044263125315ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = -5397093516083597240LL;
void init() {
}

void checksum() {
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
