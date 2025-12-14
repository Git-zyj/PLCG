/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] = -15281;
                    var_19 = (max(var_19, (((-((-(arr_1 [6]))))))));
                    var_20 = (min(var_20, (arr_3 [i_2])));
                    arr_8 [i_0] [i_1] [17] = ((((-91 ? (((((arr_2 [1] [1]) && var_12)))) : 5590384809205858139)) / (((-var_15 ? 2190998513 : (arr_1 [i_2 - 3]))))));
                }
            }
        }
    }
    var_21 = 109906909;
    var_22 = var_6;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            arr_20 [i_3] [i_4] [i_5] [i_4] = ((~(arr_18 [i_4] [i_4] [i_4] [i_6])));
                            var_23 = (((((4051111145481888600 ? var_1 : (arr_14 [i_3] [i_4] [i_6])))) ? (((((arr_17 [i_4]) + 5969530134503845392)) & var_13)) : (arr_10 [i_6])));
                            var_24 = var_8;
                        }
                    }
                }
                var_25 = var_2;
            }
        }
    }
    #pragma endscop
}
