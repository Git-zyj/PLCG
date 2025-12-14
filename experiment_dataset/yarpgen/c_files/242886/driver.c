#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)107;
long long int var_5 = -8220558048985244426LL;
long long int var_6 = 1607672694623033483LL;
long long int var_10 = -2979374784020425242LL;
signed char var_11 = (signed char)-5;
long long int var_15 = 1552765814982003935LL;
unsigned short var_16 = (unsigned short)22181;
int zero = 0;
int var_17 = 1803392597;
unsigned short var_18 = (unsigned short)62179;
unsigned long long int var_19 = 10649999528937124857ULL;
unsigned int var_20 = 1923101402U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
