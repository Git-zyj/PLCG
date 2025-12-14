#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15391819707925822530ULL;
signed char var_3 = (signed char)115;
unsigned long long int var_4 = 17004889950381893815ULL;
unsigned short var_5 = (unsigned short)61236;
unsigned short var_6 = (unsigned short)61293;
unsigned int var_9 = 3425410983U;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 2721456793U;
_Bool var_13 = (_Bool)1;
int var_15 = -223507875;
signed char var_16 = (signed char)-88;
int zero = 0;
unsigned long long int var_17 = 4608175063491424860ULL;
int var_18 = -889244898;
unsigned long long int var_19 = 7323783081080609218ULL;
unsigned long long int var_20 = 13685491948745050366ULL;
signed char var_21 = (signed char)-22;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
