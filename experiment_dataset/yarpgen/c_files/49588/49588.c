/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = (min(((-((var_14 ? 2093298969099330458 : (arr_4 [i_0] [i_0] [i_0]))))), 67108848));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_17 = (((min(67108848, -1234504953)) < (((min((((arr_4 [i_0] [i_1] [i_3]) >= (arr_1 [3] [i_3]))), (((arr_6 [i_0] [i_1] [6] [6]) != (arr_0 [i_2])))))))));
                            var_18 = (min(var_18, (((-23327 ? 67108846 : 2843415163)))));
                        }
                    }
                }
                var_19 = 17206559324976825989;
            }
        }
    }
    var_20 = (min(var_20, (((var_12 >= ((max(var_8, ((var_9 ? var_1 : var_0))))))))));
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            {
                var_21 -= (((((~(max(65535, var_15))))) ? (((!((((arr_13 [i_4]) >> (var_2 - 1295839716))))))) : (arr_14 [i_5] [i_5] [i_5])));
                var_22 = var_7;
                var_23 = (((-(arr_9 [i_4 + 1] [i_4 + 1]))));
            }
        }
    }
    var_24 &= var_10;
    var_25 = var_7;
    #pragma endscop
}
