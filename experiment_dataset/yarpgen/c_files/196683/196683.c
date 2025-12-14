/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (108219762607551532 >> 5);
    var_21 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_14 [i_3] [i_3] [i_3] [i_0] = (max(-4460572717961740445, (max(-var_6, (var_12 + var_16)))));
                            arr_15 [i_3] [i_3] = (min((((~((min((arr_8 [i_3] [i_2 + 2] [i_1] [i_0]), var_18)))))), ((((max(var_1, (arr_9 [i_0])))) ? (~4460572717961740451) : (arr_13 [8] [i_2 + 1] [i_2 - 1] [i_2 + 1] [8] [i_0])))));
                            var_22 = var_14;
                            arr_16 [i_1] &= ((var_16 ? (((63417 ? var_0 : var_4))) : (((-((min(var_0, var_1))))))));
                            arr_17 [i_3] [i_3] = ((~(!-var_13)));
                        }
                    }
                }
                var_23 = ((var_10 - (((((arr_0 [i_0]) < (arr_5 [i_0])))))));
                var_24 = (min(var_24, ((((((var_11 ? (((var_8 < (arr_1 [i_0])))) : var_13))) ? ((((!(arr_2 [i_1] [i_0]))))) : (((arr_5 [i_0]) ? ((var_19 ? 4460572717961740445 : var_13)) : (((-(arr_5 [i_0])))))))))));
            }
        }
    }
    var_25 = (min(1048574, (var_14 * var_7)));
    #pragma endscop
}
