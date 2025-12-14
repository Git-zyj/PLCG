#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2367756348947461966LL;
long long int var_2 = 3936444791289214056LL;
long long int var_3 = -4840160117399874054LL;
long long int var_5 = -391234470361992611LL;
long long int var_8 = -5499743423530399342LL;
long long int var_9 = 6075229956800078299LL;
int zero = 0;
long long int var_10 = -1528281431335577745LL;
long long int var_11 = 3104046063951137895LL;
long long int var_12 = 4282699692753127228LL;
long long int var_13 = 7445088113446453168LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
