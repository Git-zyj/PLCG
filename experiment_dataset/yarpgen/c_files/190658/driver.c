#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)92;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)189;
long long int var_4 = 1872502382591189359LL;
unsigned long long int var_5 = 7164995728230366042ULL;
short var_7 = (short)16473;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 4867975685980151905ULL;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
short var_15 = (short)31601;
unsigned char var_16 = (unsigned char)22;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
