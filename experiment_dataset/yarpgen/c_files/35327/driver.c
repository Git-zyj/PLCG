#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13271642408753160682ULL;
unsigned long long int var_1 = 5144072440430469950ULL;
unsigned long long int var_2 = 5463847104492951627ULL;
signed char var_3 = (signed char)37;
unsigned int var_4 = 176336935U;
unsigned int var_8 = 1405892825U;
int var_9 = 1462081406;
unsigned int var_12 = 3939686207U;
unsigned int var_13 = 313037873U;
int var_15 = -1783322803;
int var_16 = -165999877;
int zero = 0;
int var_17 = 757075319;
long long int var_18 = -7957638231043354410LL;
unsigned int var_19 = 1522530543U;
unsigned char var_20 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
