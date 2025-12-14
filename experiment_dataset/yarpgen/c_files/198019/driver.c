#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1218098260905520689LL;
short var_1 = (short)23594;
long long int var_3 = 9095265464063237154LL;
short var_4 = (short)-6161;
unsigned long long int var_6 = 8200472202695854097ULL;
long long int var_14 = 6743145856972027671LL;
unsigned long long int var_16 = 7342855733834682103ULL;
int zero = 0;
long long int var_19 = 5457058629715478429LL;
unsigned long long int var_20 = 3494502370758447524ULL;
short var_21 = (short)29085;
unsigned long long int var_22 = 6745716901059900517ULL;
long long int var_23 = 2816574672674023698LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
