#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1430970799571374154ULL;
unsigned long long int var_3 = 6310326452515422716ULL;
long long int var_6 = 6156615593061631672LL;
unsigned char var_8 = (unsigned char)174;
short var_11 = (short)20594;
unsigned short var_12 = (unsigned short)38655;
signed char var_14 = (signed char)-16;
unsigned short var_15 = (unsigned short)3374;
unsigned char var_16 = (unsigned char)137;
int zero = 0;
long long int var_17 = -5213636767305203453LL;
unsigned long long int var_18 = 10939668017328786766ULL;
unsigned short var_19 = (unsigned short)56386;
void init() {
}

void checksum() {
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
