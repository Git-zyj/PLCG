#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4629056925061776458LL;
short var_1 = (short)16160;
unsigned long long int var_2 = 14553070050194092983ULL;
unsigned char var_3 = (unsigned char)89;
int var_4 = -849496026;
unsigned char var_5 = (unsigned char)109;
unsigned long long int var_6 = 16120791836021389267ULL;
unsigned char var_8 = (unsigned char)56;
short var_10 = (short)30406;
long long int var_12 = 667160085148337640LL;
unsigned int var_14 = 2131190514U;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 2604190569435585290ULL;
long long int var_19 = 4090103676907720307LL;
int var_20 = 1286771659;
unsigned short var_21 = (unsigned short)25544;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
