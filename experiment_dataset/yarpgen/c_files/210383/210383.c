/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (min(var_17, ((((((65523 ? (arr_2 [i_0 - 2] [i_0 - 2]) : (arr_2 [i_0 - 2] [i_1])))) ? ((min(((((arr_3 [i_0] [i_1]) >= 183))), -1300507579))) : -var_13)))));
                var_18 -= ((6485564653126161261 << (148 - 86)));
                var_19 -= max((((arr_2 [i_0 - 2] [i_0 + 2]) ? (arr_2 [i_0] [i_1]) : (arr_2 [i_0 + 2] [i_0 + 2]))), 31);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_20 = (max(var_20, 119));
                                var_21 = (-((((var_15 ? var_1 : var_13)))));
                                var_22 = ((((((!1) ? (((-20596 && (arr_12 [i_2] [i_4] [i_4] [i_3])))) : var_13))) ? ((((!(!98))))) : (min(17, 5550628310177700224))));
                            }
                        }
                    }
                }
                var_23 = 4125793087359470448;
                var_24 = ((!(((var_13 ? 20595 : var_5)))));
                arr_18 [i_2] [i_3] [i_3] = ((((((var_11 ? var_16 : var_2)))) ? (arr_4 [i_2]) : ((var_15 ? ((20593 ? (arr_10 [i_2] [i_2] [i_2]) : -7235724859636357610)) : (((max((arr_6 [i_3] [i_3]), var_1))))))));
            }
        }
    }
    var_25 &= (((-(max(-20599, var_4)))));
    var_26 = (var_6 ? var_4 : ((((((-1 ? 65524 : 61493)) != var_3)))));
    #pragma endscop
}
