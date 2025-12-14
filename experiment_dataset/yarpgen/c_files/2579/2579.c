/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 0;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_11 [i_2] [i_1] [i_0] = 7393879093901348664;
                    arr_12 [5] [i_1] [i_1] [i_2] = (((arr_3 [i_1]) == var_9));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1] = -var_4;
                                arr_20 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] = (min((min(5317, (arr_3 [i_0 - 1]))), ((((arr_13 [i_0 - 2] [i_4 + 1]) > ((var_6 ? var_5 : (arr_9 [i_2] [i_1] [i_2]))))))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = (((((arr_0 [i_0 - 1]) ? (arr_9 [i_0 + 1] [i_1] [i_3]) : -9020)) % var_6));
                                var_12 = (max((max(var_0, var_1)), ((max(((var_3 ? var_0 : (arr_4 [i_1] [i_1]))), ((max(var_5, 255))))))));
                            }
                        }
                    }
                    var_13 = ((((max(var_2, 13))) ? ((var_7 ? 255 : (arr_4 [i_0 - 1] [i_1]))) : ((-(arr_18 [i_0 - 2])))));
                }
            }
        }
    }
    var_14 = (max(var_7, var_1));
    var_15 = (~var_4);
    #pragma endscop
}
