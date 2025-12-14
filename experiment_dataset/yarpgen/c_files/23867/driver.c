#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5571191691223361890LL;
short var_3 = (short)-11895;
unsigned long long int var_5 = 1323565562810440989ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 16616399702224909995ULL;
short var_12 = (short)-29457;
_Bool var_13 = (_Bool)0;
unsigned short var_17 = (unsigned short)22589;
signed char var_18 = (signed char)104;
int zero = 0;
unsigned long long int var_19 = 7461548868710194850ULL;
long long int var_20 = -270894537860098317LL;
unsigned short var_21 = (unsigned short)57157;
short var_22 = (short)32070;
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
