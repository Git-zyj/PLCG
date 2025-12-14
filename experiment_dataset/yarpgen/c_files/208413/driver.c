#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-10;
_Bool var_4 = (_Bool)0;
unsigned short var_9 = (unsigned short)29934;
unsigned short var_13 = (unsigned short)16274;
unsigned int var_14 = 3475789747U;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = 5197470679339683768LL;
unsigned long long int var_17 = 17195384644221943894ULL;
unsigned char var_18 = (unsigned char)245;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
