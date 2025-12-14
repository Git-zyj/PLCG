#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -70905831643066828LL;
signed char var_3 = (signed char)96;
long long int var_4 = 5864880824655232228LL;
unsigned short var_8 = (unsigned short)51704;
int var_9 = 704512680;
int zero = 0;
short var_10 = (short)-2879;
unsigned int var_11 = 1372825527U;
unsigned short var_12 = (unsigned short)34930;
unsigned short var_13 = (unsigned short)45258;
int var_14 = 1586200185;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
