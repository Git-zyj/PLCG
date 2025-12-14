#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)87;
short var_1 = (short)-1206;
unsigned int var_3 = 3671054704U;
signed char var_6 = (signed char)-120;
unsigned long long int var_7 = 17289950620023266448ULL;
unsigned long long int var_8 = 16886753463207010222ULL;
unsigned long long int var_9 = 10558082830870577933ULL;
unsigned long long int var_10 = 13179013739841911270ULL;
int zero = 0;
signed char var_13 = (signed char)-93;
unsigned long long int var_14 = 8700742926717263672ULL;
unsigned long long int var_15 = 7150132713798177575ULL;
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
