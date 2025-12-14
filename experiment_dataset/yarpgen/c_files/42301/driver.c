#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1417;
unsigned short var_2 = (unsigned short)1540;
unsigned short var_3 = (unsigned short)62394;
unsigned long long int var_4 = 15339138864538784371ULL;
unsigned int var_5 = 4251547305U;
unsigned long long int var_7 = 7099184306660590885ULL;
unsigned long long int var_8 = 11849266025548326546ULL;
int var_9 = -1412634130;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 2146248833711552345ULL;
unsigned short var_12 = (unsigned short)40269;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
