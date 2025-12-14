#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9788525142512118773ULL;
long long int var_3 = 7170408513797664467LL;
int var_4 = 956588659;
int var_6 = -2069850501;
unsigned short var_7 = (unsigned short)926;
unsigned long long int var_9 = 10236084223286380906ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)49664;
long long int var_13 = 7646261290823885648LL;
int var_14 = -1234288864;
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
