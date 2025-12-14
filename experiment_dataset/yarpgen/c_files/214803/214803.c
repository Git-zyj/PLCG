/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((var_0 ? ((var_4 ? var_0 : var_10)) : 6040347505604226229)), var_15));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = ((~(min(62914560, (((arr_4 [i_0] [i_0]) ? -1 : var_14))))));
                    arr_8 [i_1] = var_1;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] = ((~((~(~0)))));
                                var_20 -= 853107280622337319;
                                var_21 = -var_1;
                            }
                        }
                    }
                    arr_15 [i_1] = ((((min((arr_0 [i_1 - 2]), 16718515122282051224))) ? (((((var_2 ? 1 : var_17))) ? ((13705874120142881899 ? (arr_5 [i_1] [i_1]) : (arr_12 [i_2]))) : -842756818)) : ((max(var_5, (~var_8))))));
                }
            }
        }
    }
    var_22 = var_13;
    var_23 &= (max(((~((-842756818 ? var_16 : var_17)))), -1));

    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        var_24 = ((((((arr_4 [i_5 + 1] [i_5 + 1]) ? (arr_13 [i_5 - 1] [i_5] [6] [i_5 - 1] [i_5]) : ((6040347505604226229 ? var_9 : var_6))))) ? var_15 : (((var_11 ? (~222) : ((var_6 ? (arr_11 [i_5] [i_5 - 1] [18] [i_5 + 1] [16] [i_5 + 1]) : (arr_9 [i_5] [i_5]))))))));
        arr_20 [i_5 - 1] = -7615148171513583519;
        var_25 -= ((((!(arr_17 [i_5 - 1] [i_5 - 1]))) ? ((((min(var_11, (arr_18 [i_5 + 1] [i_5])))) ? ((0 ? var_2 : var_6)) : var_15)) : (((arr_11 [i_5] [i_5] [i_5] [i_5 + 1] [1] [i_5 + 1]) ? (arr_16 [i_5 - 1] [i_5 - 1]) : (~var_2)))));
    }
    #pragma endscop
}
