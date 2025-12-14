#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10181531587159021808ULL;
unsigned short var_8 = (unsigned short)14531;
int var_9 = -1944984963;
unsigned long long int var_14 = 10268387299929671182ULL;
signed char var_15 = (signed char)-58;
long long int var_17 = 1076976603676282953LL;
int zero = 0;
unsigned long long int var_20 = 8347789938078894490ULL;
unsigned int var_21 = 2931907351U;
long long int var_22 = -3894550100306061280LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
