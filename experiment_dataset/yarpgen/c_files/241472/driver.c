#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5932009420533712763LL;
unsigned char var_1 = (unsigned char)17;
unsigned char var_2 = (unsigned char)196;
int var_3 = 965048590;
unsigned short var_4 = (unsigned short)9991;
_Bool var_5 = (_Bool)0;
long long int var_6 = 7521386704408305324LL;
unsigned short var_7 = (unsigned short)42880;
unsigned long long int var_8 = 3119337790835920986ULL;
short var_9 = (short)10854;
short var_10 = (short)30081;
long long int var_11 = 9140299550496521127LL;
int var_12 = 1290440612;
long long int var_14 = 7781450343935617973LL;
int zero = 0;
int var_16 = 1292387292;
unsigned char var_17 = (unsigned char)120;
short var_18 = (short)5739;
short var_19 = (short)20181;
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
