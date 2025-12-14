#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1271591101;
unsigned short var_4 = (unsigned short)63077;
signed char var_5 = (signed char)83;
unsigned long long int var_11 = 15605710622370837219ULL;
signed char var_17 = (signed char)-44;
int zero = 0;
signed char var_18 = (signed char)-51;
unsigned long long int var_19 = 15488789476511698590ULL;
unsigned long long int var_20 = 15103588935972884850ULL;
long long int var_21 = 5588504935633485947LL;
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
