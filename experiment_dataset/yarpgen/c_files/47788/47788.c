/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((~((var_9 ? var_2 : 58881))))) ? var_3 : ((((1220534 > (((1002991093 ? var_9 : 7)))))))));
                var_12 |= (((((arr_0 [i_1 - 2]) <= (arr_0 [i_1 - 3]))) ? (arr_0 [i_1 + 1]) : (min(-17825, 983040))));
            }
        }
    }
    var_13 = var_5;
    var_14 = (((var_6 + 2147483647) << (((var_6 + 619308417) - 30))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_15 -= (((arr_3 [i_4] [i_3]) + (((~106) ? (arr_10 [i_2] [i_3]) : (arr_11 [i_4] [i_3] [i_4])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_16 ^= ((((~(arr_7 [i_6 - 1] [i_6 + 1]))) / ((max((arr_15 [i_2] [i_3] [i_5]), (arr_4 [i_2] [i_4] [i_6]))))));
                                var_17 *= (min((((!((max(var_0, 201)))))), (((arr_6 [i_6 - 1]) ? var_5 : (arr_6 [i_6 - 1])))));
                                var_18 = (((min(3998530082, (arr_8 [i_6 - 1] [i_6 - 1]))) & (((min(var_5, var_3))))));
                                var_19 = (max(var_19, 255));
                                var_20 = (min(var_20, var_0));
                            }
                        }
                    }
                    arr_20 [i_2] [i_4] [i_4] = (!18446744073709551615);
                    var_21 = (max(var_21, (arr_15 [i_2] [i_3] [i_4])));
                }
            }
        }
    }
    #pragma endscop
}
