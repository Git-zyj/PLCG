#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-109;
unsigned char var_2 = (unsigned char)88;
long long int var_4 = 706554505684776982LL;
unsigned char var_5 = (unsigned char)233;
int var_9 = -967022406;
signed char var_11 = (signed char)-65;
unsigned long long int var_16 = 14601643000965855206ULL;
signed char var_18 = (signed char)-54;
int zero = 0;
long long int var_19 = -2096682250610338149LL;
signed char var_20 = (signed char)3;
short var_21 = (short)-14877;
unsigned long long int var_22 = 9283582424262299215ULL;
int var_23 = -128522657;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
