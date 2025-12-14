#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -14537105269721047LL;
signed char var_8 = (signed char)-67;
long long int var_12 = -5294256212082281014LL;
int zero = 0;
signed char var_14 = (signed char)127;
unsigned long long int var_15 = 6107449652868425284ULL;
signed char var_16 = (signed char)-26;
short var_17 = (short)17985;
unsigned short var_18 = (unsigned short)18922;
signed char arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)-3;
}

void checksum() {
    hash(&seed, var_14);
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
