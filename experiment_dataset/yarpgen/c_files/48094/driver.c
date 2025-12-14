#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4838685350634734073LL;
signed char var_3 = (signed char)-79;
unsigned long long int var_4 = 5692505074007447101ULL;
unsigned short var_6 = (unsigned short)43392;
int var_8 = -111819856;
unsigned long long int var_9 = 16350355100441152049ULL;
unsigned short var_10 = (unsigned short)21031;
unsigned short var_11 = (unsigned short)49438;
long long int var_13 = -8501509517773196850LL;
long long int var_15 = -688258209524525066LL;
int zero = 0;
unsigned long long int var_17 = 14957226101166565114ULL;
unsigned long long int var_18 = 5227092572443126426ULL;
long long int var_19 = -4826775337768931479LL;
signed char var_20 = (signed char)-32;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
