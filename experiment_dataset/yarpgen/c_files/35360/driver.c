#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8188141822444234874LL;
unsigned long long int var_4 = 16876538498953799020ULL;
signed char var_5 = (signed char)35;
unsigned char var_6 = (unsigned char)149;
unsigned char var_9 = (unsigned char)112;
long long int var_15 = -5593703111446598399LL;
int zero = 0;
signed char var_16 = (signed char)-12;
unsigned long long int var_17 = 12214708524182062533ULL;
unsigned long long int var_18 = 13682108404806322256ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
