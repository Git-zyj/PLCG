/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_13 ? ((((var_1 <= -5104) != var_7))) : 32767));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        arr_10 [13] [i_3] = ((-(1 == var_2)));
                        var_17 = (max(var_17, (((((max(-4571739812464874643, (arr_4 [i_0] [i_0])))) <= (arr_6 [0] [1] [i_2]))))));
                        var_18 = (min(var_18, ((((+((0 ? (arr_0 [i_3]) : -15383))))))));
                        var_19 *= (min((arr_3 [i_0] [i_1] [i_2]), ((+((4571739812464874642 ? (arr_9 [6] [3] [i_1] [i_0]) : var_5))))));
                        var_20 += ((max(((var_3 ? (arr_6 [i_0] [i_1] [i_2]) : var_2)), (arr_9 [i_3 + 1] [i_3 + 3] [i_3 + 3] [i_3]))));
                    }
                    var_21 *= ((min(var_1, (((-2177 < (arr_5 [i_0] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_22 = ((var_2 ? var_3 : -var_2));
                                arr_18 [i_2] [i_4] [i_2] [i_4] [i_0] = 32767;
                                var_23 = 0;
                                var_24 -= (((var_15 & var_6) ? (~var_1) : ((1 ? 0 : -18965))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
