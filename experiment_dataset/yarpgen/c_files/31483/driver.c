#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)10;
unsigned short var_6 = (unsigned short)34296;
unsigned short var_9 = (unsigned short)7593;
unsigned long long int var_13 = 9246363812965463011ULL;
int zero = 0;
short var_17 = (short)-591;
short var_18 = (short)5056;
signed char var_19 = (signed char)16;
long long int var_20 = -5989514504894824283LL;
unsigned long long int var_21 = 4127847651855110334ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
