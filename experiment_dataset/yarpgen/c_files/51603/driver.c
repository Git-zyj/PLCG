#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)51;
long long int var_6 = -8166881426892716610LL;
unsigned char var_8 = (unsigned char)176;
long long int var_9 = 3648970012805286861LL;
unsigned char var_15 = (unsigned char)0;
int zero = 0;
unsigned int var_19 = 4266221450U;
int var_20 = -997663726;
int var_21 = -552766907;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
