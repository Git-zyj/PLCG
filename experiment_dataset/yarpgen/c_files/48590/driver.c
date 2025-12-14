#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9124259384113846713LL;
signed char var_1 = (signed char)107;
int var_2 = 307914640;
unsigned char var_3 = (unsigned char)50;
unsigned int var_5 = 3387957577U;
int var_6 = -1044568630;
unsigned int var_13 = 351397259U;
long long int var_14 = -373344429358573708LL;
long long int var_15 = -3894984820542608030LL;
long long int var_17 = 7395797282077419567LL;
int zero = 0;
signed char var_20 = (signed char)81;
long long int var_21 = -3779951196509414121LL;
unsigned char var_22 = (unsigned char)61;
unsigned char var_23 = (unsigned char)152;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
