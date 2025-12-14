/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_11 = (arr_7 [i_0] [i_0] [22]);
                                arr_13 [i_3] [i_3] [1] [i_3] [i_0] [i_3] [i_1 + 1] = (min(var_0, ((((arr_4 [i_3 + 3] [i_2]) ? (arr_4 [i_2] [i_1]) : 21748)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_12 *= (((var_0 ? ((5506461754718797832 ? (arr_14 [i_0] [i_0] [i_0] [i_0]) : 12940282318990753798)) : (((~(arr_9 [i_5] [i_2] [i_1 - 1] [i_5])))))));
                                var_13 = (((((arr_0 [i_1 - 1]) ? (arr_9 [i_5 + 1] [1] [i_5] [i_5]) : var_10)) > (~var_4)));
                                var_14 = (((((1 ? (arr_5 [i_5 + 1] [i_1 + 2] [i_0]) : 34855))) ? (((arr_0 [i_5 - 2]) ? (arr_0 [i_5 + 1]) : (arr_12 [i_1 - 1] [i_1 + 1] [i_1] [i_0] [i_1 - 1]))) : ((((arr_5 [i_5 - 2] [i_1 - 1] [i_0]) ? var_3 : (arr_0 [i_5 + 1]))))));
                                var_15 = (min(((((arr_10 [i_1] [i_1] [i_2] [i_5 - 1]) ? (arr_10 [i_6] [i_1 - 1] [i_2] [i_5 - 1]) : 44974))), (min((arr_4 [i_0] [i_1]), (arr_7 [i_0] [i_1] [i_2])))));
                                var_16 = ((~((12940282318990753798 + (arr_12 [i_0] [i_2] [i_2] [i_0] [i_6])))));
                            }
                        }
                    }
                    var_17 = (min(var_17, ((max(((+(((arr_0 [i_1 + 1]) + 310564366)))), (-28620 + 224))))));
                    var_18 = ((var_9 ? (((~(arr_15 [i_1 + 2] [i_1 + 2] [12] [i_1 + 2] [i_1 + 2])))) : (max((arr_3 [i_1] [i_1 + 2] [i_0]), (arr_11 [i_1 + 2] [i_1 + 2] [i_0])))));
                }
            }
        }
    }
    var_19 = var_10;
    var_20 -= ((min(31, (min(var_10, var_6)))));
    var_21 = ((var_8 ? var_0 : (var_7 * var_7)));
    #pragma endscop
}
