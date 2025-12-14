/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = ((var_5 ? (var_13 ^ var_12) : (var_0 | var_6)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_11 [i_0] = ((!(~var_15)));
                    var_18 = (max(10041202560527835752, 1));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        var_19 = var_4;
                        var_20 = ((-((var_13 ? (((var_3 ? var_16 : var_5))) : var_1))));
                        arr_20 [4] [4] [i_4] [3] = ((~(min(8405541513181715864, 10041202560527835745))));
                        arr_21 [i_0] [i_3] [i_4] [i_5] = (min(((max(var_4, var_0))), (((((!(arr_5 [i_0]))) || var_11)))));
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_21 = ((((((max(var_6, var_2))) ? (var_4 | var_10) : var_2)) >= (((((var_4 || var_10) && (((var_6 ? var_3 : var_2)))))))));
            var_22 = var_16;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 17;i_8 += 1)
                {
                    {
                        var_23 = var_15;
                        arr_28 [i_8 + 1] [i_6] [i_6] [i_8] [i_7] = (((max((!var_11), ((!(arr_10 [i_0] [i_0] [i_7] [i_0]))))) || ((!(var_9 || var_10)))));
                        var_24 = var_4;
                        var_25 = ((var_12 ? (max((max(511, 8405541513181715864)), var_4)) : var_10));
                    }
                }
            }
            var_26 = (min(((var_2 * (var_1 & var_13))), (((-((var_16 ? var_0 : var_15)))))));
        }
        var_27 = var_4;
    }
    for (int i_9 = 2; i_9 < 7;i_9 += 1)
    {
        var_28 = (arr_10 [i_9] [i_9] [i_9 - 2] [i_9]);
        var_29 = ((((min(((var_12 ? var_0 : (arr_5 [i_9]))), var_5))) ^ ((~(((arr_18 [10] [i_9] [i_9] [i_9 + 3] [i_9] [10]) + 8405541513181715856))))));
    }
    var_30 = var_4;
    var_31 = var_8;
    #pragma endscop
}
