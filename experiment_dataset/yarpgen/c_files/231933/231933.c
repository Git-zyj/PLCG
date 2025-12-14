/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_19 = ((var_3 ? ((((arr_0 [i_0 + 2] [i_0 - 1]) > (((var_17 ? (arr_2 [i_0]) : 0)))))) : -88));
        arr_3 [i_0] [i_0] = ((((((0 ? 33790 : var_9))) ? var_4 : ((0 ? (arr_1 [i_0]) : 10695763761330914080)))));
        var_20 = var_5;
        var_21 = var_8;
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_22 = max((arr_5 [i_1]), (max((((1 ? 203 : 1))), ((-13 ? 3235979046640950677 : 1)))));
        var_23 = 17575006175232;
        arr_6 [i_1 - 1] = ((((min((arr_5 [i_1 + 2]), (var_14 / var_9)))) / var_11));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 20;i_2 += 1)
    {
        arr_10 [i_2] = ((3227623141 ? var_4 : 254));
        arr_11 [i_2] = (-((18468 ? var_4 : var_17)));
        arr_12 [i_2] = -221;
    }
    var_24 = var_0;
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            {
                var_25 = (0 <= 233);
                var_26 = 274877906688;
                var_27 = (min(var_27, (arr_13 [i_3])));
            }
        }
    }
    #pragma endscop
}
