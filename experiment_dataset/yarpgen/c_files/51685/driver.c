#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)152;
short var_8 = (short)-29831;
long long int var_14 = 3325009214333052917LL;
unsigned char var_18 = (unsigned char)153;
int zero = 0;
unsigned long long int var_19 = 10867574539474208013ULL;
unsigned long long int var_20 = 11360334966148999134ULL;
_Bool var_21 = (_Bool)0;
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
