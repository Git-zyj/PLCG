#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 2336727366584297392LL;
short var_3 = (short)29926;
signed char var_4 = (signed char)112;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)26904;
long long int var_7 = -6362930323105582521LL;
unsigned long long int var_8 = 4207881269168773643ULL;
int var_9 = 471893645;
long long int var_10 = -8781916550335506342LL;
long long int var_11 = 5559592391076242598LL;
signed char var_13 = (signed char)-66;
int zero = 0;
unsigned char var_17 = (unsigned char)181;
unsigned short var_18 = (unsigned short)19929;
unsigned short var_19 = (unsigned short)52636;
unsigned char var_20 = (unsigned char)238;
short var_21 = (short)-21709;
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
