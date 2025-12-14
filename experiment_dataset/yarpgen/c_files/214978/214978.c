/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = 32;
        arr_4 [i_0] = ((75 || (((-77 ? var_13 : ((max(var_10, (arr_2 [i_0] [i_0])))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = var_5;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((max(((max(7, 60))), ((var_9 ? var_0 : var_4)))))));
                                var_20 = 32;
                                var_21 = (max(0, -33));
                                var_22 = (((((arr_10 [i_2] [i_2 + 1]) / 181)) << (((~var_2) + 1439))));
                                var_23 = var_9;
                            }
                        }
                    }
                    var_24 = max((arr_7 [i_2 + 1] [i_2] [i_2 + 1]), (~75));
                    var_25 = ((-(min((((arr_11 [i_0] [i_0] [i_1] [i_2] [i_2]) ? var_4 : var_10)), (4096 == var_0)))));
                    var_26 = (min(var_26, (((((!(arr_13 [2] [i_2 - 1] [i_2] [i_2 - 1] [2]))) ? var_1 : (max(var_9, var_12)))))));
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        arr_17 [i_5] = ((var_1 >= ((((arr_10 [i_5] [i_5]) & 6540232190584779259)))));
        arr_18 [i_5] = (max(((-1 ? (-127 - 1) : 7270997842040366911)), (arr_12 [i_5 + 1])));
        arr_19 [4] &= ((((min((min((arr_1 [i_5]), var_0)), (var_8 == var_11)))) ? ((((!(!var_6))))) : 1103479696));
    }
    var_27 = (max(var_27, var_9));
    #pragma endscop
}
