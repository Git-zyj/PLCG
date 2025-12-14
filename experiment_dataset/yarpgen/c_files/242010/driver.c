#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15408907314972156783ULL;
int var_2 = -1972661932;
signed char var_4 = (signed char)-64;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)181;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 4381517484321045987ULL;
unsigned int var_14 = 418640562U;
int zero = 0;
unsigned char var_15 = (unsigned char)81;
int var_16 = 2055533546;
signed char var_17 = (signed char)-4;
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
