#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)94;
long long int var_4 = 8748868189459893285LL;
long long int var_5 = 5601020463945584473LL;
unsigned long long int var_6 = 14074661048409430843ULL;
signed char var_7 = (signed char)-36;
unsigned short var_9 = (unsigned short)34460;
int zero = 0;
signed char var_10 = (signed char)2;
int var_11 = -2041853696;
int var_12 = -363780935;
int var_13 = 1178136473;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
