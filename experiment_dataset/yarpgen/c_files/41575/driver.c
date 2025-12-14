#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1644429177237578356LL;
long long int var_2 = -173377166408493215LL;
short var_3 = (short)15207;
unsigned char var_5 = (unsigned char)119;
unsigned short var_8 = (unsigned short)40995;
_Bool var_9 = (_Bool)1;
long long int var_13 = -1168942112620323868LL;
_Bool var_14 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_18 = (short)-3839;
unsigned short var_19 = (unsigned short)57988;
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
