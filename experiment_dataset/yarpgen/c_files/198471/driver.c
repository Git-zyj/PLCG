#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 346841785903607666ULL;
signed char var_1 = (signed char)-81;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 11722574722295818509ULL;
signed char var_4 = (signed char)64;
signed char var_5 = (signed char)-109;
long long int var_6 = 8298707027501959801LL;
int var_7 = -1696467285;
unsigned char var_8 = (unsigned char)214;
long long int var_9 = -262755633969615490LL;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-51;
int var_12 = -1530298581;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-79;
int zero = 0;
unsigned long long int var_15 = 12565542476000514613ULL;
signed char var_16 = (signed char)19;
unsigned char var_17 = (unsigned char)94;
unsigned long long int var_18 = 4976819015114683100ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
