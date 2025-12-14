#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-113;
short var_1 = (short)15411;
unsigned short var_4 = (unsigned short)60142;
int var_6 = -42445652;
unsigned short var_12 = (unsigned short)51893;
unsigned char var_13 = (unsigned char)71;
signed char var_14 = (signed char)-21;
int var_15 = -148892284;
int var_16 = 223070019;
signed char var_17 = (signed char)109;
int var_18 = 1780651372;
int zero = 0;
signed char var_20 = (signed char)63;
unsigned long long int var_21 = 9924478431190113914ULL;
signed char var_22 = (signed char)-21;
signed char var_23 = (signed char)-121;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
