#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -8580611861121163927LL;
long long int var_9 = -2360448769650791339LL;
long long int var_11 = -8029139332645060038LL;
long long int var_14 = 7307901357029539551LL;
int zero = 0;
long long int var_15 = 5196868930386080573LL;
long long int var_16 = -2768510050032171147LL;
unsigned long long int var_17 = 5566210362630223307ULL;
long long int var_18 = -4550801329302217171LL;
long long int var_19 = 4994128757605575821LL;
long long int var_20 = -5962019802994697882LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
