/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_1] [i_3] [i_1] = 1442310987;
                            var_14 += var_9;
                            arr_13 [i_0] [i_1] [i_1] [i_3] [5] [1] = ((((((max((arr_8 [i_3] [i_2] [i_1]), (arr_5 [i_0 + 1] [i_0 + 1])))) ? var_13 : ((var_0 ? var_2 : (arr_10 [i_3 + 1] [i_3] [i_2] [5] [i_0]))))) >> ((((((max(var_5, (arr_6 [0] [i_1])))) ? (~var_10) : ((((arr_9 [i_3 + 1] [i_2] [7] [i_0 - 1] [7]) > (arr_8 [i_0] [i_2] [i_2])))))) + 22))));
                        }
                    }
                }
                var_15 += (((arr_1 [i_0 + 1]) ? ((((max(14009089152547338741, -14365))) ? ((1764431869 ? 211 : -20)) : var_9)) : ((((max(var_7, var_4))) ? ((((arr_7 [i_0 + 1]) != (arr_8 [i_0 - 1] [16] [i_0 + 1])))) : ((max((arr_8 [10] [10] [16]), var_5)))))));
                var_16 = ((~(arr_9 [11] [3] [i_0 - 1] [i_1] [i_0 - 1])));
                arr_14 [i_0] [4] [i_0] |= (((((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 1]) : var_12)) & var_6));
            }
        }
    }
    var_17 = (min(var_17, (((((min((var_5 <= var_8), var_12))) ? ((((max(var_11, var_1))) ? var_1 : (19 | var_6))) : (((var_12 || (~var_8)))))))));
    var_18 |= ((((-9223372036854775807 - 1) ? (((var_13 ? var_12 : var_5))) : (min(var_10, var_2)))));
    #pragma endscop
}
