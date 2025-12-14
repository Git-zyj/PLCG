/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = (min((max(((((arr_3 [i_4]) & 9223372036854775807))), 1217298022241545488)), ((((((((min((-9223372036854775807 - 1), -590952006)) + 9223372036854775807)) + 9223372036854775807)) << ((((max(var_7, var_9))) - 1)))))));
                                arr_14 [i_3 - 1] [i_0] = (max((-9223372036854775807 - 1), (-9223372036854775807 - 1)));
                                var_13 |= (max((max(9223372036854775807, (-9223372036854775807 - 1))), ((max((arr_6 [i_0] [i_0]), (arr_5 [i_1] [i_0]))))));
                            }
                        }
                    }
                }
                var_14 = ((((-590952006 - (arr_1 [i_0] [i_0]))) <= -18418));
            }
        }
    }
    var_15 &= var_3;
    var_16 = var_4;
    #pragma endscop
}
