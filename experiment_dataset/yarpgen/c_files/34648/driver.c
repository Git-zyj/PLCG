#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 8711511806235014925LL;
long long int var_2 = 2463466179988687832LL;
_Bool var_3 = (_Bool)0;
long long int var_4 = 3087890008492227956LL;
long long int var_5 = 4946023792727249367LL;
unsigned long long int var_6 = 8809960579783686184ULL;
unsigned long long int var_10 = 16603027311107736908ULL;
long long int var_12 = 4920049483995413516LL;
long long int var_13 = -9010742515572760481LL;
unsigned long long int var_14 = 10626293288042507468ULL;
unsigned long long int var_17 = 1671408498121551965ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 5592774467659758943ULL;
unsigned long long int var_21 = 10108695303694357508ULL;
unsigned long long int var_22 = 16403888946838382500ULL;
long long int var_23 = -8312058231332861760LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
