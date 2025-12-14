#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13427269138274015108ULL;
unsigned int var_5 = 51933969U;
unsigned char var_6 = (unsigned char)242;
unsigned char var_14 = (unsigned char)206;
int zero = 0;
signed char var_15 = (signed char)74;
unsigned int var_16 = 4010608245U;
signed char var_17 = (signed char)-53;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
