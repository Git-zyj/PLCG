#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -472384004;
unsigned long long int var_3 = 416527985631365409ULL;
unsigned long long int var_5 = 17574928631621016489ULL;
unsigned long long int var_7 = 15992257090507306190ULL;
long long int var_8 = 581207844947284203LL;
unsigned char var_13 = (unsigned char)95;
unsigned long long int var_14 = 13337710115097780827ULL;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)150;
int zero = 0;
unsigned char var_20 = (unsigned char)120;
unsigned long long int var_21 = 1436473955458097238ULL;
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
