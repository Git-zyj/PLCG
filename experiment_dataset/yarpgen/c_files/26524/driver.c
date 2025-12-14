#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1305296280U;
unsigned char var_2 = (unsigned char)185;
long long int var_4 = -9106794031349197076LL;
short var_5 = (short)16746;
signed char var_6 = (signed char)61;
long long int var_10 = 7111565611382940848LL;
unsigned int var_11 = 2736115411U;
unsigned long long int var_17 = 9466251895423734459ULL;
int zero = 0;
int var_19 = 1766418730;
long long int var_20 = -4812399902904790288LL;
unsigned int var_21 = 658672645U;
unsigned long long int var_22 = 4719352899825408982ULL;
long long int var_23 = -371145715747373192LL;
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
