#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)47;
short var_1 = (short)25018;
unsigned int var_2 = 540608522U;
unsigned char var_3 = (unsigned char)246;
int var_4 = -1056711862;
unsigned int var_6 = 1775489170U;
signed char var_7 = (signed char)-41;
_Bool var_8 = (_Bool)1;
long long int var_9 = -1845885798233512024LL;
short var_10 = (short)22006;
long long int var_11 = -3502660161170641252LL;
int zero = 0;
unsigned short var_12 = (unsigned short)30103;
short var_13 = (short)779;
unsigned char var_14 = (unsigned char)221;
unsigned char var_15 = (unsigned char)5;
unsigned long long int var_16 = 13508862432771692013ULL;
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
