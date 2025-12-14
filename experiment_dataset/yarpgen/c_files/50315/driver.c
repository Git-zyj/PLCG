#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1629405897;
long long int var_1 = -4002818600849665246LL;
unsigned long long int var_3 = 11382924197353048791ULL;
unsigned long long int var_5 = 10296615398997315375ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 249094976672816954ULL;
int zero = 0;
unsigned int var_12 = 1365010196U;
short var_13 = (short)-11505;
void init() {
}

void checksum() {
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
