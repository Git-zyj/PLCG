#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)241;
unsigned int var_9 = 599628967U;
unsigned long long int var_11 = 3602366424429415519ULL;
signed char var_14 = (signed char)-51;
int zero = 0;
int var_19 = -1259363345;
unsigned int var_20 = 3269664909U;
void init() {
}

void checksum() {
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
