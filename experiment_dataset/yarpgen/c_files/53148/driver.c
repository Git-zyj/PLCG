#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2974416800341934777LL;
unsigned char var_4 = (unsigned char)250;
unsigned char var_6 = (unsigned char)70;
unsigned long long int var_9 = 12108456740060123953ULL;
int var_14 = 388423854;
long long int var_17 = 7464142267313733939LL;
unsigned long long int var_18 = 2807371685184858733ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)38884;
int var_20 = -332490942;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
