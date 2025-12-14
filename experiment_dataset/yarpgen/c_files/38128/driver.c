#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)217;
unsigned char var_2 = (unsigned char)94;
long long int var_7 = -5516163750264107315LL;
long long int var_10 = 7580198993773219282LL;
short var_12 = (short)786;
long long int var_13 = -2957097827478769239LL;
int zero = 0;
long long int var_19 = 8318718442510961957LL;
unsigned char var_20 = (unsigned char)89;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
