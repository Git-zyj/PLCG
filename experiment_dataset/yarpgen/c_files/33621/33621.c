/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 |= ((!(arr_11 [i_1] [i_2] [i_1] [i_1])));
                                var_13 += ((!((!((((arr_3 [i_0] [i_2] [i_3]) ? 0 : var_10)))))));
                                var_14 = ((((((max(3401777568, -20))) ? 1 : (max(0, var_5)))) + ((+(((arr_8 [i_0] [i_0] [i_3] [i_0]) ? var_2 : var_8))))));
                                var_15 = ((45355 ? -20 : 0));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_2] [8] = var_4;
                            var_16 |= ((!(arr_4 [14] [i_6])));
                        }
                        arr_18 [16] [i_0] = max((((var_1 ? (arr_15 [i_0] [i_0] [i_0] [i_1]) : var_10))), (((max(893189728, var_9)) / (~8578253463096504912))));
                        arr_19 [i_0] [i_0] [i_2] [i_0] [i_0] = var_0;
                        var_17 = ((max((arr_14 [i_0] [i_1] [i_2] [i_2]), -18446744073709551615)));
                    }
                    for (int i_7 = 3; i_7 < 18;i_7 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_0] = ((-((min((var_4 && 2), (3401777568 >= 0))))));
                        var_18 = (max(var_18, (((((max((arr_8 [i_0] [i_1] [i_0] [i_1]), (arr_8 [i_1] [i_1] [i_1] [i_1])))) ? (arr_8 [i_7] [i_7] [i_2] [i_1]) : (((arr_8 [i_0] [i_1] [i_2] [i_1]) * var_4)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_27 [i_0] = (~(max(-4, 3057170736)));
                                var_19 = (min(var_19, 3401777568));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_0;
    #pragma endscop
}
