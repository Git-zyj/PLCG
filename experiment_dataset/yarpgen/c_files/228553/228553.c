/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = (min(var_18, (arr_1 [i_0] [i_0])));
        arr_2 [i_0] [1] = (arr_1 [i_0] [i_0]);
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            {
                arr_9 [i_1] = var_8;
                arr_10 [i_1] [i_1] [i_1] &= ((((((var_6 ? 44199 : 6808289006066661475)))) ? ((((-964958812 ^ 74) < (max(251658240, (-2147483647 - 1)))))) : (((arr_0 [i_1]) ? 99 : (min((arr_8 [i_1] [4] [i_1]), var_16))))));
            }
        }
    }
    var_19 = var_17;
    var_20 = var_16;
    #pragma endscop
}
