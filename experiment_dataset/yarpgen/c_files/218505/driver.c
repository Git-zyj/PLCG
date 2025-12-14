#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -868134397;
int var_3 = 13620279;
int var_4 = -1666968676;
unsigned char var_5 = (unsigned char)15;
int var_7 = -1395554191;
unsigned int var_10 = 2137132910U;
long long int var_11 = 5667585459534686430LL;
long long int var_12 = -5633943589838207330LL;
int zero = 0;
unsigned char var_13 = (unsigned char)145;
signed char var_14 = (signed char)-74;
unsigned long long int var_15 = 1690795390899922027ULL;
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
