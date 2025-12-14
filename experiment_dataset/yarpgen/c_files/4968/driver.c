#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 866997207413685263ULL;
unsigned char var_2 = (unsigned char)1;
long long int var_4 = 5406664540351197025LL;
int var_7 = 924105955;
unsigned short var_8 = (unsigned short)26791;
unsigned long long int var_13 = 4835397778440976351ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)204;
long long int var_15 = 753433126179777370LL;
unsigned long long int var_16 = 10087892614258009999ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
