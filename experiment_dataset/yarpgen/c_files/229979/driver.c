#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2179368607978850946LL;
unsigned long long int var_7 = 15719502476970675381ULL;
unsigned long long int var_8 = 4998320535698975922ULL;
unsigned long long int var_9 = 11233158746798987223ULL;
signed char var_10 = (signed char)125;
int zero = 0;
unsigned int var_11 = 176898469U;
signed char var_12 = (signed char)-25;
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
