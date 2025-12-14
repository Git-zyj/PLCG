#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4190136958565849864LL;
long long int var_9 = 4724175961420328080LL;
signed char var_11 = (signed char)77;
signed char var_12 = (signed char)37;
int zero = 0;
unsigned char var_13 = (unsigned char)117;
signed char var_14 = (signed char)-38;
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
