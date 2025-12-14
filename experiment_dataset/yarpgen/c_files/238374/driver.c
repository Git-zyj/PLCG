#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-60;
signed char var_1 = (signed char)94;
long long int var_3 = -6654624523878866317LL;
unsigned long long int var_4 = 6530398836894641835ULL;
int var_5 = 1077370398;
unsigned long long int var_6 = 2327388416161299431ULL;
_Bool var_7 = (_Bool)1;
long long int var_8 = 865142429120068232LL;
unsigned short var_11 = (unsigned short)53043;
signed char var_12 = (signed char)80;
int zero = 0;
unsigned long long int var_15 = 9918350156418570431ULL;
int var_16 = -804132351;
unsigned char var_17 = (unsigned char)101;
unsigned short var_18 = (unsigned short)52128;
unsigned short var_19 = (unsigned short)32199;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
