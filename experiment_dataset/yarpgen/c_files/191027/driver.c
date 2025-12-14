#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 300881557815561259LL;
short var_1 = (short)17083;
long long int var_2 = 3031497047315036979LL;
unsigned long long int var_7 = 15773245723262285639ULL;
unsigned long long int var_8 = 7217841619090088715ULL;
short var_9 = (short)-7842;
int zero = 0;
signed char var_12 = (signed char)101;
unsigned long long int var_13 = 6744782719052116707ULL;
signed char var_14 = (signed char)104;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
