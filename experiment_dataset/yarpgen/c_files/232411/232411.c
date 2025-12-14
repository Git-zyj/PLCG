/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_10 = (arr_1 [6] [i_0]);

        for (int i_1 = 3; i_1 < 17;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] [i_0] [i_0] &= ((arr_1 [i_1 - 2] [i_1 - 2]) ? ((~(arr_1 [i_1 + 2] [i_1 + 1]))) : ((min((arr_1 [i_1 - 1] [i_1 - 3]), (arr_1 [i_1 + 1] [i_1 - 3])))));
            var_11 = var_1;
            var_12 = (min((!17154796822823866660), (((arr_2 [i_1 + 2] [i_1 - 3] [i_1 + 2]) && 7721679349126328473))));
            var_13 += ((!(arr_1 [i_0] [i_1 + 2])));
        }
        for (int i_2 = 3; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_14 = var_6;
            /* LoopNest 3 */
            for (int i_3 = 4; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_15 = (max(var_15, (((((((arr_11 [i_2 + 2] [i_2 - 1] [i_2 - 2] [i_3 + 1]) ? var_5 : (arr_11 [i_2 - 3] [i_2 - 2] [i_2 - 1] [i_3 - 4])))) && 610475774)))));
                            var_16 ^= ((!((!(arr_5 [i_3 - 1] [i_3 + 1])))));
                            arr_14 [i_0] [i_2 - 2] [i_0] [i_2 - 2] [i_0] [i_4] = (min(((((arr_0 [i_2 - 3] [i_2 - 2]) && (arr_0 [i_2 + 1] [i_2 + 2])))), ((610475774 | (max((arr_0 [i_0] [i_5]), -610475779))))));
                            var_17 = (((arr_10 [i_0] [i_0]) ? ((-610475785 ? var_5 : (arr_0 [i_2 - 1] [i_2 - 1]))) : ((((-2147483647 - 1) + ((var_8 ? var_0 : var_6)))))));
                        }
                    }
                }
            }
        }
        var_18 -= ((!(arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])));
        var_19 = (max(var_19, var_4));
    }
    var_20 = var_6;

    /* vectorizable */
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        var_21 = (min(var_21, (arr_16 [i_6])));
        var_22 = 2147483646;
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_23 = (min((arr_3 [i_7] [i_7] [i_7]), -610475775));
        arr_22 [12] = ((((max((arr_8 [i_7] [i_7] [i_7]), (arr_11 [i_7] [i_7] [i_7] [i_7])))) ? (min(var_0, (arr_11 [i_7] [i_7] [i_7] [i_7]))) : ((min(610475784, 520192)))));
        arr_23 [i_7] = (arr_7 [i_7] [i_7] [i_7]);
        arr_24 [i_7] = 24566;
        var_24 |= (min((!3564), (((arr_10 [i_7] [i_7]) && var_2))));
    }
    var_25 = 610475767;
    var_26 = var_6;
    #pragma endscop
}
