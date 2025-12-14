/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((((max((36197 / 18), var_7))) >= ((-var_10 & ((var_13 ? var_12 : var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [9] [i_3] = ((((((((arr_4 [i_2] [i_3] [i_4]) + 2147483647)) >> (var_12 - 8189107010782339501)))) ? ((max(var_14, 29338))) : ((29339 ? 0 : 1))));
                                arr_15 [i_4] [i_3] [i_1] [i_2] [i_3] [4] = (((min(1124386522, var_8) / -var_0)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [3] [3] [3] [i_6] [i_6] = (18 == 29332);
                                var_18 = (((-19 > 126) ? (max(-var_3, ((min((-2147483647 - 1), (arr_5 [i_0])))))) : ((((((-99 ? 1829811009 : 116))) ? (max((arr_0 [i_1]), var_4)) : ((((arr_9 [i_0] [i_1] [i_2] [i_5] [i_6] [i_0]) * 147))))))));
                                arr_24 [7] [i_5] [i_5] = ((-((min(-111, 15)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_32 [i_0] [i_0] [i_0] [2] [i_0] = ((-((((max(6, 1))) % 11320))));
                                arr_33 [i_0] [i_0] [i_0] [i_2] [i_0] [1] [1] = ((~((~(-2147483647 - 1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
