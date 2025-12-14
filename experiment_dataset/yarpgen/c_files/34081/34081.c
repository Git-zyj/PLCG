/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 += 15;
                var_19 = -40;

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_6 [i_2] [i_0] [i_2] [i_2] = (min(((-(arr_5 [i_1]))), ((min(var_1, (arr_0 [i_0]))))));
                    arr_7 [i_0] [i_0] [i_2] = (((arr_4 [i_0] [i_0] [i_0 + 1] [i_0]) ? (((!(arr_5 [i_0 - 2])))) : (arr_2 [i_0])));
                    var_20 *= 12769;
                    var_21 = ((((((arr_4 [i_1] [i_0] [i_2] [i_0 - 2]) + var_10))) ? var_15 : ((-(arr_4 [i_0] [i_1] [i_2] [i_0 - 2])))));
                    var_22 = var_0;
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    arr_11 [i_0] [i_1] [i_0] = (max(((-((((arr_8 [i_0] [i_1]) || var_14))))), (~2147483584)));
                    var_23 = (max(var_23, (((-(arr_8 [i_3] [i_3]))))));
                }
            }
        }
    }
    var_24 = ((~((var_3 + ((26 ? 158 : var_2))))));
    var_25 -= ((!(var_9 & 27726)));
    var_26 = (!var_4);
    #pragma endscop
}
