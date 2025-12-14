/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_9 [i_0] = ((((52377 * (((arr_5 [i_0] [i_1] [i_2]) * (arr_4 [i_0] [i_0]))))) ^ ((((!(arr_3 [i_0] [i_1] [i_2 + 1])))))));
                    arr_10 [i_0] [i_1] [i_0] = (((((((-(arr_0 [2]))) + ((var_7 ? var_8 : (arr_2 [i_0] [i_1])))))) ? (((((((arr_6 [i_0] [i_0]) ? (arr_2 [i_0] [9]) : 268435456)) + 2147483647)) << (((268435456 + 1) - 268435457)))) : ((((((0 ? 9143528911800458739 : (arr_0 [i_0])))) && (((var_13 ? var_4 : var_14))))))));
                }
            }
        }
    }
    var_20 = (((((-2996753657 ? var_9 : (~var_15)))) == (~var_13)));

    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_15 [i_3] = var_17;
        arr_16 [i_3] [i_3] = (((((((((47103 ? var_8 : var_14))) ? -var_8 : (arr_14 [i_3]))) + 9223372036854775807)) >> (((min(((-(arr_14 [i_3]))), ((((arr_13 [i_3]) << (268435470 - 268435457)))))) - 395059174))));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_20 [i_4] = (~var_10);
        var_21 = ((((var_11 >= (arr_18 [i_4]))) ? ((((var_9 || (arr_11 [i_4]))))) : ((max((((!(arr_19 [i_4] [i_4])))), var_12)))));
    }
    var_22 = (!var_10);
    #pragma endscop
}
