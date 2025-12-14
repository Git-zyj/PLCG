#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5167838706619535555LL;
unsigned int var_1 = 65311277U;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)43183;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)108;
unsigned char var_7 = (unsigned char)34;
unsigned char var_8 = (unsigned char)215;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 3789599092U;
unsigned long long int var_11 = 7164881333651146997ULL;
unsigned long long int var_12 = 8496850221714958532ULL;
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
