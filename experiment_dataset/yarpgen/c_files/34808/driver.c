#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6812146811575453624LL;
long long int var_3 = 846318790261389350LL;
long long int var_5 = 1884314839122775910LL;
unsigned short var_7 = (unsigned short)31397;
long long int var_8 = -2254713092192166930LL;
unsigned char var_10 = (unsigned char)79;
unsigned char var_12 = (unsigned char)185;
signed char var_13 = (signed char)-81;
unsigned long long int var_16 = 2140035105729249547ULL;
int zero = 0;
long long int var_18 = 4793328957108344458LL;
unsigned long long int var_19 = 8171015425224569199ULL;
unsigned short var_20 = (unsigned short)55835;
unsigned long long int var_21 = 8968979034062992652ULL;
unsigned long long int var_22 = 6130404942791150804ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
