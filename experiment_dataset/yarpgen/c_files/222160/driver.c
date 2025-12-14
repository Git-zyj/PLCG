#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1193906672;
signed char var_2 = (signed char)-38;
unsigned short var_3 = (unsigned short)864;
unsigned int var_4 = 1264832428U;
unsigned int var_7 = 1915477372U;
unsigned int var_8 = 1992385106U;
long long int var_9 = -8639182875368846325LL;
unsigned char var_12 = (unsigned char)108;
unsigned char var_13 = (unsigned char)170;
unsigned long long int var_14 = 5255919400383917292ULL;
unsigned long long int var_15 = 9122178060187372401ULL;
unsigned char var_16 = (unsigned char)242;
int zero = 0;
unsigned short var_18 = (unsigned short)10818;
signed char var_19 = (signed char)19;
void init() {
}

void checksum() {
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
