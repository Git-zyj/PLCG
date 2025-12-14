/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_1] = var_0;
                arr_7 [i_1] = (((arr_0 [i_1]) ? (((min((arr_0 [i_0]), var_7)))) : (arr_2 [i_1] [i_1])));
                arr_8 [i_0] [i_1] [i_1] = (((((max(var_6, var_3))) ? (arr_5 [i_1 + 2] [i_1 + 3] [i_1 + 1]) : (arr_1 [13]))));
                var_12 = (arr_1 [i_0]);
            }
        }
    }
    var_13 = var_8;
    var_14 = (max(var_14, var_10));

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_15 = (arr_10 [i_2]);
        var_16 &= (arr_9 [12]);
        var_17 = (max(var_17, ((max(((~(arr_9 [8]))), (((!(arr_10 [i_2])))))))));
    }

    /* vectorizable */
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        var_18 = (max(var_18, var_8));
        arr_14 [i_3 + 1] &= (!(!var_11));
        arr_15 [i_3] = ((var_4 << (-46 + 56)));
        var_19 = (((~(arr_9 [24]))));
        arr_16 [i_3] [i_3] = ((3968 ? (arr_13 [i_3 - 1]) : 0));
    }
    #pragma endscop
}
