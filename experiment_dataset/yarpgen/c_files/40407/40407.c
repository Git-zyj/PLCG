/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_11;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = ((((((-112 + 2147483647) << ((((max(-108, (arr_2 [16] [i_0])))) - 65428))))) ? ((max(117, 244))) : (((((arr_3 [i_0 + 1] [i_0]) + 2147483647)) >> (!-237859875)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_16 += ((((max(32767, (max(1019, -32))))) ? (((!(((17555 % (arr_3 [i_2] [i_2]))))))) : -4642));
                            arr_11 [i_0] [i_2] [i_1] [i_0] = ((127 ? ((~((0 ? 33189 : 4705025689386126337)))) : -64));
                            var_17 = (arr_2 [i_3] [15]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_18 = (((max(var_10, var_6)) - (arr_2 [i_5] [15])));
                                var_19 = (max(var_19, (arr_18 [i_0] [i_4] [i_0 - 2] [18] [i_0])));
                                var_20 = (max(var_20, ((max((arr_0 [i_1 + 2]), (max((arr_0 [i_1 + 1]), (arr_0 [i_1 + 3]))))))));
                                arr_19 [i_4] [i_0] [9] [1] [18] = -9201070496950453070;
                            }
                        }
                    }
                }
                var_21 = (arr_17 [17] [i_0] [10] [1] [i_0]);
            }
        }
    }
    var_22 = ((var_10 ? var_3 : var_4));
    #pragma endscop
}
