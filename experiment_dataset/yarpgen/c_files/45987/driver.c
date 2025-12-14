#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7436983279852119955LL;
int var_4 = 213270278;
long long int var_7 = 1143952066510056069LL;
long long int var_11 = -754721243394379860LL;
long long int var_12 = 5708011207288073911LL;
unsigned int var_13 = 1114516784U;
int zero = 0;
unsigned short var_14 = (unsigned short)63121;
unsigned char var_15 = (unsigned char)103;
signed char var_16 = (signed char)-57;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
