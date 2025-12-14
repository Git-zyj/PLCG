#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23795;
signed char var_1 = (signed char)-97;
unsigned int var_2 = 2625202891U;
long long int var_3 = -6092706563387291315LL;
unsigned long long int var_5 = 14168769170511588538ULL;
unsigned short var_6 = (unsigned short)50521;
int var_7 = -1296775958;
unsigned char var_8 = (unsigned char)20;
int var_9 = 1324654834;
unsigned long long int var_10 = 13622554710279474921ULL;
int var_12 = -397032726;
int zero = 0;
unsigned int var_13 = 3928316542U;
signed char var_14 = (signed char)40;
unsigned long long int var_15 = 11831630153788376138ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
