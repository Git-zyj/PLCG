#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8967559886352651365LL;
unsigned long long int var_3 = 11123742335963114842ULL;
unsigned short var_6 = (unsigned short)25157;
unsigned char var_11 = (unsigned char)136;
signed char var_14 = (signed char)-22;
int var_18 = -2030391509;
int zero = 0;
unsigned long long int var_19 = 14462899191817164248ULL;
unsigned short var_20 = (unsigned short)50050;
int var_21 = -1378726680;
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
