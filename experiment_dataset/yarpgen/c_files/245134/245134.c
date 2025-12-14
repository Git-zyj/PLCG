/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = ((((((min(8846018734076903462, (arr_0 [i_0])))) ? (arr_4 [i_0]) : (min(var_3, (arr_4 [1]))))) * var_14));
                var_18 = (1073217536 | 13);
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_19 = (min(var_12, (((max(var_9, var_14))))));
                        var_20 = (min((((((max(var_1, var_15)))) | ((var_2 ? var_13 : 16226276651569161722)))), var_10));
                    }
                }
            }
        }
        var_21 = ((-((1925868330 ? var_6 : (min((arr_8 [i_2]), 4503599627370495))))));
        var_22 = (max(var_22, ((min(((((min(0, var_13))) | -1073217536)), ((((var_8 ? var_8 : var_8)))))))));
    }
    for (int i_6 = 1; i_6 < 10;i_6 += 1)
    {
        var_23 = (min(var_23, var_11));
        var_24 = ((~((max(-85, 4046648873)))));
        /* LoopNest 3 */
        for (int i_7 = 4; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    {
                        var_25 = (max(var_25, ((max((((31 ? 41 : 7192))), var_1)))));
                        var_26 = ((255 & ((((((~(arr_5 [i_7 - 3] [i_8])))) ? var_16 : var_13)))));
                    }
                }
            }
        }
    }
    var_27 = 377378325;
    #pragma endscop
}
