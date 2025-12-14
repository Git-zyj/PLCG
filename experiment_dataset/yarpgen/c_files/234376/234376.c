/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_11 ? -var_6 : -575504135));
    var_13 &= var_8;
    var_14 = (((var_10 ^ -var_9) ? ((-718937399 ^ (min(2482606165, var_0)))) : ((((!(~var_7)))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = 11699623662872739965;
        var_15 = (((arr_3 [i_0 - 1]) ^ (arr_3 [i_0 + 1])));
        var_16 = ((var_0 || (arr_2 [i_0 - 2] [i_0 + 2])));
    }
    #pragma endscop
}
