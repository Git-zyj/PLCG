#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)33530;
long long int var_11 = -9107072792092991391LL;
long long int var_12 = -2659175380520657838LL;
int var_18 = 1410143059;
int zero = 0;
signed char var_19 = (signed char)-39;
unsigned short var_20 = (unsigned short)10028;
signed char var_21 = (signed char)84;
int var_22 = -861327732;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
