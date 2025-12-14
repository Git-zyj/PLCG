/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = 2498428615;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_7 [i_0] = (arr_0 [i_0]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_22 &= (arr_4 [i_0] [i_0]);
                        arr_12 [i_0] [i_3] [i_3] [11] [i_0] = (((56955 == var_19) ? var_4 : (((51682 >= (arr_2 [i_0]))))));
                    }
                }
            }
            var_23 = (min(var_23, var_19));
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    arr_19 [i_4] [4] [i_5] |= ((arr_14 [i_0]) / (arr_1 [i_0]));

                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        arr_22 [i_0] [i_4] [i_4] [i_0] = (((arr_17 [i_0]) ? (arr_17 [i_6 + 1]) : (arr_0 [i_4])));
                        arr_23 [i_0] [i_4] [i_5] [i_4] [i_0] [4] = ((arr_13 [i_0] [i_0] [i_0]) != var_6);
                        var_24 = (27338 <= var_19);
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] = -487895913;
                    }
                }
            }
        }
        arr_25 [i_0] = ((~(arr_1 [i_0])));
        var_25 = ((!(!var_19)));
    }
    #pragma endscop
}
