/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0 + 1] = ((-((-(arr_1 [i_0 - 1])))));
        var_16 = max((min(164, 91)), (arr_1 [i_0 + 2]));
        arr_3 [i_0] [i_0] |= (~((var_2 ? -25 : 148)));
        var_17 += (max(0, (((arr_1 [i_0 + 2]) >> (((arr_1 [i_0 + 2]) - 37))))));
        arr_4 [i_0 + 1] = (!1);
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 16;i_3 += 1)
            {
                {
                    var_18 = ((var_12 ? ((max((arr_11 [i_1] [i_1 + 1] [i_1 - 1] [i_1 - 1]), (arr_11 [i_1] [i_1 - 1] [i_1] [i_1 + 1])))) : (arr_6 [i_1])));
                    arr_12 [i_1] [i_2] [i_3 - 4] = ((((((~39) ? (min((arr_7 [i_1] [16] [i_3]), (arr_10 [i_1] [1] [i_1]))) : var_5))) || (arr_7 [i_1] [4] [15])));
                }
            }
        }
        arr_13 [i_1] = -1181727227;
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 17;i_4 += 1)
    {
        var_19 = ((-78 ? -25 : (arr_11 [11] [i_4 - 2] [i_4] [i_4])));
        var_20 = 8885646427200968257;
    }
    var_21 = (((!(((var_13 ? 1 : var_7))))));
    #pragma endscop
}
