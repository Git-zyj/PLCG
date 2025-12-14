/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = var_7;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_16 = ((((max((arr_6 [i_4] [i_2 - 1] [i_1 + 1] [i_0]), (min(var_2, var_6))))) ? (arr_2 [i_0] [i_1] [i_2]) : (((!(!1016))))));
                                var_17 = ((9154579919809677386 ? 0 : 0));
                                var_18 = (((~(~var_4))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_19 = 4380866641920;
                            arr_19 [i_6] [i_6] [11] [i_1 + 1] [i_1] [10] = (~-52);
                        }
                    }
                }
                arr_20 [i_0] = max(var_12, (max((var_5 * 2167282727), var_13)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 17;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            {
                                var_20 = (min(1111441438, 32760));
                                arr_37 [i_7] [i_7] [i_8] [16] [i_7] [i_7 + 2] = 2147483647;
                                var_21 = var_4;
                                var_22 = (min(var_22, (arr_27 [i_7])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_23 = (max((max(var_7, (max(var_3, var_12)))), ((((~-40) ? (arr_22 [16] [i_13]) : (~var_3))))));
                                var_24 = ((~((~(max((arr_27 [i_8]), 460755306908327802))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_9;
    var_26 = 171708081;
    #pragma endscop
}
