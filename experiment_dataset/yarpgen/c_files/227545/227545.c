/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max(var_4, (var_13 & var_6)))) ? var_5 : (min(var_2, var_11))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_9 [10] [i_0] = -var_15;
                        arr_10 [i_0] = ((max((max(var_6, (arr_4 [i_0]))), (arr_7 [2] [i_0] [i_1]))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] = var_10;
                        var_20 = (max(var_20, var_2));
                        arr_12 [i_0] [i_0] [i_0] = ((max((arr_5 [i_0] [i_1 - 2] [18]), var_13)));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] [12] [17] [i_0] = 1006632960;
                        var_21 += ((!((min(-var_7, (!var_9))))));
                    }
                    var_22 = (max(var_22, (((!((min(var_4, (arr_7 [i_1 - 1] [i_1] [i_1])))))))));
                    var_23 = ((!(arr_5 [i_0] [i_1] [13])));
                }
            }
        }
    }
    var_24 = (min((min((min(var_10, 1006632960)), var_13)), var_17));
    var_25 = (min(var_25, (((((max((min(var_13, 43)), var_10))) ? var_8 : var_16)))));
    #pragma endscop
}
