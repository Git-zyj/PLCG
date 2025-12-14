#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24647;
unsigned short var_1 = (unsigned short)10256;
signed char var_2 = (signed char)-15;
long long int var_3 = 6643483643788073573LL;
signed char var_4 = (signed char)27;
long long int var_5 = 3152659695107414331LL;
unsigned long long int var_7 = 9803388343910431587ULL;
long long int var_9 = 1183166503832391098LL;
unsigned char var_10 = (unsigned char)144;
signed char var_11 = (signed char)-72;
long long int var_13 = -4059218505669004123LL;
int zero = 0;
unsigned char var_17 = (unsigned char)121;
unsigned char var_18 = (unsigned char)161;
long long int var_19 = 6765172409030303836LL;
long long int var_20 = 1581500400365332117LL;
unsigned long long int var_21 = 13432312916179250600ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
