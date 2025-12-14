/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_8, var_11));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (max((((arr_2 [i_0 - 2]) ? (((arr_5 [i_1]) & (arr_1 [2]))) : (arr_0 [i_0 - 2]))), (((!(arr_5 [i_0 + 4]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_11 [3] = 3863262578;
                            var_20 = ((((((((9693 / (arr_1 [i_1])))) ? (arr_7 [i_0 - 2] [i_1] [i_3 - 3]) : (arr_1 [i_3 + 2])))) ? ((var_14 ? ((max((arr_3 [i_2] [i_3]), (arr_10 [i_0 + 2] [i_0 + 3] [i_0 + 3] [i_0] [1])))) : var_16)) : 148));
                            var_21 = (min(var_21, (arr_0 [i_0 + 4])));
                        }
                    }
                }
            }
        }
    }
    var_22 += (var_12 * var_6);
    var_23 += (+((var_0 ? (~-1) : (!var_17))));
    #pragma endscop
}
