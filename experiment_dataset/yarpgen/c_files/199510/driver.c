#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 667056360;
unsigned long long int var_5 = 13348286776546739609ULL;
unsigned int var_9 = 3943655231U;
unsigned short var_14 = (unsigned short)39432;
int zero = 0;
long long int var_16 = -4064423683632399517LL;
unsigned int var_17 = 531910615U;
signed char var_18 = (signed char)12;
long long int var_19 = 4062271054076588326LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
