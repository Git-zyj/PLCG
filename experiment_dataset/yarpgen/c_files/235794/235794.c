/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [13] [4] = (-(arr_0 [i_0]));
        arr_3 [i_0] [i_0] = arr_0 [i_0];
        arr_4 [i_0] [i_0] = (((((var_7 & (arr_1 [14])))) ? var_9 : var_4));
        arr_5 [i_0] = (((((var_5 ? (arr_0 [i_0]) : (arr_1 [1])))) ? (var_7 <= var_0) : (((!(arr_1 [i_0]))))));
        arr_6 [i_0] = (((arr_0 [i_0]) % (arr_0 [i_0])));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_9 [i_1] = (max((((arr_0 [i_1 + 2]) & (var_10 * var_3))), ((((max(-753470947, var_5)) << ((((var_2 ? (arr_1 [1]) : var_7)) + 751787546)))))));
        arr_10 [i_1] = ((~(arr_8 [i_1 + 2])));
        arr_11 [i_1 + 2] [i_1] = (((((min(var_3, (arr_1 [i_1]))))) ? (max((arr_8 [i_1]), ((var_2 >> (var_3 - 1630664937))))) : (arr_7 [i_1])));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 13;i_3 += 1)
        {
            {
                arr_16 [i_2] = (max(((((arr_8 [i_3 - 1]) ? (-34 / 307781266) : -var_3))), ((~(min(-307781258, var_6))))));
                arr_17 [i_2] [i_2] = var_2;
            }
        }
    }
    var_11 = (!(((~var_7) <= var_8)));
    var_12 = max(((min(var_7, var_4))), (((((var_9 ? var_5 : var_8))) ? ((max(var_7, var_4))) : ((var_2 ? var_5 : var_1)))));
    #pragma endscop
}
