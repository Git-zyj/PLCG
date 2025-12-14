/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (~var_3)));
                var_18 = ((1125899906842623 != 1) ? ((~(7804566180335546254 & 1))) : ((2305843008676823040 ? 7804566180335546255 : 1)));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_19 = (max(var_19, (((var_7 > (arr_1 [i_1] [i_0]))))));
                    var_20 = (min(var_20, 1));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_21 = (max(var_21, (arr_0 [i_0] [i_0 + 2])));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_22 = ((((((arr_7 [i_0] [i_0 - 3]) ? var_11 : 1))) && ((((arr_1 [i_0 + 2] [i_0 - 1]) >> (arr_1 [i_0 + 1] [i_0 - 3]))))));
                        var_23 = (max(var_23, ((((arr_8 [7] [i_3] [i_1] [1]) ? (((max(1, (arr_4 [i_4] [1] [i_0]))) & var_6)) : ((1 ? 18445618173802708993 : 0)))))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_24 = ((((((((5893340882520868107 + (arr_0 [i_1] [i_5])))) ? (18445618173802708975 & 1) : (((-(arr_5 [i_5] [1] [1] [i_0]))))))) ? (arr_2 [i_0 - 3]) : ((((var_7 <= (min(var_2, var_4))))))));
                        var_25 += (min(((min(0, 1))), (max(15768325616218794321, 0))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        arr_16 [i_6] [i_6] = (1 <= var_2);
                        var_26 *= (var_3 ? (((1 || 9762521434612968059) - (max(var_6, 12553403191188683509)))) : var_12);
                        var_27 = (1 < 1125899906842637);
                    }
                    arr_17 [i_0 - 2] = ((1 ? (!var_5) : ((((1 / (arr_8 [i_3] [1] [i_3] [i_1]))) & (max(var_5, (arr_0 [6] [i_1])))))));
                }
            }
        }
    }
    var_28 = (min(((min(var_6, var_10))), var_11));
    #pragma endscop
}
