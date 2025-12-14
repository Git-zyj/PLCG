/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_11 ? ((min(((var_10 ? var_12 : 1094995929)), ((min(var_10, var_6)))))) : -12192));
    var_18 = (((max(var_10, var_7))) ? (~12205) : (((~8589803520) ? var_1 : ((max(1, 58130))))));
    var_19 |= var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_12 [0] [i_1] [9] [i_1] [i_0] = (max(((!((((arr_8 [i_0]) ? (arr_1 [i_0]) : (arr_9 [i_0])))))), ((!(((var_14 ? 1 : (arr_9 [i_0]))))))));

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_20 = ((((65535 ? -6922304413032039620 : (arr_3 [i_0])))));
                            var_21 = (((arr_5 [i_1] [i_1] [i_1 + 2]) && (arr_5 [i_1] [i_1 + 2] [i_1 + 1])));
                            var_22 = (arr_4 [i_0]);
                            var_23 += -99;
                        }
                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            var_24 &= (arr_10 [i_0] [i_3] [i_3] [i_5]);
                            arr_18 [i_0] [i_0] [i_3] [i_0] [i_0] &= (!((min((arr_17 [i_0] [i_1] [i_1 + 3] [i_5] [i_5 - 1] [i_5 + 1]), (arr_17 [4] [i_1] [i_1 + 3] [i_2] [i_5 - 1] [i_5 + 1])))));
                            var_25 = max((((arr_1 [i_3]) ^ (arr_1 [i_0]))), ((min(-122, var_2))));
                            arr_19 [16] [i_1] [i_2] [i_2] [16] [i_0] [i_5] = 8589803516;
                        }
                        for (int i_6 = 2; i_6 < 15;i_6 += 1)
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((max(((119 ? (arr_17 [i_6] [i_1] [i_2] [i_3] [i_6] [i_3]) : 17493917686882006141)), -83))) ? 61846 : (min(var_0, (((arr_23 [i_0] [i_2] [i_2] [i_0] [i_0]) / (arr_4 [i_0])))))));
                            arr_25 [i_0] [i_0] [16] [i_2] [i_3] [16] = (min((arr_6 [i_0] [i_0] [i_0] [i_6 - 2]), (min((arr_6 [i_0] [i_1 + 2] [i_0] [i_6 + 3]), 2057256783))));
                        }
                        arr_26 [i_0] = 1;
                        arr_27 [i_3] [i_1] [i_1 + 1] [i_1] |= var_0;
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = 130;
                    }
                }
            }
        }
        arr_29 [i_0] = (((3856986720 ? 3923619270481797717 : 40201)));
        var_26 = (min(var_26, (((((min(-127, (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? 1 : (((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
        var_27 = ((-(((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (min(-25, (arr_9 [i_0]))) : ((17493917686882006138 ? 441185378061160909 : (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    #pragma endscop
}
