#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17424718917256287931ULL;
signed char var_3 = (signed char)-91;
short var_4 = (short)26969;
unsigned char var_7 = (unsigned char)121;
signed char var_8 = (signed char)-29;
signed char var_9 = (signed char)-93;
unsigned char var_10 = (unsigned char)80;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -1223429909;
int var_14 = 1398230505;
signed char var_15 = (signed char)-36;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
