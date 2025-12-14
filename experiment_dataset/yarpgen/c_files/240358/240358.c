/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((~(((var_6 && (((var_0 ? 1048448 : 0)))))))))));
    var_14 = 4294967295;
    var_15 = ((20177 ? var_5 : 128890928223517769));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = 13518950295351432446;
                    var_17 += ((((var_12 ? ((1920 ? 536870911 : 17)) : -var_4)) ^ var_6));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 |= ((var_3 ? (((((0 ? 3701499352998369457 : 4077345952))) ? 65535 : var_9)) : (((!((min(48, 7316))))))));
                                var_19 = (max((((var_4 && (var_4 > var_8)))), ((((arr_5 [9] [i_1] [i_2]) ? (arr_4 [i_0] [i_1] [i_0]) : 0)))));
                                var_20 = (arr_11 [i_3] [i_3] [i_3] [1] [i_3]);
                            }
                        }
                    }
                    var_21 = (min((~3072), (var_4 / -var_6)));
                    var_22 = (min(((((arr_1 [i_0 + 1] [i_2]) < (arr_10 [i_1] [i_1] [i_2] [i_0 + 1] [2])))), -1921));
                }
            }
        }
    }
    #pragma endscop
}
