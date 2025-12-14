/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (max(((((var_7 || var_2) ? ((var_5 ? var_9 : var_1)) : 1343038976))), 4294967295));
    var_11 = var_6;
    var_12 = (((var_1 ? (var_2 > var_0) : (~18446744073709551603))));
    var_13 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, ((min(((var_5 ? (arr_7 [i_0 + 1] [i_4 - 1]) : var_6)), (((arr_7 [i_0 + 1] [i_4 + 3]) ? var_3 : (-2147483647 - 1))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= (((arr_12 [i_4 + 2] [i_0 - 1] [i_2] [i_3] [i_4] [i_1]) ? ((var_0 ? (var_3 & 14900235975680070679) : 5357544835139541455)) : ((((!(!var_0)))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] &= (max(18446744073709551592, 13));
                            }
                        }
                    }
                    var_15 = ((49152 % ((-(arr_5 [i_0] [i_1] [i_0])))));
                    var_16 += ((~(((arr_11 [i_0 - 3]) ^ (arr_11 [i_0 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
