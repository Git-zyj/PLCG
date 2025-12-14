#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17001138552468066152ULL;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-61;
signed char var_4 = (signed char)15;
unsigned long long int var_5 = 6112380197044176301ULL;
signed char var_6 = (signed char)6;
signed char var_7 = (signed char)81;
unsigned int var_8 = 1734228459U;
unsigned int var_9 = 501413220U;
int var_10 = -1314691606;
int zero = 0;
unsigned long long int var_11 = 17748583792558309263ULL;
long long int var_12 = 7667854985336135329LL;
unsigned short var_13 = (unsigned short)39160;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
