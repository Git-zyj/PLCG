/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 = -var_6;
    var_13 = (var_1 / var_1);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = 60418;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_14 -= ((min(((1 ^ (arr_2 [2])), (arr_11 [i_0] [i_2])))));
                            var_15 = (((arr_3 [i_2]) ? ((-86 ? -6851841401910403779 : (arr_9 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 - 1]))) : var_8));
                            arr_12 [i_1] [i_1] = (max((((var_5 && (((arr_2 [i_1]) && 0))))), (min((var_7 && var_6), (min(var_7, var_6))))));
                            var_16 += (min((min((arr_11 [i_0 + 3] [i_0 + 1]), (arr_3 [i_3]))), ((1 >> (var_2 + 55)))));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_15 [i_4] [i_0] [i_2] [i_2] [i_1] [i_0] = var_5;
                                arr_16 [i_0] [i_1] [i_0] [i_3] [i_0] [i_1 - 2] = (max((arr_4 [i_0 - 1]), (arr_4 [i_0 + 2])));
                                var_17 = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
