#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)32;
unsigned short var_7 = (unsigned short)46581;
int var_8 = 1917902237;
unsigned long long int var_15 = 6861787128427165802ULL;
unsigned short var_16 = (unsigned short)58874;
int zero = 0;
signed char var_19 = (signed char)-90;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 17713819056271763845ULL;
void init() {
}

void checksum() {
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
