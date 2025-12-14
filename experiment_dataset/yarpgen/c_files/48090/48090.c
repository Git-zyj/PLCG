/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    var_19 = (var_2 & var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] = (max(((-var_15 ? 0 : 3662821878)), ((var_3 ? 0 : ((var_13 ? var_6 : var_9))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_20 = ((((max(65535, (!6672942150716536764)))) ? 15 : (((-1034019811 == 6672942150716536764) ? 170 : ((min(var_16, 4294967281)))))));
                            var_21 = (min(var_21, (((!(((!var_9) && 60)))))));
                            var_22 = (max(var_22, 6672942150716536764));
                            var_23 = (max(var_23, (((((((var_15 & (arr_11 [2])))) && (arr_12 [i_3 + 1] [0] [0] [i_3 - 2]))) ? (((arr_8 [6] [1] [i_1] [6]) & 9223372036854775807)) : var_17))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
