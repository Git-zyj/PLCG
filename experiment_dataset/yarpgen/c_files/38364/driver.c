#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3337451206U;
long long int var_1 = -5723845567535336251LL;
unsigned short var_2 = (unsigned short)18846;
unsigned char var_3 = (unsigned char)181;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-9870;
long long int var_9 = 1647832098406682740LL;
int zero = 0;
unsigned short var_10 = (unsigned short)9820;
unsigned int var_11 = 2132818409U;
unsigned char var_12 = (unsigned char)108;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
