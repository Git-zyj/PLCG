#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6336304001557865159LL;
long long int var_1 = -6774750958328718887LL;
long long int var_2 = 1938521442787143570LL;
unsigned int var_5 = 3005517847U;
long long int var_9 = -5396585350017949389LL;
short var_10 = (short)18528;
int zero = 0;
long long int var_11 = -6493055134501513775LL;
long long int var_12 = -919362571284565953LL;
long long int var_13 = 6588405419065546540LL;
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
