#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 666585544U;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-10255;
unsigned char var_9 = (unsigned char)164;
_Bool var_11 = (_Bool)1;
unsigned long long int var_14 = 11608129752920803179ULL;
short var_15 = (short)-25623;
int zero = 0;
unsigned short var_19 = (unsigned short)1624;
signed char var_20 = (signed char)20;
long long int var_21 = -630093988869830143LL;
long long int var_22 = 3944746816888712370LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
