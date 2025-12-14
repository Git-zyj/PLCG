#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 12930608297579558571ULL;
unsigned long long int var_9 = 6913996036888894702ULL;
int var_10 = 262121772;
signed char var_11 = (signed char)66;
int var_14 = -1121545305;
_Bool var_15 = (_Bool)0;
long long int var_17 = 5130307401375283723LL;
int zero = 0;
long long int var_18 = 7799654925085498883LL;
int var_19 = -1547167856;
long long int var_20 = -6346952201906605093LL;
short var_21 = (short)-24745;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
