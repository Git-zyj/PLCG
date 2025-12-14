#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13574700300804969762ULL;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)96;
unsigned char var_6 = (unsigned char)170;
unsigned long long int var_9 = 9233548498302061867ULL;
signed char var_10 = (signed char)117;
int zero = 0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 537038491575431784ULL;
void init() {
}

void checksum() {
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
