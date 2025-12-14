#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 155073586909523287ULL;
unsigned char var_2 = (unsigned char)174;
unsigned long long int var_3 = 1897985797558505050ULL;
unsigned char var_5 = (unsigned char)236;
signed char var_7 = (signed char)-74;
int var_9 = -793066913;
int zero = 0;
unsigned long long int var_11 = 5208490389976904611ULL;
unsigned long long int var_12 = 7402933327800002679ULL;
long long int var_13 = -4149713940877473192LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
