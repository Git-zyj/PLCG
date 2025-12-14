#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 876687323U;
int var_2 = 1936713152;
short var_3 = (short)-27411;
long long int var_4 = -8685941797315278858LL;
unsigned long long int var_5 = 2087063985382304836ULL;
unsigned long long int var_6 = 9559013775869883843ULL;
unsigned char var_7 = (unsigned char)83;
unsigned char var_10 = (unsigned char)226;
int zero = 0;
unsigned char var_11 = (unsigned char)109;
unsigned long long int var_12 = 10360477015374240778ULL;
unsigned int var_13 = 1663221980U;
unsigned int var_14 = 3320975548U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
