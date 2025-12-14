#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-26;
unsigned long long int var_7 = 1995371761873289526ULL;
short var_9 = (short)7444;
signed char var_13 = (signed char)76;
short var_18 = (short)-24834;
int zero = 0;
unsigned long long int var_20 = 1363123089984500473ULL;
short var_21 = (short)-2221;
unsigned int var_22 = 3392048890U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
