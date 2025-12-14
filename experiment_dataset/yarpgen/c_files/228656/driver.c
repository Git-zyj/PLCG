#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -400596779;
unsigned long long int var_1 = 9564308583439634608ULL;
unsigned int var_3 = 187845755U;
unsigned long long int var_5 = 11078591824082611620ULL;
int var_7 = -1223813235;
int var_9 = -162502080;
int zero = 0;
long long int var_10 = 863265932025516946LL;
signed char var_11 = (signed char)73;
unsigned long long int var_12 = 2820999367224703685ULL;
short var_13 = (short)3115;
unsigned int var_14 = 783352792U;
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
