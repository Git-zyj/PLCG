/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((~(min(18410715276690587648, var_2)))) & (((~var_2) ? (~var_8) : var_10))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_17 = ((!(((~(!var_10))))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] &= var_12;
                            var_18 = min((arr_9 [i_2 + 1] [i_0 - 2] [i_1 - 1] [i_0] [i_2 - 2]), (min(var_10, var_4)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_19 *= (((((((~(arr_12 [i_0])))) & (arr_1 [i_6 + 2]))) | (((~(~32753))))));
                                var_20 = (max(var_20, var_4));
                                arr_21 [i_6 + 1] [i_6 + 1] [i_0] [i_5] [i_0] = 45156;
                                arr_22 [i_0] [i_1] [i_4] [i_5] [i_6 + 1] = (((arr_10 [i_1] [i_5] [3]) | (!var_11)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(((!(((115 ? var_11 : var_11))))), ((!(!var_0)))));
    var_22 = (max(var_22, (((-((-((-44 ? var_2 : 2048)))))))));
    #pragma endscop
}
