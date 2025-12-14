#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)59114;
signed char var_5 = (signed char)-40;
unsigned short var_8 = (unsigned short)57168;
unsigned short var_10 = (unsigned short)16815;
unsigned long long int var_13 = 3237523016215947263ULL;
int zero = 0;
unsigned long long int var_17 = 1199468669144564004ULL;
unsigned long long int var_18 = 12370038096766706220ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
