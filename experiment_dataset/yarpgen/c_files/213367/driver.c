#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)40681;
unsigned int var_3 = 2184354824U;
int var_7 = 133571503;
long long int var_8 = 5576910905941601612LL;
int var_9 = -1579942435;
int var_12 = -737544320;
long long int var_13 = 1335641519542608707LL;
unsigned short var_18 = (unsigned short)12884;
int zero = 0;
unsigned long long int var_19 = 15909885371627882390ULL;
int var_20 = -866913965;
unsigned long long int var_21 = 8622016654869859429ULL;
unsigned long long int var_22 = 14685893270910478293ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
