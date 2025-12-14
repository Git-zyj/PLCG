#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -1186021511;
unsigned char var_3 = (unsigned char)251;
unsigned short var_4 = (unsigned short)23585;
signed char var_5 = (signed char)-76;
unsigned char var_6 = (unsigned char)122;
int var_8 = 2060745138;
int zero = 0;
int var_10 = -2126033845;
long long int var_11 = -6523908936700757165LL;
long long int var_12 = 8199838877473245173LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
