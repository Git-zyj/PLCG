#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9127374030080480332LL;
short var_2 = (short)-10864;
int var_4 = 441419452;
unsigned char var_5 = (unsigned char)59;
signed char var_6 = (signed char)23;
unsigned char var_7 = (unsigned char)153;
signed char var_8 = (signed char)-55;
int zero = 0;
unsigned short var_10 = (unsigned short)13138;
unsigned short var_11 = (unsigned short)55481;
long long int var_12 = 5744366283315072964LL;
unsigned int var_13 = 2439715434U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
