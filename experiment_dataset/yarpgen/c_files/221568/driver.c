#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11457987482596234309ULL;
int var_6 = 574607388;
unsigned int var_9 = 2211415678U;
long long int var_10 = 8378776372585900732LL;
int zero = 0;
long long int var_11 = -1638605507352647326LL;
unsigned long long int var_12 = 18009173845579591961ULL;
signed char var_13 = (signed char)-100;
unsigned long long int var_14 = 12357069430563918235ULL;
unsigned long long int var_15 = 10561933237727486332ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
