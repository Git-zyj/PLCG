/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -var_17;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 = (min((-32767 - 1), 1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [6] [i_1] [i_2] [i_2] = ((~((((max(12288, 1))) & ((max(21302, 124)))))));
                    var_22 -= (((arr_5 [i_0] [i_0] [0] [i_2]) ? (((((-(arr_5 [i_0] [i_0] [i_0] [i_0])))) ? -141863388262170624 : (arr_1 [i_0]))) : (((((((arr_0 [i_2] [i_0]) + 1167994209)) <= -70))))));
                    var_23 = 7516192768;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_24 = (max(var_24, (arr_1 [i_3])));
        var_25 = ((~(((!(arr_7 [i_3] [i_3]))))));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_26 -= ((((max(((~(arr_11 [i_4]))), (arr_10 [i_4])))) <= ((7 ? 22 : var_1))));
        var_27 = 10215;
        var_28 = var_14;
    }
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        var_29 = (((!(arr_12 [i_5 + 1]))));
        var_30 = var_16;
    }
    #pragma endscop
}
