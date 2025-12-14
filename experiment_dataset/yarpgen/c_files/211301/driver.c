#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 5106028153085503139LL;
unsigned short var_12 = (unsigned short)22038;
signed char var_13 = (signed char)-103;
unsigned long long int var_17 = 4077952172855480600ULL;
int zero = 0;
int var_19 = -753779605;
unsigned long long int var_20 = 7147912039154503409ULL;
int var_21 = -1329357545;
long long int var_22 = 2049802149996853399LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
