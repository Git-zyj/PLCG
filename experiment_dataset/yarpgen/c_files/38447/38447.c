/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (max((((var_10 ? (!170) : -14909))), ((var_7 / (min(var_13, 25804))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_3] [4] [i_2] [i_3] [i_3] = (((((!((max(169, var_6))))))) + var_11);
                            var_20 = ((!(((var_9 ? (arr_0 [i_0 - 1] [i_1]) : (arr_0 [i_0 - 1] [i_1]))))));
                        }
                    }
                }
                var_21 = (((((min((!-109), ((-(arr_7 [i_0] [i_1] [8]))))) + 2147483647)) >> (var_2 - 9217097890280687733)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    var_22 = (((arr_16 [i_6]) ? ((10963 ? (arr_17 [i_4] [i_4] [i_6] [6]) : (-10964 && var_5))) : (((((-(arr_12 [i_6])))) ? (var_13 <= 86) : var_3))));
                    var_23 = (((~(arr_13 [i_6]))));

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_24 = (max(-25804, 14895));
                        var_25 = (arr_13 [i_6]);
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_26 = ((((((((arr_13 [i_4]) + 2147483647)) >> (1366920063 - 1366920033)))) || ((((255820722 ? var_0 : (arr_16 [i_4])))))));
                        var_27 *= (((arr_6 [i_4]) ? 146 : (min(var_14, (arr_9 [i_5] [9] [i_5] [i_5] [1] [i_5])))));
                    }
                }
            }
        }
    }
    var_28 = (((~(~var_17))));
    #pragma endscop
}
