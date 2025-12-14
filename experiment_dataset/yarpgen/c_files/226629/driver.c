#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10480956692216295089ULL;
unsigned long long int var_7 = 7186477861423004062ULL;
long long int var_11 = -1392039569211818334LL;
int var_14 = -2003171871;
int zero = 0;
int var_15 = 870380734;
unsigned long long int var_16 = 17049288123539801410ULL;
unsigned long long int var_17 = 5556746359460305621ULL;
unsigned long long int var_18 = 11829012770101664258ULL;
short var_19 = (short)-3757;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
