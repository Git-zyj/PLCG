#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1044485310;
unsigned short var_3 = (unsigned short)5175;
unsigned long long int var_4 = 3870224042186944412ULL;
unsigned long long int var_6 = 6932006566170159684ULL;
int zero = 0;
unsigned long long int var_10 = 17746592522641359662ULL;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-23;
unsigned short var_13 = (unsigned short)21361;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
