#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2488299480940392060LL;
unsigned long long int var_2 = 11770200695047748251ULL;
unsigned long long int var_3 = 18141153824710185093ULL;
_Bool var_5 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_11 = 7456851445015235475LL;
unsigned short var_12 = (unsigned short)37435;
unsigned long long int var_13 = 15764235363496839539ULL;
int var_14 = -2020928995;
long long int var_15 = 9075216825681999285LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
