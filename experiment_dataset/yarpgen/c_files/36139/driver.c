#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7381650361123047260ULL;
unsigned long long int var_1 = 15252033483803176757ULL;
unsigned char var_2 = (unsigned char)195;
unsigned short var_8 = (unsigned short)654;
int var_9 = 1667077977;
int zero = 0;
int var_11 = -1379105509;
unsigned int var_12 = 3999021107U;
int var_13 = 1254405043;
unsigned char var_14 = (unsigned char)43;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
