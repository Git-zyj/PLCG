#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-86;
long long int var_2 = 3516961201255997704LL;
unsigned long long int var_4 = 12233944660577954417ULL;
unsigned long long int var_6 = 8885278848706546471ULL;
short var_7 = (short)-7752;
long long int var_9 = -1483975786181664956LL;
unsigned short var_11 = (unsigned short)30903;
int zero = 0;
short var_12 = (short)21565;
unsigned int var_13 = 2234723014U;
unsigned int var_14 = 427378660U;
unsigned long long int var_15 = 5120216739906139852ULL;
long long int var_16 = -4162130069839624865LL;
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
