#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4822439116851588434LL;
int var_6 = -1056211065;
unsigned long long int var_9 = 13650115679871510036ULL;
long long int var_10 = 6544006451127569509LL;
signed char var_12 = (signed char)29;
unsigned long long int var_13 = 17432992833056894574ULL;
int zero = 0;
unsigned long long int var_16 = 8641027854448168835ULL;
int var_17 = -1758389875;
long long int var_18 = -8335650472650921344LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
