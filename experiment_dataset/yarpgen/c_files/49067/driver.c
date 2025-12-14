#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1495157463238005399ULL;
unsigned short var_1 = (unsigned short)44754;
unsigned int var_2 = 1952549003U;
long long int var_5 = -6274902074047922541LL;
int var_8 = -566034844;
short var_9 = (short)-25488;
int zero = 0;
unsigned short var_10 = (unsigned short)9330;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)119;
signed char var_13 = (signed char)-103;
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
