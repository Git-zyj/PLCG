#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)92;
unsigned char var_3 = (unsigned char)168;
_Bool var_6 = (_Bool)1;
unsigned int var_10 = 913208082U;
short var_11 = (short)19843;
signed char var_12 = (signed char)57;
int zero = 0;
unsigned char var_15 = (unsigned char)207;
long long int var_16 = -7574833807847233527LL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 16332525046898747792ULL;
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
