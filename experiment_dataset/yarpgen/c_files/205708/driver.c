#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)32390;
unsigned long long int var_3 = 14358115269734461235ULL;
unsigned long long int var_10 = 10268165396226855652ULL;
int zero = 0;
int var_11 = -1057741026;
long long int var_12 = 7667174142642498349LL;
long long int var_13 = 4709573957524860424LL;
void init() {
}

void checksum() {
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
