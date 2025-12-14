/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_6 >= ((1715098907 ? (((var_2 ? 1715098906 : var_0))) : var_3))));
    var_11 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = 0;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_13 = ((-((var_5 ? var_6 : var_8))));
                    var_14 = (((var_8 & -1715098932) / ((-1630 ? 1715098932 : var_6))));
                }
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    arr_8 [i_0] = (!var_7);

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_3 + 1] [i_4] [i_1] = ((var_9 / ((var_0 ? 1 : -1715098904))));
                        var_15 += max(((-((747548849 ? var_4 : var_3)))), ((min((min(var_9, -1715098931)), 2047))));
                        var_16 -= 6194148193509168668;
                    }
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        var_17 = (-747548849 && var_0);
                        arr_17 [i_0] [i_0] = var_5;
                    }
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    arr_21 [i_0] [i_1] [i_0] = (((1 + var_7) ? (((-1715098924 + var_4) - -1715098920)) : 1));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_18 ^= (((((2147483647 - 1) ? var_7 : var_8)) & var_4));
                                var_19 = (min(var_19, (((((((var_1 / 53671) ? ((0 ? var_2 : var_0)) : ((17178820608 ? var_4 : -26887))))) ? ((((((var_8 ? var_8 : var_7))) ? (((var_7 + 2147483647) << (var_6 - 28833))) : (min(var_2, -1715098921))))) : ((15543005434008353406 ? ((var_5 ? 504 : var_8)) : var_8)))))));
                            }
                        }
                    }
                }
                var_20 = (max(((((0 & var_6) ? (var_3 != var_4) : (!var_6)))), ((53684 | ((var_5 ? 13215235640370616163 : var_9))))));
            }
        }
    }
    #pragma endscop
}
