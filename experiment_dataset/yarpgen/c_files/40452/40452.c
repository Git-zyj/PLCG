/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0 + 3] [i_1] [i_1] = (arr_2 [i_0]);
                arr_6 [i_1] = ((2446141697817546662 ? ((var_10 - (var_3 == var_12))) : -37));
                var_13 = (arr_3 [i_0]);
                var_14 = (-62 < 37);
            }
        }
    }

    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        arr_9 [0] [0] &= (max((arr_8 [8]), (var_9 && var_3)));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_19 [i_2] [i_2] = (max((((arr_15 [i_2]) ? 36 : -3855621897057359671)), (arr_17 [i_2] [i_2] [i_2 - 3] [i_2 - 1] [i_2 - 1] [i_2])));
                        var_15 = (max(((458752 << (((((arr_13 [i_2 - 3] [i_3] [i_4] [i_4]) + 11728)) - 22)))), ((var_10 ? 54 : ((((arr_10 [i_4]) >= var_1)))))));
                        var_16 = ((((((var_3 >= var_4) << (((~var_0) - 55))))) ? ((((var_3 ? -1 : var_10)))) : ((var_6 ? (!var_9) : ((((arr_16 [i_2] [i_2] [i_2] [i_5]) >= 32767)))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_17 = (max(var_17, (arr_14 [i_2] [i_2] [i_4] [i_4])));
                        var_18 = (min(var_18, (var_0 % 576460752303422976)));
                    }
                    var_19 &= ((~((2305843009213562880 ? var_4 : var_5))));
                    arr_24 [i_2 + 1] [i_2] [i_4] [6] &= (arr_22 [i_2] [i_3] [i_2 - 3] [i_3]);
                }
            }
        }
    }
    var_20 = (min(var_10, (max((((var_12 ? var_7 : -794941732))), var_4))));
    #pragma endscop
}
