/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((max(-76, 0))) == (var_13 / var_6))) ? var_2 : (((var_4 && var_12) ? -var_3 : var_14))));
    var_16 ^= ((min(-1, (min(91, 0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [2] = (((-127 - 1) > (((!(arr_3 [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, ((min((arr_0 [i_0]), ((~(arr_0 [i_0]))))))));
                            arr_9 [i_3] [i_3] [i_2] [i_3 - 1] [i_2] [i_2] = (((arr_2 [0] [i_1]) ? (((((arr_7 [i_0] [4] [i_0] [i_0] [i_0] [3]) >= (arr_1 [i_3]))) ? ((((arr_2 [i_2 - 1] [i_2 - 1]) > (arr_3 [7] [7])))) : ((((arr_3 [i_0] [4]) == -111))))) : ((-(27785 || var_6)))));
                            arr_10 [9] [i_1] [i_1 - 3] [i_2] = ((~(min(((65535 ? var_9 : (arr_8 [i_0] [9] [i_2] [i_3] [i_3] [i_2]))), ((~(arr_3 [i_0] [i_0])))))));
                        }
                    }
                }
                var_18 = (arr_7 [i_1] [i_1] [i_1] [i_1 + 1] [5] [i_1]);
                arr_11 [i_1 + 1] = (min(var_0, (!127)));
            }
        }
    }
    var_19 = (max(var_5, -47577));
    #pragma endscop
}
