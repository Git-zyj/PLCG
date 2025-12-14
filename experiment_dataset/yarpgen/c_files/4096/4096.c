/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_4;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_11 = (((arr_1 [i_0]) ? ((((arr_1 [i_0]) ? var_6 : 80))) : (((var_8 - (min(var_0, 1)))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 8;i_3 += 1)
                {
                    {
                        var_12 -= ((max((min(1, (arr_5 [i_0 + 1] [i_1] [i_2] [i_3]))), (arr_1 [i_2]))));
                        var_13 = (max(136, (((!((((arr_7 [i_0] [i_0] [i_2]) ? var_9 : 230))))))));
                        var_14 = (120 / 2497619943);
                        arr_9 [0] [i_1] [i_1 - 2] [i_0] [i_3] = ((((arr_2 [i_1 - 2]) ? (arr_5 [i_0] [i_1 + 1] [i_2] [i_3 + 1]) : (arr_5 [i_0] [i_0 + 1] [i_0 + 1] [i_0]))));
                    }
                }
            }
        }
        arr_10 [i_0] = ((((~(arr_3 [i_0]))) / (-3710 + -1069)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_15 |= (((var_0 + 2719683110) >= ((var_9 ? (arr_12 [12]) : (arr_11 [14] [12])))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_16 = (max(var_16, ((((arr_14 [i_4]) ? (127 && 0) : (!var_6))))));
                        arr_21 [i_4] [12] [i_4] [i_7] = ((var_9 << (var_1 - 1654913950)));
                        var_17 = ((arr_20 [i_6 + 2] [i_4] [i_6 + 2] [i_7]) ? var_3 : (arr_16 [i_4] [i_6 - 1] [i_6]));
                        var_18 = (((arr_14 [i_4]) ? var_2 : (arr_14 [i_4])));
                    }
                }
            }
        }
        arr_22 [i_4] = ((-(arr_14 [i_4])));
    }
    var_19 = (min(var_19, ((min(var_8, var_7)))));
    #pragma endscop
}
