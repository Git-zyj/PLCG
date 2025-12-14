#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)10;
long long int var_3 = -8054612707450485024LL;
int var_5 = 445030154;
int var_7 = -1342968922;
short var_9 = (short)-8761;
int var_14 = -1388680385;
unsigned char var_16 = (unsigned char)74;
unsigned int var_17 = 2382327880U;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 1582243567;
int var_20 = 1160046260;
long long int var_21 = 2431103494238728265LL;
unsigned int var_22 = 1482955481U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
