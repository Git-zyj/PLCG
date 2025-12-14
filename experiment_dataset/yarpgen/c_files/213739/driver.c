#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32050;
unsigned short var_5 = (unsigned short)15783;
int var_6 = -806469429;
signed char var_7 = (signed char)13;
unsigned char var_9 = (unsigned char)47;
signed char var_10 = (signed char)-49;
int zero = 0;
short var_16 = (short)5436;
int var_17 = 535956777;
unsigned long long int var_18 = 4988095783139167571ULL;
long long int var_19 = 4558298371976264677LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
