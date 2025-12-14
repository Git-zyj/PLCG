#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5942001627621020835LL;
unsigned int var_4 = 3264528346U;
long long int var_5 = -4049332448484606964LL;
int var_6 = 1967495713;
long long int var_7 = 3551697341058213196LL;
int var_8 = -696369057;
long long int var_9 = -4178881194486926389LL;
long long int var_11 = -2890588330159321511LL;
int var_14 = -1656131578;
unsigned short var_17 = (unsigned short)43408;
int zero = 0;
unsigned short var_19 = (unsigned short)8824;
int var_20 = -146082001;
long long int var_21 = 3803548288130077493LL;
int var_22 = -1443355293;
int var_23 = -1570175068;
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
