#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1390827254381009522LL;
signed char var_3 = (signed char)104;
signed char var_4 = (signed char)11;
signed char var_7 = (signed char)-115;
unsigned long long int var_9 = 9271505178535631855ULL;
signed char var_12 = (signed char)101;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)107;
unsigned long long int var_21 = 2619869928008888913ULL;
unsigned short var_22 = (unsigned short)51880;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
