/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_21 = (~-16);
                                var_22 = (arr_10 [i_0] [i_0] [i_2] [i_3 + 1] [i_4] [i_2]);
                                var_23 = ((((min((arr_7 [i_3]), ((127 ? var_10 : 26795))))) ? ((((max(29, 16624275354421463905))) ? -1809680495 : (arr_2 [i_3 - 1] [i_3 - 2]))) : var_12));
                                arr_13 [i_0] [i_1] [i_2] [i_3 + 1] [i_4] |= -0;
                            }
                        }
                    }
                    var_24 = var_11;
                    var_25 |= ((((((arr_11 [i_2] [i_2] [i_2] [i_2] [i_2]) ? var_3 : (arr_6 [i_0] [i_0] [i_0] [i_2])))) ^ ((523776 ? var_18 : 1099511627775))));
                    var_26 = (min(var_26, ((min(((-(var_8 != var_7))), (((var_8 > (arr_6 [i_2] [i_1] [i_1] [i_0])))))))));
                }
            }
        }
    }
    var_27 = ((-7 ? 21 : 0));
    #pragma endscop
}
