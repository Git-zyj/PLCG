#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-25790;
signed char var_5 = (signed char)-75;
unsigned short var_7 = (unsigned short)16112;
int var_8 = -1055775249;
unsigned char var_9 = (unsigned char)104;
signed char var_10 = (signed char)81;
int zero = 0;
int var_15 = -1790552353;
_Bool var_16 = (_Bool)1;
int var_17 = -230111217;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
