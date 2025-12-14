/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_9 ? ((((1 << (96 - 78))))) : var_4));
    var_15 |= var_3;
    var_16 = ((((((min(1, 20)) + var_2))) == ((-1 ? (1 * 3502889860548312765) : (((0 ? 4294967274 : -26391)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = ((30 / 1) | ((3402843561 ? 892123746 : -13)));
                                var_18 = (max(var_18, ((max(26415, 0)))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_4] = (((((((arr_5 [3] [i_1] [i_1] [i_1]) ? (arr_5 [i_0] [i_1] [i_2] [i_4]) : 68719476735)) + 9223372036854775807)) << (((((arr_5 [i_4] [i_3] [1] [i_0]) + 1869013377)) - 51))));
                            }
                        }
                    }
                }
                var_19 = (max(var_19, 3));
                /* LoopNest 3 */
                for (int i_5 = 3; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_20 = 1;
                                var_21 = (max(var_21, (((((1930825123727592088 >> (((((arr_8 [i_0] [i_1]) << 1)) - 280)))) | (((-1 ? 31 : 892123736))))))));
                                var_22 = ((((arr_23 [i_7] [i_7 + 3] [i_7] [i_7] [1]) ? (arr_23 [i_7 + 1] [i_7 + 1] [i_7] [i_7] [6]) : 11)));
                                var_23 = (max(var_23, ((((((3020204464 ? 252 : (-127 - 1)))) ? ((min(20003, (arr_19 [i_0] [i_1] [2] [i_6] [i_0])))) : 14)))));
                                var_24 = 15265909373443870001;
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_10;
    #pragma endscop
}
