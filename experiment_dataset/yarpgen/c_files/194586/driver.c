#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)245;
unsigned short var_3 = (unsigned short)56988;
unsigned long long int var_4 = 2431001675662484397ULL;
long long int var_5 = -5774667624898831245LL;
signed char var_10 = (signed char)15;
int var_13 = -919998559;
long long int var_15 = -2862735069765253973LL;
int zero = 0;
signed char var_17 = (signed char)61;
long long int var_18 = 647776983759286391LL;
long long int var_19 = 2399468014207199610LL;
signed char var_20 = (signed char)-79;
void init() {
}

void checksum() {
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
