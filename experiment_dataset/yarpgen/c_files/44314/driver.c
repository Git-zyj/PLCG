#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31756;
long long int var_4 = -1908369264003428453LL;
signed char var_5 = (signed char)-1;
unsigned short var_6 = (unsigned short)60796;
unsigned int var_7 = 630335059U;
unsigned long long int var_8 = 17620159164691739479ULL;
long long int var_12 = -1309705372188874301LL;
long long int var_15 = -1579628881211487394LL;
short var_17 = (short)-11643;
int zero = 0;
short var_19 = (short)15257;
unsigned long long int var_20 = 17221639338339419611ULL;
signed char var_21 = (signed char)-51;
long long int var_22 = 779445176942044676LL;
short var_23 = (short)6130;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
