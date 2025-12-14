#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-73;
unsigned int var_1 = 1924310972U;
int var_2 = -2106443601;
unsigned int var_3 = 4045062001U;
_Bool var_4 = (_Bool)1;
short var_6 = (short)26896;
short var_7 = (short)-9727;
unsigned int var_9 = 1586688889U;
signed char var_10 = (signed char)65;
unsigned long long int var_11 = 14937047229250636340ULL;
signed char var_13 = (signed char)-92;
unsigned int var_15 = 788024363U;
int zero = 0;
signed char var_16 = (signed char)-108;
long long int var_17 = 2698757286947242776LL;
long long int var_18 = 9163468086692179048LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
