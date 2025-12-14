/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        var_17 += (-((var_1 | (max((-127 - 1), var_5)))));
                        var_18 = (min(var_18, var_7));
                        arr_12 [i_0] [i_0] [i_3] [1] [i_0] |= (min(((((arr_4 [i_1 + 1]) <= 901078128))), (arr_4 [i_1 + 1])));
                        var_19 += (((((!var_3) && (!var_15))) ? (((min((arr_2 [i_0 + 2] [i_0 + 2]), var_10)))) : var_14));
                        var_20 = (max(var_20, ((min(((~(arr_6 [i_3 - 1] [i_3 - 2]))), (min((~-22020), var_13)))))));
                    }
                    var_21 += var_2;
                    var_22 = (arr_2 [i_0] [i_1 + 1]);
                    arr_13 [i_2] [i_0] [i_1] [i_2] = (min(((((arr_7 [i_1 + 1] [i_2] [1]) / (arr_7 [i_1 - 1] [i_2] [i_1])))), var_7));

                    for (int i_4 = 3; i_4 < 15;i_4 += 1)
                    {
                        var_23 = (max(var_23, 1));
                        var_24 = (((((-(1909 | 118)))) >= (arr_8 [i_2] [i_4])));
                        var_25 -= var_0;
                    }
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        var_26 = (max(var_26, ((min(((min(((max(36646, 1))), var_9))), ((((1579363818440856411 ? (arr_8 [12] [12]) : -22020)) + var_11)))))));

                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            arr_23 [i_0 - 1] [i_6] [i_0] |= var_11;
                            var_27 = ((~(var_15 >= 31)));
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            arr_27 [i_0] [i_0] [i_2] [i_5] [i_2] [i_2] = (((-(arr_17 [i_0] [12] [12] [i_0] [i_0]))));
                            arr_28 [1] [i_2] [i_2] [i_5] [i_7] = (min((!1073741822), (min((arr_7 [i_1 + 1] [i_2] [i_5 - 1]), 29156))));
                            var_28 = (1 | 57);
                            var_29 -= (1565677028 <= -1);
                        }
                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            var_30 |= (arr_10 [12] [12]);
                            arr_33 [i_2] [i_5] [i_1] [i_2] [i_1] [i_1 - 1] [i_2] = ((!((min((arr_26 [i_0] [i_1] [i_2] [i_5] [i_2]), (!13610))))));
                        }
                        arr_34 [i_2] [i_1] = ((-(max(-13611, (max(240, (arr_0 [i_0])))))));
                        arr_35 [i_2] [i_2] [i_2] [i_2] = ((min(32768, 32777)));
                    }
                }
            }
        }
    }
    var_31 = (max(var_31, ((0 << (((~252) + 268))))));
    #pragma endscop
}
