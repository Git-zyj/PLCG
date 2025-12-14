/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = 32767;
    var_15 = var_8;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, ((max(var_12, (arr_0 [i_1 - 2]))))));
                    var_17 = (min(var_17, (((!(((-(((arr_6 [i_2] [i_2] [16] [i_2]) | var_4))))))))));
                    arr_10 [7] [i_1] [i_1] [i_0] = var_4;
                }
            }
        }
        arr_11 [i_0] [i_0] = (((var_7 * var_4) >= (~var_11)));
        arr_12 [i_0] = ((-var_4 & (arr_3 [i_0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_16 [i_3] = (min(((-19 ? (-32767 - 1) : 22686)), ((~(~var_10)))));
        var_18 = (((127 + 32767) ? var_1 : ((~(((arr_2 [i_3]) ? (arr_4 [i_3] [i_3] [i_3]) : (arr_14 [i_3] [i_3])))))));
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        arr_19 [i_4] &= (-32767 - 1);
        var_19 = (max(var_19, var_2));
    }
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    var_20 = (min(var_20, (((((max(26613, 32767))) - ((min((((!(-32767 - 1)))), (arr_21 [i_6 - 1] [i_5 - 1])))))))));
                    var_21 = (((((arr_22 [i_5 + 1]) ^ (((arr_22 [i_6 - 1]) ? var_2 : var_9))))) ? (max(var_7, var_4)) : var_0);
                    arr_27 [i_5] = (((max((((var_11 ? (-32767 - 1) : (arr_20 [i_5] [22])))), (((arr_20 [i_5] [i_5]) ? (arr_24 [i_5 + 1] [i_7]) : (arr_23 [i_7]))))) > (((max((arr_20 [i_5 + 1] [i_5 + 1]), (arr_20 [i_5 - 2] [i_5 - 1])))))));
                    arr_28 [i_5 + 1] [i_5] [i_5 + 1] &= ((~(((-32767 - 1) | (arr_23 [i_5 - 2])))));
                }
            }
        }
        arr_29 [i_5] = (min(((-((4265948931 ? var_6 : 4294967295)))), (arr_21 [i_5 - 2] [i_5 - 1])));
    }
    var_22 = ((var_1 ? var_4 : ((min(4543191067707000073, var_0)))));
    #pragma endscop
}
