#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)199;
signed char var_8 = (signed char)20;
unsigned long long int var_10 = 16184199460191978037ULL;
unsigned long long int var_13 = 16306773525543681764ULL;
unsigned long long int var_15 = 3897885375393606610ULL;
unsigned char var_19 = (unsigned char)202;
int zero = 0;
unsigned long long int var_20 = 9543247156926147124ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
