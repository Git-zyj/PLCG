#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44715;
long long int var_8 = -3039291531806992882LL;
unsigned short var_9 = (unsigned short)21832;
int zero = 0;
unsigned char var_17 = (unsigned char)183;
unsigned short var_18 = (unsigned short)29723;
unsigned long long int var_19 = 1398673582791821357ULL;
unsigned char var_20 = (unsigned char)156;
unsigned long long int var_21 = 5101526920233400761ULL;
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
