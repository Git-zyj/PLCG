/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((((((((max(-5120, 32387))) ? var_0 : var_1))) ? var_3 : ((max(var_8, (var_0 && 7144)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = ((-(arr_0 [i_0])));
        var_14 = ((!(arr_1 [13] [i_0])));
        var_15 = ((var_6 ? (arr_0 [i_0]) : var_1));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    {
                        var_16 = var_4;
                        var_17 = (-26072 | -15897);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 4; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 20;i_6 += 1)
                {
                    {
                        var_18 = (arr_13 [i_4 - 3] [i_5] [i_6 + 2]);
                        var_19 = (min(var_19, (((15 || (arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_4 - 3] [i_4]))))));
                        var_20 = var_2;
                        var_21 = (((!7144) ? var_10 : (var_1 >= var_10)));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 24;i_9 += 1)
            {
                {
                    var_22 = (min((arr_19 [i_7]), ((max((arr_18 [i_7] [i_8 - 1]), var_2)))));
                    var_23 = var_10;

                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        var_24 = ((var_6 ? 7130 : -2147483638));
                        var_25 = ((var_11 | (arr_20 [i_7] [i_9] [i_9 + 1] [i_10])));
                    }
                    var_26 = (1646 || 3971760057);
                }
            }
        }
    }
    #pragma endscop
}
