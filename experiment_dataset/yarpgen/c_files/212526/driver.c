#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-16;
unsigned long long int var_4 = 12487643286666269235ULL;
int var_7 = -1315715350;
unsigned long long int var_9 = 17538337835342867728ULL;
unsigned int var_11 = 3958126297U;
int zero = 0;
signed char var_13 = (signed char)-97;
unsigned char var_14 = (unsigned char)188;
unsigned long long int var_15 = 12789531185802239182ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
