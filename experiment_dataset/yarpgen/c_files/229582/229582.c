/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(var_7 ^ var_14)));
    var_18 += (((((~(max(var_6, var_16))))) ? (-37994 != var_15) : var_3));
    var_19 = (6932242079368883051 >= 5661);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [1] [9] = 100;

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        arr_12 [i_3] [i_2] [i_2] [i_0] [i_1] [i_0] = (arr_0 [i_0]);
                        arr_13 [i_0 - 1] [i_3] = ((~(~var_6)));
                        arr_14 [i_0] [i_0] [i_1] [i_2] [i_3 - 2] [i_3] = ((-6932242079368883051 && (arr_3 [i_0] [i_0])));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] = (min(var_9, 1));
                                var_20 = (!((((min(2496, (arr_9 [i_2] [i_4]))) | ((var_14 ? (arr_2 [i_0]) : (arr_9 [i_2] [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (max((~var_13), (min(var_2, (((var_10 ? 42394 : var_7)))))));
    #pragma endscop
}
