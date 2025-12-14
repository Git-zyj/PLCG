/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (!var_10);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 - 1] [i_0 + 3] = (!0);
        var_17 = (((arr_1 [i_0 + 1]) / -6546435800556586033));
        var_18 = (((~1936598112352782239) * 0));
        var_19 = -1;
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = 18446744073709551597;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_11 [i_2] = (min(var_6, (!104)));
                    var_20 -= ((~((~(max((arr_9 [1] [i_2] [i_1]), 9223372036854775807))))));
                    var_21 = 1;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
    {
        var_22 = (min(var_22, ((((arr_7 [i_4 + 2]) - (arr_7 [i_4]))))));
        var_23 += var_7;
    }
    var_24 = (min(((((1139849788 != var_8) == (min(-32, 0))))), (min(1, 29))));
    var_25 = (min(var_25, (0 / 11)));
    #pragma endscop
}
