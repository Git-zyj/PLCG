#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6993390828765326832LL;
short var_5 = (short)-1058;
unsigned long long int var_9 = 17310611181185334316ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)24454;
signed char var_11 = (signed char)-10;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 16334149599781357223ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
