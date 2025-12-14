#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)176;
unsigned long long int var_2 = 6680503147229295655ULL;
unsigned short var_4 = (unsigned short)50697;
unsigned short var_7 = (unsigned short)26197;
unsigned long long int var_9 = 11166130780781291511ULL;
unsigned char var_10 = (unsigned char)8;
unsigned long long int var_11 = 459100151467787280ULL;
signed char var_12 = (signed char)-121;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-126;
unsigned short var_15 = (unsigned short)61361;
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
