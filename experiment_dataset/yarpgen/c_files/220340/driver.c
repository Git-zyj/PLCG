#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13060240251207294342ULL;
signed char var_2 = (signed char)-11;
unsigned long long int var_3 = 3658308248363815485ULL;
unsigned int var_6 = 1632899800U;
unsigned char var_8 = (unsigned char)93;
long long int var_9 = -6103035516071125569LL;
unsigned int var_10 = 3060902589U;
signed char var_11 = (signed char)33;
unsigned short var_12 = (unsigned short)49434;
unsigned long long int var_15 = 11087578315981483836ULL;
unsigned short var_16 = (unsigned short)35518;
int zero = 0;
unsigned short var_18 = (unsigned short)50371;
unsigned char var_19 = (unsigned char)105;
signed char var_20 = (signed char)-4;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
