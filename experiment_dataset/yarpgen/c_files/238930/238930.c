/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((((((max(var_4, var_3)) - ((var_15 ? var_18 : var_11))))) ? ((~(max(8841089766050817220, var_1)))) : ((((var_13 + 2147483647) >> (var_3 - 13802712381370102919))))))));
    var_20 = (((((var_15 == var_4) >= var_16)) ? ((var_18 ? (~-878994202) : ((var_11 ? var_14 : var_6)))) : var_1));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 = (arr_0 [i_0]);
        var_22 = var_14;
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_23 = (max(((((max(var_15, 3565550078471303998)) != (((max((arr_5 [i_1]), (arr_5 [i_1])))))))), -var_3));
        var_24 = ((~(((var_17 & var_13) ? (!var_8) : ((var_18 ? 16044844832673236037 : (arr_4 [i_1])))))));
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_25 = (max(var_25, (min(((((max(var_15, var_18))) ? (((arr_14 [i_1] [i_2] [12] [i_2]) * (arr_5 [i_1 + 2]))) : var_2)), (((arr_8 [i_1] [i_1 + 2] [i_1]) ? -1342104838 : ((var_14 ? var_17 : var_11))))))));
                        var_26 = (max(var_26, (((+(((arr_4 [i_1 + 2]) ? ((var_13 ? (arr_14 [i_1] [i_2] [8] [i_4]) : var_5)) : (((var_1 ? -1695019822 : var_6))))))))));
                        var_27 = -2401899241036315598;
                    }
                }
            }
        }
    }
    #pragma endscop
}
