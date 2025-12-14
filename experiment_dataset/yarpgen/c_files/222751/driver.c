#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)44847;
long long int var_5 = -9068229589703844963LL;
unsigned char var_10 = (unsigned char)106;
long long int var_12 = -6272947984354543932LL;
unsigned int var_13 = 1609634769U;
unsigned char var_14 = (unsigned char)49;
int var_19 = -382869670;
int zero = 0;
long long int var_20 = -3472876314326827453LL;
unsigned short var_21 = (unsigned short)36012;
void init() {
}

void checksum() {
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
