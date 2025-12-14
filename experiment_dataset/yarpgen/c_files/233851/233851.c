/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = (((var_8 ? (~var_7) : var_6)));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_12 = ((arr_0 [i_0 - 3]) ? (arr_0 [i_0 - 2]) : var_6);
        var_13 &= var_5;

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_1] = (((arr_1 [i_0 - 2]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 3])));
            var_14 = (((arr_1 [1]) + (arr_1 [0])));
            var_15 = (((1143832035247894720 && var_1) <= -10));
            var_16 = (((arr_0 [i_0 - 3]) ? var_5 : (arr_3 [i_0 - 3] [i_0 - 3])));
            arr_7 [i_1] = (var_3 / 9);
        }

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_17 = ((~((1078545767 ? (arr_0 [i_0]) : (arr_2 [i_0])))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_18 &= ((-6052052309863514428 * 3436623372536355085) ? -2033157326 : (((arr_13 [i_0] [i_0]) ? 64653749830650849 : 1409956291)));
                        arr_16 [i_0 - 2] [i_2] [i_0 - 2] [i_4] [i_3] [8] |= ((((arr_15 [i_0 + 1] [i_0] [i_2] [i_3] [i_4]) > 127)));
                        var_19 = var_1;
                    }
                }
            }
            arr_17 [i_0] = ((var_1 ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 - 3])));
            arr_18 [i_0] [i_0] = (arr_15 [i_0] [8] [i_2] [i_0 - 2] [1]);
        }
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_20 |= ((((1 & 42) << (-2033157326 + 2033157335))));
        var_21 |= ((!(((((arr_21 [21] [i_5]) ? (arr_21 [i_5] [10]) : (arr_20 [i_5] [i_5])))))));
    }
    var_22 = ((var_2 - (((-((1 ? var_4 : var_3)))))));
    #pragma endscop
}
