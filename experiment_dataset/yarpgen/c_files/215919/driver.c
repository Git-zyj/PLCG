#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)168;
signed char var_2 = (signed char)-76;
signed char var_3 = (signed char)52;
unsigned short var_4 = (unsigned short)5237;
unsigned long long int var_6 = 6967410444588530952ULL;
unsigned char var_10 = (unsigned char)184;
unsigned long long int var_11 = 10945607480495934123ULL;
int zero = 0;
unsigned long long int var_17 = 14578558552579484486ULL;
unsigned long long int var_18 = 15360135528492515884ULL;
unsigned long long int var_19 = 2988861050935355854ULL;
void init() {
}

void checksum() {
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
