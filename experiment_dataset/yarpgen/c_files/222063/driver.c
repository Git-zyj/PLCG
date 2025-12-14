#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31672;
int var_3 = 323132483;
int var_5 = 460862814;
unsigned long long int var_7 = 10337214188695350854ULL;
unsigned long long int var_9 = 10745157634311210021ULL;
int zero = 0;
long long int var_11 = 3544555908737744416LL;
short var_12 = (short)28040;
unsigned int var_13 = 3779074857U;
unsigned long long int var_14 = 14094470616970533924ULL;
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
