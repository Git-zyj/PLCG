#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22890;
_Bool var_2 = (_Bool)1;
int var_3 = 804238600;
long long int var_5 = 4479511698061038094LL;
int var_9 = 801756031;
int zero = 0;
signed char var_15 = (signed char)-48;
unsigned char var_16 = (unsigned char)81;
unsigned char var_17 = (unsigned char)252;
int var_18 = -737685326;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
