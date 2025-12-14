#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)238;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)50;
unsigned short var_7 = (unsigned short)26937;
unsigned long long int var_8 = 14200708204068975278ULL;
unsigned long long int var_9 = 15505157444854546937ULL;
unsigned int var_10 = 3977733352U;
signed char var_11 = (signed char)36;
unsigned char var_18 = (unsigned char)143;
int zero = 0;
unsigned int var_19 = 1044479778U;
int var_20 = -638791148;
unsigned char var_21 = (unsigned char)101;
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
