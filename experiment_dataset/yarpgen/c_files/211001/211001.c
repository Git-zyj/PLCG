/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_9));
    var_19 = var_5;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_20 += arr_1 [18];

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            arr_11 [i_0] [i_1 - 2] [i_0] [i_3] = var_9;
                            arr_12 [i_4] [i_3] [i_2] [i_1 - 2] [5] = (arr_1 [i_0 - 2]);
                            arr_13 [7] [i_0 - 1] [i_2] [i_3] = (~-1);
                            arr_14 [i_2] [i_3] [i_0 - 2] [i_2] [i_2] [i_1] [i_0 - 2] = (((arr_8 [i_0 - 1] [14] [i_2] [i_1 - 3]) & var_12));
                        }
                        for (int i_5 = 2; i_5 < 17;i_5 += 1)
                        {
                            var_21 = -84;
                            var_22 -= 1293677197670172304;
                            var_23 = 2251799813684224;
                        }
                        var_24 = 24244;

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_20 [i_0] [i_2] &= 858195109;
                            arr_21 [i_0] [1] [i_0] [11] [i_0 - 1] = ((!((!(~var_6)))));
                        }
                    }
                }
            }
        }
        var_25 = (-115 / -428795227);
        var_26 = var_7;
        arr_22 [i_0] = ((-(min(1056964608, ((max(var_4, 1825246346)))))));
    }
    #pragma endscop
}
