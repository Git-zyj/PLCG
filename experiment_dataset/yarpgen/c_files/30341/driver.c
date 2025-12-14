#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4253632874U;
long long int var_2 = 4300249088344600742LL;
unsigned int var_3 = 1901874538U;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 14289887828618281424ULL;
_Bool var_8 = (_Bool)1;
long long int var_9 = -2841631448521128122LL;
unsigned int var_11 = 2006293604U;
unsigned long long int var_13 = 5678771632105231424ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)41215;
unsigned char var_15 = (unsigned char)51;
unsigned long long int var_16 = 9902195559233099351ULL;
void init() {
}

void checksum() {
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
