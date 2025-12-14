#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-51;
unsigned long long int var_2 = 17568826832054357796ULL;
int var_6 = 1869251196;
unsigned short var_14 = (unsigned short)29203;
short var_16 = (short)12595;
int zero = 0;
unsigned int var_19 = 3853466273U;
unsigned long long int var_20 = 13317526083263822565ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
