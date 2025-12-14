#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3005571173284056998LL;
unsigned short var_4 = (unsigned short)41516;
unsigned int var_5 = 1276151584U;
unsigned int var_8 = 4159680665U;
unsigned long long int var_9 = 1111536928675145831ULL;
int var_11 = 1461948785;
unsigned long long int var_14 = 11375004315979656447ULL;
signed char var_18 = (signed char)121;
int zero = 0;
unsigned short var_19 = (unsigned short)18771;
unsigned char var_20 = (unsigned char)52;
unsigned short var_21 = (unsigned short)34236;
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
