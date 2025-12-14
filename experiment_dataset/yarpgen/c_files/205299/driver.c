#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6585621364302444222LL;
long long int var_5 = 4284622194085363065LL;
long long int var_8 = 8951807213462171548LL;
long long int var_9 = 7441551193543103402LL;
long long int var_13 = -6827283071289614491LL;
long long int var_15 = 5906115990270727833LL;
int zero = 0;
long long int var_17 = 6290859565906732561LL;
long long int var_18 = -1346828066994756083LL;
long long int var_19 = 2447184170166352327LL;
long long int var_20 = 3260546605029953992LL;
long long int var_21 = -8930500297032514654LL;
long long int arr_0 [16] [16] ;
long long int arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 106665828297788873LL : -9096278869735503735LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 106451568065684056LL : 6154903845500882682LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
