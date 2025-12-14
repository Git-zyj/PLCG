/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-((var_2 ? (~var_6) : ((var_9 ? var_3 : var_8))))));
    var_11 = (max(var_11, (((((var_6 ? 97 : 224)) * var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = 1;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_2] [6] [i_2] = (arr_5 [i_1] [i_1] [i_1]);
                    var_13 += 1;
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    var_14 = (((arr_3 [19]) - (((arr_7 [i_0] [i_3] [i_0 + 1]) ? (arr_1 [i_1 + 2] [i_0 - 1]) : ((~(arr_2 [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_15 ^= (~var_3);
                                var_16 = (min(var_16, ((((((1 ? (arr_4 [i_0 - 1] [i_5 - 1]) : 182))) ? var_3 : (((((1 ? (arr_6 [i_1]) : var_2))) ? 3300419758 : (arr_4 [i_3] [i_3]))))))));
                                var_17 ^= (max(42660, ((-16564 ? var_4 : 1))));
                            }
                        }
                    }
                    var_18 = max(((-(!1))), ((((max(var_5, var_5))) ? -var_1 : (72 > 161))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_19 = ((min(var_8, var_1)));
                                arr_23 [19] [i_7] [i_3] [i_7] [i_3] = ((188 | (((((arr_8 [i_6] [i_6] [i_3]) ? 215 : 929350327))))));
                            }
                        }
                    }
                    var_20 = (max(var_20, var_5));
                }
            }
        }
    }
    #pragma endscop
}
