#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8933831208467759281LL;
unsigned long long int var_3 = 12184621842881258589ULL;
unsigned int var_4 = 2307884060U;
signed char var_5 = (signed char)16;
signed char var_11 = (signed char)-58;
int var_12 = -343451088;
long long int var_14 = -1237705105796812778LL;
long long int var_15 = -2921337104792715094LL;
int zero = 0;
unsigned char var_16 = (unsigned char)68;
unsigned int var_17 = 3691551231U;
void init() {
}

void checksum() {
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
