#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)114;
signed char var_5 = (signed char)-108;
unsigned short var_8 = (unsigned short)7017;
signed char var_11 = (signed char)14;
long long int var_14 = 5756644497606444020LL;
unsigned short var_16 = (unsigned short)45411;
int zero = 0;
signed char var_17 = (signed char)53;
signed char var_18 = (signed char)-53;
long long int var_19 = 718792042762126329LL;
long long int var_20 = 722281078688055607LL;
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
