/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = (arr_3 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_10 [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 4] [i_0 - 4] = var_7;
                            var_19 = (min(var_15, ((105 ? (arr_7 [i_0 + 1] [i_0 - 1] [i_0 + 1]) : var_6))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_20 [i_4] [i_1] [i_1] [i_1] [i_4] [i_1] = ((((((arr_0 [i_0 - 1]) ? var_2 : (arr_12 [i_0 - 1] [i_1] [i_4] [i_5])))) ? (max(var_5, ((var_9 ? (arr_12 [i_0] [i_1] [i_4] [i_5]) : var_5)))) : var_4));
                                arr_21 [i_0] [i_0 - 1] [i_1] [i_4] [i_5] [i_4] [i_0 - 1] = ((var_7 ? var_9 : ((((min(var_14, 255))) ? var_3 : (((-68 ? var_0 : var_11)))))));
                            }
                        }
                    }
                }
                var_20 = (var_1 - var_8);
            }
        }
    }
    var_21 = (min((!6070498156985087725), var_17));
    var_22 ^= 72;
    #pragma endscop
}
