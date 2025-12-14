#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5298197318217395646LL;
int var_3 = -1466373542;
int var_6 = 2131299552;
long long int var_11 = 3858082132761782300LL;
unsigned long long int var_12 = 8259598852287999442ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)42549;
unsigned long long int var_14 = 949925827353645816ULL;
unsigned char var_15 = (unsigned char)16;
long long int var_16 = 295662787802444488LL;
long long int var_17 = -6612697288396610802LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
