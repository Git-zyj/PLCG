/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = var_4;

                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_2] [i_1] [i_4] [i_3] = ((((min(var_9, (arr_4 [i_0] [i_2 + 1] [i_2 - 2])))) - (!431662041)));
                                var_20 = (max((!var_18), 9223372036854775805));
                            }
                        }
                    }
                    var_21 = (max(var_21, var_11));

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_15 [i_5] [i_5] [1] [8] = ((((~((var_3 ^ (arr_1 [i_2] [i_5])))))) ? (max(239, 54863692834559151)) : (((((arr_8 [i_1]) == ((max(var_3, 24328))))))));
                        var_22 = ((((max(29587, var_15))) ? ((1 >> ((((arr_13 [i_0] [i_1] [6] [i_5]) < var_12))))) : (arr_4 [1] [i_1] [i_0])));
                    }
                }
            }
        }
    }
    var_23 = var_11;
    #pragma endscop
}
