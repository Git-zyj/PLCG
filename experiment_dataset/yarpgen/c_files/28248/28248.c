/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((max(var_4, var_9)))));
    var_11 = -14649;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = (!var_7);
        var_13 = (arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = (~(~var_9));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 *= 135291469824;
                                var_15 -= ((((var_0 >= var_0) % 239)));
                            }
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_5 = 3; i_5 < 21;i_5 += 1)
        {
            var_16 = (max(var_16, (arr_5 [16] [16])));
            var_17 = 326843322;
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 21;i_7 += 1)
        {
            {
                arr_20 [i_7] = (((((arr_19 [12] [i_7]) ^ (((arr_11 [i_6]) ^ var_2)))) * var_9));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        {
                            var_18 = max((((arr_12 [i_6 + 1] [i_6 + 1] [i_7] [i_6 - 1] [16]) >> ((((~(arr_11 [i_6]))) + 134)))), var_2);
                            var_19 = (((!var_2) * ((min(var_4, (arr_25 [i_6 - 1] [i_7] [i_7 + 1] [i_7 + 1]))))));

                            for (int i_10 = 3; i_10 < 19;i_10 += 1)
                            {
                                var_20 = (((var_5 % (arr_26 [i_7] [i_7] [i_8] [i_6 - 1]))));
                                arr_29 [i_7] [i_9] [i_7] [i_7] [i_7] = (max((((~16) ? var_7 : (max((arr_4 [i_6] [i_6] [i_10 + 4]), (arr_23 [i_10] [i_8] [i_7]))))), 1048575));
                            }
                            for (int i_11 = 1; i_11 < 1;i_11 += 1)
                            {
                                arr_32 [i_6] [i_7] = ((64 ? (!1048337338) : 1));
                                arr_33 [i_7] [i_7] [i_7] [i_7 - 1] [i_7] [i_7] [i_7] = (max(((~(var_8 != var_0))), (((arr_5 [i_7] [i_7]) - (max(var_9, var_0))))));
                                var_21 *= (min(((-((-32762 ? var_6 : var_9)))), (arr_6 [i_6] [i_6] [i_8] [i_9])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
