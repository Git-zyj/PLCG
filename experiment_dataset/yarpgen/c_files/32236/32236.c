/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_0] = (!81);
                arr_5 [i_0] [i_0] = (max((!1), ((var_5 ? var_9 : var_7))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] = ((((~((1 ? var_0 : var_2))))) ? (((var_2 ? var_1 : var_2))) : ((-1 ? var_4 : var_1)));
                        arr_12 [18] [i_0] [1] [i_0] = (max(var_8, (117 + var_6)));
                        var_15 = (max((min(60045, -84)), (!7)));
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] [13] [11] = ((!(((var_2 ? (((max(var_10, var_12)))) : ((var_10 ? var_4 : 488034445240463447)))))));
                        var_16 = (min(var_3, var_9));
                    }
                    arr_16 [21] = 1;
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {

                        for (int i_7 = 2; i_7 < 24;i_7 += 1)
                        {
                            var_17 = ((var_11 ? var_5 : var_0));
                            var_18 = ((13548176392049775559 ? var_4 : var_2));
                            arr_24 [i_0] [14] [i_0] [11] [i_6] = 13215390986605305453;
                            arr_25 [i_6] = -123;
                            arr_26 [i_0] [i_1 + 1] [i_6] [i_6] [i_7] = 74;
                        }
                        var_19 = -var_4;
                    }
                    var_20 = (max(var_20, (((-(!1309872897412453604))))));
                    var_21 = var_3;
                    var_22 -= var_1;
                }
            }
        }
    }
    #pragma endscop
}
