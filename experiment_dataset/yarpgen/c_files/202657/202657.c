/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = 208;
                    var_19 = ((min(123, 31237)) % 8179);
                    arr_9 [1] [i_1] [4] [i_1] = ((!((((!var_6) / (~127))))));
                }
            }
        }
    }
    var_20 = var_1;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        arr_22 [i_3] = (min(((max((arr_16 [i_3] [i_4] [i_5]), 1))), (~var_17)));

                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            arr_26 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((((!((min(18446744073709551599, (arr_15 [i_7] [i_3] [i_3] [i_3])))))) ? (!var_2) : (((arr_13 [i_3] [i_7]) ? (arr_21 [i_3] [i_4] [i_4]) : 1))));
                            var_21 -= ((var_18 ^ ((1 ? (arr_15 [1] [i_4] [i_4] [i_4]) : (arr_14 [i_3] [i_3])))));
                            arr_27 [5] [i_3] [i_5] [i_3] [i_3] = 1;
                        }
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_22 = (~var_2);
                        var_23 = (((~((var_12 ? 1 : 1)))));
                        var_24 = ((((var_11 % (arr_28 [i_4] [i_4])))));
                        arr_30 [i_3] [i_3] [i_3] [i_8] = ((((max(-28, (arr_12 [i_8] [i_8])))) ? ((-(max(var_2, (arr_10 [i_3]))))) : (arr_21 [i_4] [19] [i_8])));
                    }
                    arr_31 [i_3] [i_3] = (arr_21 [i_4] [i_4] [i_3]);
                }
            }
        }
    }
    #pragma endscop
}
