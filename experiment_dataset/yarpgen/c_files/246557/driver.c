#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)31351;
unsigned short var_6 = (unsigned short)24580;
long long int var_8 = 1502183186287278207LL;
short var_10 = (short)9183;
signed char var_13 = (signed char)-57;
long long int var_14 = 16559164175811022LL;
unsigned char var_15 = (unsigned char)63;
int zero = 0;
unsigned long long int var_18 = 7065108742612012404ULL;
unsigned short var_19 = (unsigned short)2324;
short var_20 = (short)4986;
unsigned short var_21 = (unsigned short)13905;
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
