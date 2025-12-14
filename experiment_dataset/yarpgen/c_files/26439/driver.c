#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1042755995;
int var_12 = -1801385087;
short var_16 = (short)-1079;
long long int var_17 = -5982910086193852134LL;
unsigned char var_18 = (unsigned char)140;
unsigned long long int var_19 = 6727840544683633680ULL;
int zero = 0;
short var_20 = (short)-18653;
unsigned long long int var_21 = 4668255424034991188ULL;
unsigned long long int var_22 = 2142715495216408105ULL;
void init() {
}

void checksum() {
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
