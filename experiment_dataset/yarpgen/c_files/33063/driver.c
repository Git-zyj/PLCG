#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5537965589805865638LL;
long long int var_10 = 4102069146223256853LL;
long long int var_11 = 724112968159595398LL;
signed char var_13 = (signed char)74;
int zero = 0;
unsigned long long int var_19 = 14409759766218118441ULL;
unsigned char var_20 = (unsigned char)48;
long long int var_21 = -356795424971941555LL;
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
