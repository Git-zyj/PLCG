#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6730876348653074989LL;
long long int var_9 = -8566263864290106117LL;
unsigned short var_16 = (unsigned short)21578;
int zero = 0;
int var_18 = 91485908;
signed char var_19 = (signed char)-94;
long long int var_20 = -2813585820487000430LL;
unsigned int var_21 = 1084253551U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
