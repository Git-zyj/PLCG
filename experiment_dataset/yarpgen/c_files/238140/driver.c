#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11851;
int var_2 = 605829083;
unsigned short var_4 = (unsigned short)41101;
signed char var_6 = (signed char)-127;
unsigned char var_7 = (unsigned char)247;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_15 = 732114791;
int var_16 = -1223320001;
int var_17 = 554442327;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
