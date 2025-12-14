/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_4));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, ((((((1 ? 268435328 : 0))) ? (arr_4 [i_1]) : (arr_4 [3]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_13 = arr_10 [i_1] [18];
                                var_14 = (max(var_14, (max((arr_4 [i_0]), (max((min((arr_3 [i_0 + 1] [i_0 + 1]), (arr_6 [5] [15]))), (((arr_3 [i_0] [i_1]) ? (arr_12 [i_3 - 2]) : (arr_1 [i_4] [1])))))))));
                                arr_14 [i_4] [i_2] = ((((-((min((arr_5 [i_4]), (arr_13 [i_4 + 2] [i_2] [i_2] [i_2] [i_0])))))) <= (arr_9 [i_0 - 2])));
                            }
                        }
                    }
                    arr_15 [i_2] [i_1] [7] [i_2] = ((63 ? 9223372036854775807 : 4294967295));
                }
            }
        }
    }
    var_15 = (~((((((var_0 ? var_6 : var_10))) || (((var_3 ? var_8 : var_5)))))));
    var_16 |= (((~var_4) ? var_8 : (((((~60) + 2147483647)) << (((var_6 << var_2) - 104886))))));
    var_17 = ((~(((-127 - 1) - -2147483646))));
    #pragma endscop
}
