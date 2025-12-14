#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)121;
signed char var_2 = (signed char)93;
unsigned long long int var_5 = 8341695257804408547ULL;
unsigned char var_7 = (unsigned char)97;
int zero = 0;
unsigned long long int var_11 = 16445663428666531831ULL;
signed char var_12 = (signed char)-105;
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
