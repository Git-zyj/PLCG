/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -1905534344;
    var_13 = (((((var_1 ? (!2081983601) : 16372754203738192921))) ? (((((((-109 ? var_5 : var_11))) < -6477494621857107725)))) : 2673290193487939338));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_14 = (((arr_1 [i_0] [i_0]) || ((((min((arr_1 [i_0] [i_0 - 2]), (arr_0 [i_0 + 2])))) || (var_8 * var_10)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = min((max(-56, (min(3221225472, (arr_0 [i_0]))))), (((((!(arr_3 [i_0 - 2] [i_1] [i_2]))) ? 1540185786 : 1543719225))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_16 = ((((((arr_1 [i_0 - 2] [i_0 - 2]) ? (arr_11 [i_4 + 3] [i_4 + 3] [i_4 + 3] [i_4 - 2] [7] [i_0 - 2]) : (arr_8 [i_0 + 1] [i_1] [i_4 + 1] [i_4] [0] [i_4])))) ? (min((arr_8 [i_0 - 1] [i_1] [i_4 + 2] [i_4 - 2] [3] [i_4]), -1189463401)) : ((((arr_11 [i_4] [i_4 - 1] [i_4 + 1] [i_4 + 1] [1] [i_0 + 2]) <= (arr_1 [i_0 + 2] [i_4 - 2]))))));
                                var_17 = ((~((-31985 ? var_5 : var_8))));
                                var_18 = (min(var_18, -2042369881));
                                var_19 ^= (max((((!(arr_5 [i_0] [i_0 + 1] [i_0])))), ((2042369880 ? -37 : 425150907))));
                            }
                        }
                    }
                    var_20 = (((arr_10 [i_1] [5] [5]) < (min(var_2, (arr_2 [i_0 - 2] [i_1] [i_2])))));
                }
            }
        }
        var_21 = (((((max((arr_10 [i_0] [i_0 - 2] [i_0]), 46517996)))) | ((var_1 ? (arr_9 [i_0 + 1]) : ((2751248070 ? -65 : -6701898792803165503))))));
        var_22 = (((((arr_6 [i_0] [i_0] [i_0] [i_0]) + (~32))) << (((((arr_0 [i_0 + 2]) ? 65524 : (arr_10 [i_0] [i_0] [6]))) - 65510))));
        var_23 = (((((-51 ? (-56 / 87) : ((56 ? (arr_10 [i_0] [i_0] [i_0]) : var_9))))) || ((max((max((arr_9 [i_0]), 7810340689708981751)), (arr_6 [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0 - 1]))))));
    }
    var_24 = (min(var_24, ((((((var_7 ? (var_3 > var_8) : ((85 ? var_4 : var_0))))) ? ((((((1 ? 38 : var_7))) ? 2582343565 : var_10))) : var_6)))));
    #pragma endscop
}
