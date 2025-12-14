/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_10 = var_6;
                    arr_8 [i_0] [i_0] [i_0] = (((min((var_4 / var_6), var_4)) < var_6));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_11 = var_3;
                        var_12 -= var_5;
                        var_13 = (-3016 | 9340);
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_14 [i_1] [i_2] [i_1] [i_0] = ((var_2 >= (9340 != 56170)));
                        arr_15 [16] [i_1] [16] [16] [i_1] = (((((((((-1107708863 + 2147483647) >> (2147483647 - 2147483647)))) ? (((var_1 ? var_5 : var_4))) : ((0 ? 56212 : 4129533073))))) ? ((((var_9 >> (var_3 - 129689335075892097))) * (((2147483623 >> (9310 - 9293)))))) : var_2));
                    }
                }
            }
        }
    }
    var_14 = var_8;
    #pragma endscop
}
