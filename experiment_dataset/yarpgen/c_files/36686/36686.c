/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_1] = (((var_3 >> (((arr_0 [i_2]) + 510898083)))));
                                var_17 = (min(var_17, (((((1812149660045685913 ? 18 : 29942)) < var_13)))));
                            }
                        }
                    }
                    var_18 |= var_14;

                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        arr_16 [i_2] = (57941219 & var_12);
                        arr_17 [i_0] [9] |= (((((-((var_11 ? var_1 : (arr_3 [i_1] [i_2 - 1] [i_5])))))) ? ((-(~9062292258446454621))) : (arr_11 [i_0] [i_1] [i_5 - 1] [i_5 + 2] [i_5 + 2] [i_5 + 2])));
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_21 [14] [i_0] [i_0] [i_2] [14] [i_6] = ((((((var_2 ? 4084441033339505158 : var_9)))) << (((((((var_6 ? 1 : 11))) ? (~var_13) : -var_5)) + 23186))));
                        var_19 = ((-1 ? 2879417945 : var_8));
                        arr_22 [i_2 + 2] [i_2 + 2] [i_1] [4] = -var_8;
                        arr_23 [i_0] [i_0] [0] [0] [i_6] = ((33442 >> (var_2 - 3662800475)));
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        arr_27 [i_2] [i_1] [i_2] [i_1] [i_7] = (19012417 | var_4);
                        var_20 = var_9;
                    }
                }
            }
        }
    }
    var_21 = 38275;
    #pragma endscop
}
