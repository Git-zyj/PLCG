/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227464
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
                var_17 = (min(var_17, (arr_1 [i_0] [i_1])));
                var_18 = (min(var_18, (arr_0 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                var_19 ^= (((arr_10 [i_3 + 1] [1] [i_3] [i_3] [3] [5] [i_3]) ? ((-(arr_10 [i_3 + 3] [i_3] [i_3 + 1] [4] [i_3] [i_3 + 1] [i_3 + 1]))) : ((-(arr_10 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 3] [i_3] [i_3])))));
                                var_20 = (~-32);
                                arr_11 [i_0] [i_2] [i_2] [i_2] [i_2] [i_2] = ((-((((arr_6 [i_4] [i_3] [i_1]) < ((((arr_8 [i_4] [3] [4] [i_1] [i_0]) ? (arr_10 [i_0] [i_1] [i_2] [i_3 + 2] [i_3] [i_3] [i_4]) : (arr_8 [0] [0] [i_2] [i_1] [i_0])))))))));
                            }
                            var_21 = (min(var_21, (((((~(arr_8 [i_1] [i_3 - 1] [i_3 + 3] [i_3 - 1] [i_3])))) ? ((~(arr_8 [i_0] [i_3 - 1] [i_3 + 3] [i_3 - 1] [i_3]))) : (((arr_8 [i_1] [i_3 - 1] [i_3 + 3] [i_3 - 1] [i_3]) | (arr_7 [0] [i_3 - 1] [i_3 + 3] [i_3 - 1])))))));
                            var_22 = ((32 ? (((!(arr_8 [10] [10] [i_3 + 3] [i_3 + 3] [i_3 + 2])))) : (max((arr_9 [i_0] [i_0]), (arr_9 [i_0] [i_1])))));
                        }
                    }
                }
            }
        }
    }
    var_23 = ((!(((var_6 ? 3026393760 : var_6)))));
    var_24 = ((var_13 ? -var_3 : ((var_2 ? var_14 : (((var_10 ? var_4 : 52)))))));
    #pragma endscop
}
