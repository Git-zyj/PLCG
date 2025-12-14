/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_11 = var_4;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_12 = 381329703;
                            arr_12 [i_3] [i_2] [i_1] [i_1] [i_3] = (-var_2 ^ var_6);
                            var_13 = (min(var_13, var_8));
                            var_14 &= (((((((arr_7 [i_0] [i_1]) / var_3)))) ? (arr_5 [3] [i_3 - 4] [i_2] [i_3]) : (max((var_8 / 4250086436), (0 < 44880860)))));
                            arr_13 [i_3] [i_2] = 115;
                        }
                    }
                }
                var_15 = (max(var_15, (2999230628 & -97)));
                arr_14 [i_0] [i_0] [i_0] = (max((arr_10 [i_0] [16] [4] [i_0]), (min(25165824, ((min(var_2, var_1)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        {

                            for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                            {
                                var_16 = var_0;
                                arr_28 [i_4] [1] [i_4] [1] [i_6] [i_7] [1] = ((-(((var_4 < 25165829) ^ (min(var_4, (arr_10 [i_4] [i_4] [i_6] [i_8])))))));
                            }
                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                            {
                                var_17 = (min(var_17, (arr_3 [i_5 - 2] [i_7 - 1])));
                                var_18 = (((arr_3 [i_5 - 1] [i_5]) >= (arr_29 [i_5 + 1] [i_6] [i_6] [i_6] [i_6] [i_7] [i_7 - 1])));
                            }
                            arr_32 [i_4] [i_4] = 103;
                            var_19 = (max(var_19, (((-((127 / (arr_23 [i_7] [i_7 + 1] [i_5 - 1]))))))));
                        }
                    }
                }
                arr_33 [i_4] = ((((!((max(126, -1)))))));
            }
        }
    }
    #pragma endscop
}
