#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17347453948513023926ULL;
signed char var_2 = (signed char)122;
signed char var_3 = (signed char)-54;
unsigned long long int var_4 = 18335219657502682113ULL;
signed char var_6 = (signed char)-44;
int zero = 0;
signed char var_11 = (signed char)117;
unsigned char var_12 = (unsigned char)222;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
