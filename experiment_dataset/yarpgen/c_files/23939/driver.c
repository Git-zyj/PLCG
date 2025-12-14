#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1553354109;
int var_5 = 141123733;
unsigned long long int var_6 = 6577609652630351596ULL;
short var_7 = (short)22965;
int zero = 0;
long long int var_13 = -403623255254912257LL;
long long int var_14 = 4155761350079166598LL;
unsigned short var_15 = (unsigned short)40732;
void init() {
}

void checksum() {
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
