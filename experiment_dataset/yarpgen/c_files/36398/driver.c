#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17822236895243055391ULL;
unsigned long long int var_2 = 1199548109453858004ULL;
unsigned long long int var_3 = 1920830992391396786ULL;
unsigned long long int var_4 = 6915671002602062690ULL;
short var_5 = (short)-4;
int var_8 = -1169281044;
unsigned long long int var_9 = 3451903060993752798ULL;
unsigned long long int var_10 = 6217674539836512883ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)37;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
