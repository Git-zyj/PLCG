#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-37;
long long int var_5 = -4534420318827681990LL;
unsigned char var_8 = (unsigned char)255;
unsigned int var_10 = 161098135U;
unsigned char var_11 = (unsigned char)209;
unsigned long long int var_17 = 8112730852072007055ULL;
int zero = 0;
unsigned int var_20 = 3730315912U;
long long int var_21 = 2414692243925279915LL;
unsigned int var_22 = 1844105628U;
signed char var_23 = (signed char)-103;
signed char var_24 = (signed char)-68;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
