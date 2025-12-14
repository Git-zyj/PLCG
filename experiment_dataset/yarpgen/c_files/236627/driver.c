#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7648020418711153011LL;
long long int var_3 = -1036410648476464840LL;
unsigned char var_4 = (unsigned char)145;
short var_5 = (short)-11420;
int var_6 = 961735889;
unsigned long long int var_7 = 1598599430078363787ULL;
int var_9 = -1705372128;
int zero = 0;
unsigned char var_12 = (unsigned char)181;
long long int var_13 = 8302710220903687939LL;
void init() {
}

void checksum() {
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
