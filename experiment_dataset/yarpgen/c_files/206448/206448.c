/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = ((!(arr_1 [i_0])));
                arr_6 [i_0] = var_4;

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_13 ^= (max((arr_2 [i_0 + 3] [i_2]), ((((((arr_2 [i_2] [i_0]) + var_5))) ? 123 : ((0 ? 24 : -25))))));
                    var_14 = (((~var_11) * ((16 / (-127 - 1)))));
                    arr_9 [i_0] [2] [i_0] = (((arr_4 [i_1]) ? ((((-127 - 1) && -17))) : ((-5 ? (arr_2 [2] [i_0]) : -17))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_15 = (arr_2 [i_0 + 1] [i_0 + 2]);
                        var_16 = (max(var_16, (((((~(arr_5 [i_0 - 3]))) | (arr_5 [i_0 - 3]))))));
                        var_17 = (((arr_2 [i_0 + 3] [i_1]) ? (((arr_5 [i_0 + 1]) ? var_6 : -19)) : ((var_11 ? -26 : (arr_2 [i_0 + 2] [i_1])))));
                        var_18 = 127;
                    }

                    for (int i_4 = 4; i_4 < 20;i_4 += 1)
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_2] [i_4] = ((+((((var_9 ? (arr_15 [i_0] [i_1] [i_1] [i_4]) : 10))))));
                        var_19 = 127;
                        arr_18 [i_2] [11] [11] [i_2] = var_5;
                    }
                }
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    var_20 = ((((max(-25, (max((arr_5 [i_1]), (arr_11 [i_0] [i_1] [i_5])))))) * 18));
                    var_21 ^= ((((-25 ? ((var_1 >> (-17 + 43))) : (arr_4 [i_5 + 1]))) | -117));
                }
                arr_21 [12] [i_0] [i_0 + 2] = (((((125 ? var_8 : -117))) ? (((arr_13 [i_0] [i_1] [i_1]) ? 16 : (arr_5 [i_1]))) : (-24 ^ 9)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            {
                var_22 = (((~24) >= (((arr_12 [i_6] [i_7] [i_7] [i_6] [13]) * (arr_12 [i_7] [i_6] [i_6] [i_6] [i_6])))));
                var_23 = var_10;
            }
        }
    }
    #pragma endscop
}
