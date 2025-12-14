/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_13 *= (!var_1);
                        arr_10 [i_3] [i_2] = (((arr_9 [i_1 + 1] [i_1]) && (arr_3 [i_1])));
                        var_14 = ((232 ? 1962724993 : 9409043761826440485));
                    }
                    arr_11 [i_0] [i_0] [i_2] = (((arr_4 [i_0 - 2] [i_1 + 1] [i_1 + 1]) - (arr_6 [i_0 - 1] [i_1 + 1] [i_0 - 3])));
                    arr_12 [i_0] [i_1] [i_2] = (!var_1);
                    var_15 = (min(var_15, (((!(arr_4 [i_0 + 1] [4] [i_1 + 1]))))));
                }
            }
        }
        var_16 = (((arr_6 [i_0 - 2] [i_0 - 2] [15]) ? 246 : (arr_1 [i_0])));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_17 = var_6;
        arr_16 [i_4] = (max((((8 || 211) ? (min(1962724998, 2)) : var_10)), (arr_14 [i_4])));
    }
    var_18 = (max(var_0, (((!(var_3 - var_6))))));

    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_19 = (!13522395515528757683);
        arr_19 [i_5] = (arr_2 [i_5] [i_5]);
        var_20 ^= (!((((arr_13 [i_5]) ? var_12 : (arr_13 [i_5])))));
        var_21 = 143;
    }
    var_22 = (!var_12);
    #pragma endscop
}
