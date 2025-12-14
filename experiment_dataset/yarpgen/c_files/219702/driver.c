#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61320;
unsigned int var_2 = 580364564U;
int var_3 = -432967461;
long long int var_4 = 4343496307501149767LL;
int var_5 = 1937267963;
int var_6 = -535805476;
unsigned char var_10 = (unsigned char)103;
unsigned int var_11 = 1689018351U;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-45;
unsigned int var_14 = 1393195436U;
int zero = 0;
int var_16 = 1755317410;
int var_17 = 233830255;
unsigned long long int var_18 = 6379857126664113701ULL;
int var_19 = -850472368;
unsigned char var_20 = (unsigned char)222;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
