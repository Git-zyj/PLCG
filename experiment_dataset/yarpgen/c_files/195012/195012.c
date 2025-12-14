/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [1] = ((-919739911 * (!var_12)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 = min((max((arr_1 [i_0]), (arr_10 [i_2]))), ((((arr_1 [i_4]) - (arr_1 [i_0])))));
                                var_17 = (!3);
                                arr_14 [i_0] [i_1] [i_2] [i_0] [i_4] = arr_13 [i_3] [i_3] [i_0] [i_1] [i_0];
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_13;
    var_19 = (max(var_19, (((var_9 ? (771994035 * var_8) : (((min(var_6, var_13)))))))));
    #pragma endscop
}
