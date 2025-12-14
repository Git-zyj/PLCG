/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    var_17 = var_6;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = (max(var_18, ((max(((((((arr_0 [4]) ? var_5 : var_8)) / 57344))), (arr_0 [i_0]))))));
        arr_2 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    {
                        var_19 += (((((min((min(var_5, (arr_4 [i_0] [i_0] [i_0]))), (arr_5 [i_0] [i_1] [i_1] [i_3]))))) > ((var_3 ? 7573538244342472303 : (var_5 - var_4)))));
                        arr_9 [1] [i_1] = ((~((var_14 ? (~var_9) : (~6)))));
                    }
                }
            }
        }
        arr_10 [i_0] = var_13;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_20 = 98;
        var_21 = (arr_12 [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    arr_18 [i_4] [i_4] = (((min(((var_15 ? var_1 : 1)), (((1 < (arr_12 [i_4])))))) > ((~((min(10, (arr_17 [i_4] [i_4]))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_24 [i_8] [i_4] [i_4] [i_4] [i_4] = ((var_14 ? var_0 : (((min(var_0, var_8)) ? 6 : 21))));
                                var_22 = ((-((-((249 ? 259127460428703320 : var_8))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_23 = (min(var_23, (((65531 * (arr_23 [1] [i_9] [20] [0] [i_9]))))));
        var_24 -= 42;
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_25 = ((var_12 ? (((((28697 - 93) > (!4905069587739009649))))) : (~-13541674485970541966)));
        arr_31 [i_10] = ((~((~(arr_12 [14])))));
    }
    var_26 = var_1;
    #pragma endscop
}
