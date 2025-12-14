/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (((~(arr_0 [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_20 = (arr_7 [i_3]);
                            var_21 = (((arr_1 [9]) != 52));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_22 = ((3129050246 ? (arr_14 [i_0] [i_1] [i_4 - 1] [i_5 - 1]) : 215));
                            var_23 = var_6;
                            var_24 = ((((min(var_13, (2147483647 + 2404030353437805236)))) ? (((arr_2 [i_4 - 2]) - (arr_2 [i_4 - 4]))) : (((((arr_11 [i_0] [i_1] [i_4] [i_0]) ? (arr_15 [i_5 - 1]) : 215))))));
                            var_25 = (arr_10 [i_0] [i_0] [i_0] [i_0] [0]);
                        }
                    }
                }
                var_26 = 4294967276;
                var_27 = 3129050241;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    var_28 = (((arr_22 [i_6] [i_7]) ? (arr_19 [i_6]) : (arr_18 [i_6])));
                    var_29 = (arr_20 [i_6]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 0;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            {
                                var_30 = -2686217458110852302;
                                var_31 = ((((!var_17) ? 2852250292 : (arr_34 [i_9] [i_9] [i_9]))));
                            }
                        }
                    }
                    var_32 = (46 & 3129050249);
                    var_33 = ((43 ^ ((-(arr_27 [i_11 + 1])))));
                }
            }
        }
    }
    var_34 = (min(var_11, var_1));
    #pragma endscop
}
