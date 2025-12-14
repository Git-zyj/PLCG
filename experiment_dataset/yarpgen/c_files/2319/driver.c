#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9028443764176670564ULL;
signed char var_5 = (signed char)78;
unsigned char var_6 = (unsigned char)160;
unsigned long long int var_7 = 3205380413225262207ULL;
long long int var_8 = 8251837141694476742LL;
unsigned short var_9 = (unsigned short)22603;
unsigned long long int var_15 = 13792581976166840237ULL;
int zero = 0;
unsigned long long int var_18 = 13718955852609076244ULL;
unsigned char var_19 = (unsigned char)239;
void init() {
}

void checksum() {
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
