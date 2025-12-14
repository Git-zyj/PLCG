/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 13577084189237369530;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_18 = (max(var_18, 13577084189237369530));
                        var_19 = (((arr_6 [i_3] [i_2]) >= (((((min(0, (arr_7 [i_0] [i_1 - 2])))) ? ((-(arr_8 [i_0] [i_1] [i_2]))) : 1)))));
                        var_20 = (arr_11 [i_0 + 2] [i_0 - 1] [i_0 + 2] [6] [i_1 - 2]);
                    }
                    for (int i_4 = 4; i_4 < 11;i_4 += 1)
                    {
                        var_21 = (min(var_21, ((((arr_11 [2] [i_1] [2] [i_0 - 1] [i_4]) ? (max(42590, 1196442943938406715)) : ((4869659884472182072 / (1 / 1))))))));
                        var_22 += ((~(arr_11 [i_4 + 2] [i_1] [i_1] [i_1] [i_0 - 1])));
                    }
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        var_23 = (arr_10 [i_0 + 1] [9] [i_2] [i_2]);
                        var_24 |= ((!(4869659884472182088 || 10079668174751858338)));
                        arr_18 [i_0 - 1] [i_0] [i_2] [i_0 - 1] = 425166085;
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_25 = (0 + ((-(arr_12 [2] [i_1 - 1]))));
                        var_26 -= 49;
                        var_27 = (1 != 596218060);
                    }
                    arr_22 [i_2] [i_0] [i_0] [i_0] = (arr_5 [i_0] [i_0 + 2]);
                    var_28 = ((~(!-814160979)));
                    arr_23 [i_0] [i_0] [i_0] = (min(var_15, var_6));
                }
            }
        }
    }
    var_29 &= var_12;
    #pragma endscop
}
