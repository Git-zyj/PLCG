#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 777634965052853295ULL;
long long int var_1 = -4770217247598834426LL;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)70;
unsigned long long int var_7 = 11373042494111274920ULL;
unsigned int var_8 = 242957241U;
unsigned char var_9 = (unsigned char)160;
unsigned char var_10 = (unsigned char)31;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 183414610U;
int zero = 0;
int var_19 = -863279637;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
