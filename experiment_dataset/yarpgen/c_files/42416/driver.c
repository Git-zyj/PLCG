#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7627970786683694307LL;
long long int var_2 = 8567484999623199562LL;
long long int var_4 = -6241726258442241464LL;
long long int var_6 = 1841906953889770092LL;
long long int var_7 = 6341265657735044839LL;
long long int var_11 = -3246629838199295341LL;
int zero = 0;
long long int var_12 = -8080943112952300449LL;
long long int var_13 = -3176504416099168418LL;
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
