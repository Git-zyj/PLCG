/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] = (var_2 > 183454159);
                var_16 = (min((arr_4 [i_1 - 2] [i_0]), ((max((arr_4 [i_1 + 1] [i_1 + 1]), (arr_6 [i_1 + 2] [i_1 + 2] [i_1 - 3]))))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    arr_11 [i_0] [i_0] [i_1] [i_0] = (arr_6 [i_1 - 1] [i_2 + 1] [i_2 + 1]);

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_15 [i_1 + 2] [i_1 - 3] [i_2 + 2] [1] = var_3;
                        var_17 = (((arr_3 [i_0]) ? (arr_2 [i_1 - 3] [i_2]) : (arr_14 [i_1 + 3] [i_1])));
                    }
                    arr_16 [i_1] = (((arr_0 [i_0] [i_2 - 2]) ? (((var_7 ? var_10 : (arr_5 [1])))) : ((var_8 + (arr_1 [1] [1])))));
                    arr_17 [i_0] [i_0] [i_1] = (((!(arr_14 [i_0] [i_0]))));
                }
                arr_18 [i_0] = (((183454184 > 1) ? ((166 ? 63 : 837745393)) : (arr_14 [i_1 + 3] [i_1 + 3])));
            }
        }
    }
    var_18 = (((!-7123014240259124542) ? (min(-4111513136, ((var_13 ? var_11 : -837745393)))) : ((((var_7 > var_13) ? var_5 : var_1)))));
    var_19 = ((((min(var_10, (max(8396680816458460317, 8396680816458460317))))) || 183454162));
    var_20 -= ((var_7 ? 24263 : var_13));
    var_21 += var_7;
    #pragma endscop
}
