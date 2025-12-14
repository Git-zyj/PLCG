#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1271320789;
unsigned long long int var_5 = 7068760790589350434ULL;
unsigned long long int var_7 = 12081133628009687968ULL;
int var_9 = 1406474909;
int zero = 0;
unsigned char var_10 = (unsigned char)228;
long long int var_11 = -204785022455427019LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
