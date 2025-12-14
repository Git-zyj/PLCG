/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = ((~(((((var_17 ? -20648 : (arr_5 [i_0] [i_1 - 2] [i_2]))) == (!var_17))))));
                    arr_7 [i_0] [i_1] [i_0] = (max(var_14, (arr_2 [i_0])));
                    var_21 ^= (arr_4 [i_0]);
                }
            }
        }
    }
    var_22 += (min((!var_16), (((((min(1901068442, var_17))) || (var_15 != 580890155))))));
    var_23 = ((-var_6 >> ((((-((var_4 ? var_13 : 1763776631)))) + 26))));

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_11 [i_3] = (((var_13 || var_10) ? (((((var_1 >> (((arr_10 [i_3]) - 186))))) ? var_15 : ((var_14 ? (arr_10 [i_3]) : var_8)))) : (var_5 < 1)));
        var_24 = (max(var_24, (arr_10 [i_3])));
        arr_12 [i_3] = (max((min(var_14, (arr_9 [i_3]))), (((var_9 >= (arr_9 [i_3]))))));
        arr_13 [i_3] = (arr_10 [i_3]);
    }
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 22;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_30 [i_4] [i_4] [i_7] [i_7] [i_6 + 1] [i_5] = (((arr_23 [i_4] [i_4] [i_6 - 2] [i_6 + 1]) ? (min((min((arr_17 [i_5 - 1] [i_4]), 23134)), var_1)) : ((((!(((var_9 ? 42878 : 7)))))))));
                                var_25 = (arr_17 [i_5 + 1] [i_4]);
                            }
                        }
                    }
                    arr_31 [i_4] [i_5 + 1] = ((+(max((arr_17 [i_4 - 1] [i_5 - 2]), (arr_17 [i_4 + 1] [i_5 + 1])))));
                }
            }
        }
        arr_32 [i_4] = arr_25 [i_4] [i_4];
    }
    #pragma endscop
}
