/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((-(((arr_1 [i_0] [i_1]) ? (((arr_2 [i_1]) ? 1 : (arr_2 [i_1]))) : ((var_12 ? (arr_2 [i_1]) : var_3))))));
                var_14 = var_3;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 += 1;
                                var_16 = arr_13 [i_2];
                                var_17 = (max(var_17, ((((((((max((arr_1 [i_0] [i_3]), (arr_11 [i_0] [i_0] [10] [10] [11])))) ? ((min((arr_9 [i_0] [i_0] [i_2] [i_3] [i_2]), var_8))) : -1538438828))) ? ((115 ? (arr_10 [i_2] [i_1]) : -25988)) : ((var_10 ? (var_3 || -1538438836) : ((var_1 ? 1 : (arr_7 [1] [1] [2] [i_0]))))))))));
                                var_18 *= 1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (((((var_5 * (var_8 || var_6)))) ? 1 : (var_4 < var_7)));
    var_20 = 7;

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_17 [i_5] = (max((((1 < var_13) ? ((1 ? (arr_14 [i_5]) : var_7)) : (((arr_15 [i_5] [i_5]) ? var_5 : var_10)))), ((max((arr_14 [i_5]), (arr_16 [i_5]))))));
        var_21 += (!1538438827);
    }
    var_22 &= 1538438845;
    #pragma endscop
}
