/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 |= (max(((min((arr_5 [i_0] [i_2]), 37283))), (max(24, 8750554033476654706))));
                        var_19 *= (min((((arr_8 [i_0] [i_1] [i_2] [i_1]) ? 343039774 : (arr_9 [i_0] [i_2]))), (arr_8 [i_0] [i_1] [i_2] [i_3])));
                    }
                    var_20 |= (arr_0 [i_0] [i_1]);

                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            arr_17 [i_0] [i_1] [1] [i_4] [7] = ((((arr_10 [i_4]) <= ((((arr_13 [6] [i_4]) > (arr_6 [i_4])))))));
                            var_21 += ((!(((((min(var_17, 231))) + (((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? 214 : (arr_3 [i_0] [i_1]))))))));
                        }
                        var_22 = (min(var_22, (arr_16 [i_4 - 1] [i_4] [i_4 - 1] [1] [i_4] [i_4])));

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_20 [i_4] [i_4] = (max((min((arr_6 [i_4 + 1]), (arr_6 [i_4 - 1]))), ((7101091533563219753 & (arr_6 [i_4 + 2])))));
                            arr_21 [i_4] [i_4] [i_1] [i_1] [i_4] [i_4 + 1] [i_1] = (-38887 ? (24 > 25) : (min((arr_16 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_6] [i_6]), (arr_18 [i_4 + 1] [i_4 + 1] [i_6] [i_4 + 1] [i_4] [i_6] [i_6]))));
                            arr_22 [i_4] [i_4] = (min((((2529325718768488361 - 24) >> (var_12 - 55050941))), ((((((var_4 >> (-94 + 115)))) ? ((91 % (arr_14 [i_1] [i_1] [i_4]))) : (arr_1 [i_2] [i_2]))))));
                        }
                        arr_23 [i_0] [i_4] [i_2] [i_4] = ((max(53182, 53182)));
                        var_23 &= (max(37752, 893575666));
                    }
                }
            }
        }
    }
    var_24 = (max(var_3, var_7));
    var_25 = var_9;
    var_26 = ((((var_7 ? var_14 : -7101091533563219753)) & (((((((85 ? var_4 : var_16))) != (min(12333, 2560090265765742582))))))));
    #pragma endscop
}
