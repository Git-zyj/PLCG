/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (~27228)));
    var_20 = var_2;
    var_21 = (var_7 / -var_12);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_1] [i_2] [i_3 - 3] = (((max(((max(var_2, (arr_4 [i_0] [i_3] [i_2])))), (max(var_7, var_16)))) <= (~var_3)));
                        var_22 = (min(254, (arr_0 [i_0])));
                        var_23 = (min(var_23, (((32767 & (arr_8 [i_0] [i_0] [i_0]))))));
                        var_24 = ((((min((((arr_8 [i_0] [i_0] [i_0]) % (arr_6 [i_0] [i_1] [i_2] [i_3]))), (((-2649848224635837686 ? 47902 : var_10)))))) ? (((((~(arr_0 [i_3])))) ? (arr_9 [i_2] [i_3 - 3] [i_3 - 3] [i_3 - 1]) : ((~(arr_3 [i_3] [i_1] [i_0]))))) : (((~(arr_10 [i_0] [i_0] [i_0]))))));
                    }
                }
            }
        }
        var_25 = (max(var_7, (((var_3 ? var_2 : (min(var_1, var_1)))))));
        var_26 = var_7;
        var_27 = ((((max(var_9, (max((arr_1 [i_0]), var_17))))) ? -936008796 : (arr_10 [i_0] [i_0] [i_0])));
        arr_12 [i_0] = (arr_2 [i_0] [i_0]);
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_28 -= ((-(max((((arr_6 [i_4] [i_4] [i_4] [i_4]) ? (arr_4 [i_4] [i_4] [i_4]) : var_1)), (((~(arr_15 [i_4] [i_4]))))))));
        arr_16 [i_4] = (((arr_6 [i_4] [i_4] [i_4] [i_4]) <= -var_12));
    }
    #pragma endscop
}
