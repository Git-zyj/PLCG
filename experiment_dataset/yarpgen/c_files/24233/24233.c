/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((max((var_4 & var_8), ((min(var_2, var_9))))), 11434979730931628518));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_11 = ((254 ? 1348921461 : 11434979730931628518));
                    var_12 = var_0;
                    var_13 = (min(var_13, var_5));
                }
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    arr_10 [i_0] [i_0] [14] [i_0] = ((((((arr_0 [i_1 + 1] [i_1 - 2]) ? (arr_3 [i_3 + 1] [i_0] [i_1 + 1]) : (arr_3 [i_3 - 1] [i_0] [i_1 - 1])))) ? ((((var_9 || var_9) >> (((arr_0 [i_0] [i_3 - 1]) - 11663806018027740859))))) : (min((((arr_4 [i_0] [i_3 + 2]) ? (arr_2 [i_1] [i_1]) : var_6)), 0))));
                    var_14 += ((~(((max(var_6, var_1))))));
                    arr_11 [i_0] [i_0] [i_3] [i_3 + 1] = (arr_1 [i_3] [i_0]);
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_16 [i_5] [i_0] [i_0] [i_0] = var_7;
                                arr_17 [i_4] [i_0] [i_4] = ((-var_0 ? (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) * (var_7 == 2946045835))) : ((max((arr_14 [i_0] [i_4 - 1] [13] [i_5] [i_5]), (var_1 <= var_6))))));
                                var_15 += (max((!var_4), ((((((arr_14 [18] [i_1 - 1] [i_1] [i_1] [i_1]) >> var_7))) + (max(var_7, var_4))))));
                            }
                        }
                    }
                }
                arr_18 [i_0] [i_0] = ((((((((46 ? 0 : 11434979730931628518)) <= ((max(var_7, (arr_7 [i_1] [i_0] [i_0] [i_0])))))))) != (min((min(18446744073709551604, 1)), 0))));
            }
        }
    }
    var_16 = var_6;
    var_17 = (~var_6);
    var_18 |= ((var_5 ? 7011764342777923098 : ((((min(250, var_7))) ? (24 % 2) : (var_7 && var_7)))));
    #pragma endscop
}
