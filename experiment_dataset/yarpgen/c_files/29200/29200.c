/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, ((min((((arr_6 [i_0 - 1] [i_0] [i_0 - 3]) * (arr_6 [i_0 - 2] [i_0] [i_0 - 3]))), var_10)))));
                    var_19 *= ((15608 ? (arr_2 [2] [i_2] [8]) : var_9));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((max(((min(var_10, ((max(255, 221)))))), 225)))));
                                var_21 = (min(var_21, (arr_6 [i_1] [6] [i_4])));
                                var_22 ^= 10;
                                var_23 *= (max(((var_9 ? var_5 : (arr_7 [i_0] [i_0 + 1] [i_0] [i_0] [i_0]))), 12));
                                var_24 -= -19057;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_25 -= (((max((~1), (var_11 % var_11))) > (((-10137 > ((max((arr_8 [i_6 - 1] [i_5] [4] [i_1] [i_1] [i_0 - 3]), 226))))))));
                                var_26 *= ((max(12, (max(var_12, 255)))));
                                var_27 = (max(var_27, ((max(((243 ? 4318 : 161)), (((((var_2 ? 243 : (arr_9 [i_0 - 1] [i_0 - 4] [i_0] [i_2] [i_5 - 2] [i_5] [i_6])))) ? 199 : var_10)))))));
                                var_28 -= ((-28228 ? 140 : 223));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 ^= (((((-15711 & (28221 | var_0)))) ? var_3 : (!var_12)));
    #pragma endscop
}
