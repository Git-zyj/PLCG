#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)5153;
_Bool var_4 = (_Bool)1;
long long int var_5 = 8348376185282768502LL;
unsigned short var_8 = (unsigned short)7719;
int var_9 = -1083264491;
int zero = 0;
int var_10 = -2121715087;
unsigned int var_11 = 1295666702U;
int var_12 = -458177934;
unsigned short var_13 = (unsigned short)45466;
unsigned char var_14 = (unsigned char)147;
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
