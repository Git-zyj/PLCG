#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-21;
long long int var_18 = 9166042994067364383LL;
long long int var_19 = -7123188520160134789LL;
int zero = 0;
long long int var_20 = -8350259833920306642LL;
unsigned char var_21 = (unsigned char)6;
unsigned long long int var_22 = 13838748479182413014ULL;
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
