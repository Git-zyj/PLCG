/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (((((((var_0 ? var_3 : var_2)) ^ var_13))) ? (min(var_4, ((var_11 ? var_4 : var_11)))) : (((((var_11 ? var_0 : var_1))) ? var_6 : var_1))));
    var_16 |= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((+(((!((((arr_4 [i_0] [i_0] [i_1]) / (arr_1 [i_0] [9])))))))));
                arr_7 [i_0] [i_1] = ((((((!(arr_0 [i_0]))) & (arr_1 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] = max(((((arr_4 [i_0] [i_1] [i_2]) || (arr_13 [i_0] [i_0] [i_2] [i_0] [i_0] [i_2])))), (arr_2 [i_3] [i_0]));
                            arr_15 [i_0] [11] = ((min((arr_5 [i_0] [i_3 - 3] [i_2]), (arr_8 [i_0] [i_3 + 1] [i_3 - 2] [i_3 - 2]))));
                            var_17 = (min(var_17, ((max(((!((((arr_10 [i_0] [i_1] [i_2] [i_1]) ? (arr_4 [i_0] [i_0] [i_2]) : (arr_0 [i_0])))))), (arr_3 [i_2] [i_3]))))));
                        }
                    }
                }
                var_18 = ((-1430805065 ? (arr_1 [i_0] [i_1]) : (min(-703492119459158772, 61740))));
            }
        }
    }
    var_19 = (((((var_11 ? var_9 : var_12))) ? var_1 : ((1 ? 98 : 0))));
    #pragma endscop
}
