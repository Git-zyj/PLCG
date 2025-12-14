#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4737840717100574208LL;
unsigned short var_1 = (unsigned short)23580;
unsigned long long int var_4 = 10230723146394258781ULL;
short var_6 = (short)21388;
unsigned short var_7 = (unsigned short)23443;
signed char var_10 = (signed char)-42;
int zero = 0;
long long int var_16 = -6692786549291855486LL;
unsigned short var_17 = (unsigned short)41118;
short var_18 = (short)-5113;
unsigned int var_19 = 3342448669U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
