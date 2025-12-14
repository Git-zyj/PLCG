#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 138470230875763800LL;
short var_5 = (short)30550;
short var_6 = (short)28273;
unsigned short var_8 = (unsigned short)34339;
short var_9 = (short)-14398;
long long int var_10 = 4071649712561247992LL;
int var_14 = -111682238;
long long int var_15 = 7328671676457689613LL;
int zero = 0;
unsigned long long int var_18 = 9660349417115163541ULL;
short var_19 = (short)6038;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
