#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1447653760062757256ULL;
unsigned long long int var_1 = 16965393000222867595ULL;
int var_8 = -1369429819;
unsigned long long int var_9 = 4600757293339070916ULL;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int var_12 = -377106933;
unsigned char var_13 = (unsigned char)169;
unsigned long long int var_14 = 5486301525248026777ULL;
unsigned short var_15 = (unsigned short)31480;
int zero = 0;
long long int var_17 = 618657758023451115LL;
signed char var_18 = (signed char)-4;
void init() {
}

void checksum() {
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
