#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3672046376017033228LL;
signed char var_2 = (signed char)26;
short var_3 = (short)22819;
unsigned long long int var_4 = 12080797122374104853ULL;
signed char var_5 = (signed char)-6;
unsigned long long int var_8 = 18431283084799443663ULL;
unsigned int var_10 = 3863411999U;
unsigned long long int var_12 = 8009233046201574617ULL;
unsigned int var_14 = 1357193548U;
unsigned char var_17 = (unsigned char)75;
long long int var_19 = -3653260683269180754LL;
int zero = 0;
unsigned short var_20 = (unsigned short)11632;
unsigned long long int var_21 = 1299483383684147699ULL;
int var_22 = -1274093229;
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
