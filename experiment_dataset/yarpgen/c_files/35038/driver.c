#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-21;
signed char var_2 = (signed char)-7;
long long int var_5 = -4148834054130162426LL;
long long int var_7 = 2416042484274522328LL;
_Bool var_9 = (_Bool)0;
long long int var_10 = -5379648181654053539LL;
signed char var_11 = (signed char)-86;
signed char var_12 = (signed char)43;
unsigned short var_14 = (unsigned short)30854;
unsigned long long int var_18 = 9013283009482313364ULL;
int zero = 0;
int var_20 = 544828870;
unsigned char var_21 = (unsigned char)193;
signed char var_22 = (signed char)-111;
unsigned short var_23 = (unsigned short)47584;
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
