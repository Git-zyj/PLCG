#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-69;
long long int var_2 = 3097718109511284296LL;
unsigned short var_3 = (unsigned short)31643;
_Bool var_6 = (_Bool)0;
long long int var_8 = 6650589157291439495LL;
signed char var_10 = (signed char)-127;
unsigned long long int var_11 = 4991960146007741819ULL;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
long long int var_15 = -2138345589886030713LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)0;
signed char var_19 = (signed char)-29;
void init() {
}

void checksum() {
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
