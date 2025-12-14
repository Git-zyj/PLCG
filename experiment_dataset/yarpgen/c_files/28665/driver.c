#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2717640971469706476LL;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
short var_5 = (short)25064;
unsigned short var_6 = (unsigned short)60422;
long long int var_7 = 3988794622326834833LL;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-47;
unsigned long long int var_11 = 15987082476250331190ULL;
int zero = 0;
int var_13 = -1214972352;
short var_14 = (short)10050;
long long int var_15 = -2792516170082397799LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
