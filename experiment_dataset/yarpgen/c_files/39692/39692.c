/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((((var_7 ? var_11 : var_6))) || (((79 ? 79 : 36674)))))) >> ((2508719483 * (0 >= var_4)))));
    var_19 = (((((((((var_9 ? 823389595 : 87))) || var_16)))) - (min((var_4 % var_5), (~25472)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = ((((((arr_4 [i_0 - 1]) && var_4))) ^ ((((arr_6 [i_0 + 1] [i_0 + 1] [i_0 - 1]) < var_13)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_21 = ((var_2 * ((((((arr_6 [i_0] [i_2] [i_3 - 1]) / (arr_4 [i_0])))) * ((17575006175232 * (arr_9 [i_0 + 1])))))));
                            var_22 -= ((((((((arr_10 [14]) & -351079228)) & (((((arr_1 [i_3 + 2]) == (arr_4 [i_0])))))))) ? ((max(7245, -110))) : (((-25473 ^ -13) >> (31244 >= -6003237363201805995)))));
                            var_23 = ((~(((((min((arr_7 [0] [i_1] [i_1]), var_17)))) % var_12))));
                        }
                    }
                }
            }
        }
    }
    var_24 = var_16;
    var_25 = ((((~(-109 < 148)))) ? (~var_15) : (((((min(var_5, 549513262))) ? var_6 : (var_10 >= var_16)))));
    #pragma endscop
}
