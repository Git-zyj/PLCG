/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = (max(var_1, var_1));
                var_10 = ((((!(arr_3 [i_0 - 1] [i_0 - 1]))) ? ((((((~(arr_1 [i_1])))) ? var_7 : (var_7 >= var_8)))) : (min(((max(var_4, var_7))), ((~(arr_4 [i_0] [i_1] [i_0])))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_11 = (((((~(arr_8 [12] [i_1] [i_2])))) ? ((~(arr_8 [i_0 - 1] [i_2] [i_2]))) : ((min(var_1, var_0)))));
                                arr_15 [i_4] [i_3] [i_0] [i_3] [i_0] = ((var_6 <= (((((-(arr_12 [i_0] [i_1] [i_2])))) ? (((!(arr_10 [i_0] [11] [11] [1])))) : ((var_4 - (arr_8 [i_1] [i_2] [i_2])))))));
                            }
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_12 = (arr_11 [i_1] [i_5] [i_1] [i_1] [i_1] [i_1]);
                                var_13 -= ((~((-(((!(arr_11 [0] [2] [10] [i_5] [i_5 + 2] [i_5]))))))));
                                var_14 = ((((max((arr_3 [i_0 - 3] [i_7 + 1]), ((var_9 - (arr_6 [i_0] [i_7])))))) ? (arr_21 [i_0] [i_0] [i_5 + 2] [i_5] [i_7 - 1]) : (arr_14 [i_7 + 1] [i_6 + 2] [i_6 + 1] [i_5] [i_1] [16] [i_0])));
                            }
                        }
                    }
                    var_15 *= (!var_4);
                }
            }
        }
    }
    var_16 = ((-(~var_4)));
    #pragma endscop
}
