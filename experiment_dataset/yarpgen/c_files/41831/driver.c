#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53209;
unsigned short var_3 = (unsigned short)27150;
long long int var_5 = -6248001811679416396LL;
unsigned char var_6 = (unsigned char)78;
int var_9 = -233808317;
int var_10 = 781079095;
int var_15 = 1962256325;
int var_16 = -1445537938;
int var_18 = -182873966;
int zero = 0;
unsigned char var_20 = (unsigned char)31;
unsigned char var_21 = (unsigned char)136;
unsigned char var_22 = (unsigned char)144;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
