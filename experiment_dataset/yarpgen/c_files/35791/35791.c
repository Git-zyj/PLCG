/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_1 ? (((18446744073709551615 ? -1151532095 : var_9))) : (0 / var_1)))) ? ((max(((105 ? var_3 : var_9)), var_2))) : (max((min(0, var_5)), var_7))));
    var_14 = (min(var_14, 48633));
    var_15 = (~30);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (arr_3 [i_0 + 1] [i_0 + 1]);
                arr_4 [i_1 + 2] [i_1] [2] = ((((min(var_5, (arr_1 [i_0 - 1])))) == (((arr_1 [i_0 + 2]) ^ var_8))));
                var_17 = (!1055531162664960);
                var_18 = (-32767 & 133693440);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((((((arr_6 [i_3 + 1]) ? (arr_6 [i_3 + 1]) : 4294967295))) ? (127 != 87) : (min(((0 ? var_5 : 536870911)), ((max(504, (-127 - 1)))))))))));
                                arr_19 [i_2] [i_2] = 0;
                                var_20 = var_10;
                            }
                        }
                    }
                }
                var_21 = (max(var_21, (((((~(min(var_12, (arr_15 [i_3 + 2]))))) | 4294967295)))));
            }
        }
    }
    #pragma endscop
}
