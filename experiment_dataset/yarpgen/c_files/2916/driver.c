#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 475855506U;
unsigned short var_3 = (unsigned short)24044;
unsigned short var_6 = (unsigned short)7052;
unsigned short var_8 = (unsigned short)3489;
unsigned short var_9 = (unsigned short)37265;
unsigned short var_11 = (unsigned short)14864;
signed char var_13 = (signed char)-14;
unsigned long long int var_15 = 11836935265041733437ULL;
unsigned long long int var_17 = 16241106991558301069ULL;
int zero = 0;
unsigned long long int var_18 = 3631185535007434660ULL;
signed char var_19 = (signed char)-14;
unsigned char var_20 = (unsigned char)108;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
