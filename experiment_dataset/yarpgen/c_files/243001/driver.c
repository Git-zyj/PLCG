#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 3987797034094383916ULL;
int var_12 = 679135542;
unsigned char var_17 = (unsigned char)3;
int zero = 0;
unsigned long long int var_18 = 18120588256352778762ULL;
unsigned long long int var_19 = 9649852440124718472ULL;
int var_20 = 1166638146;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
