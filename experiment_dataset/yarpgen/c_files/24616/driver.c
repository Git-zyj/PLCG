#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2468871261844641852LL;
signed char var_2 = (signed char)-121;
signed char var_6 = (signed char)124;
unsigned short var_16 = (unsigned short)54167;
int zero = 0;
long long int var_17 = -277728031804381054LL;
unsigned long long int var_18 = 17924691102024424096ULL;
long long int var_19 = 995096093382124807LL;
short var_20 = (short)-10592;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
