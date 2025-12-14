#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61085;
unsigned long long int var_5 = 5980132393500079862ULL;
signed char var_6 = (signed char)23;
long long int var_8 = 8562116491242478251LL;
signed char var_11 = (signed char)26;
int zero = 0;
signed char var_19 = (signed char)-108;
unsigned long long int var_20 = 11705785659155623970ULL;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)11376;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
