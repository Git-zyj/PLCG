/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = var_5;

                /* vectorizable */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        var_19 += var_10;
                        var_20 |= ((((((arr_5 [2] [i_1 - 2] [i_3 - 1]) ? (arr_3 [i_0] [i_3]) : (arr_5 [0] [0] [0])))) ? var_12 : (var_11 / var_15)));
                        arr_11 [i_0 - 1] [i_0] [i_2] [i_2] = (i_0 % 2 == 0) ? (((var_15 << (((arr_7 [i_0]) - 97))))) : (((var_15 << (((((arr_7 [i_0]) - 97)) - 68)))));
                        arr_12 [i_0 - 1] [i_0] [4] [i_2] [i_3 - 2] [1] = ((150 ? var_13 : var_10));
                    }
                    var_21 &= var_5;
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_22 = (min(var_22, ((((177 ? var_9 : (arr_2 [i_0 + 1])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_23 -= min(((((min((arr_3 [i_0] [13]), 28138))) + ((min((arr_10 [i_0] [i_5] [i_0] [1] [i_6]), (-127 - 1)))))), ((-18598 ? 241 : -4637)));
                                arr_21 [i_6] [i_0] [i_4] [i_0] [i_0] = var_3;
                            }
                        }
                    }
                }
                var_24 = var_2;
                var_25 = (max(var_25, (((((min(((var_7 ? (arr_15 [12] [i_1] [i_1]) : -1432465255)), (arr_6 [i_1 + 2] [i_1 - 3] [i_1] [i_0 + 1])))) ? -1532379927 : (-1532379924 && 16689314262342259684))))));
                var_26 = (min(var_9, ((((max(var_6, var_0))) ? (min(157, (arr_1 [i_0]))) : (var_11 - 121)))));
            }
        }
    }
    var_27 &= ((123 >> (((((((min(var_14, var_4)))) ^ ((-1158453330 ? 12457551423773077585 : -1158453330)))) - 5989192649936474033))));
    #pragma endscop
}
