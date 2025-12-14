#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17252306241774773272ULL;
unsigned long long int var_1 = 3226638424994924601ULL;
unsigned long long int var_3 = 10083542554913359264ULL;
unsigned long long int var_4 = 14675899336984574817ULL;
unsigned long long int var_5 = 11976705077210477324ULL;
unsigned long long int var_6 = 17567540182931170391ULL;
unsigned long long int var_7 = 2417499969460239312ULL;
unsigned long long int var_8 = 11778954837133479269ULL;
int zero = 0;
unsigned long long int var_11 = 8907631206918285456ULL;
unsigned long long int var_12 = 17512901367254963240ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
