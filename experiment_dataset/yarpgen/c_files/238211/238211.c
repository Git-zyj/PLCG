/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    var_16 = (min(var_16, (((~((var_0 ? var_12 : var_5)))))));
    var_17 = 3806394782;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_18 = (max(var_18, (((~(arr_0 [i_0 - 1]))))));
                    var_19 = (max(var_19, ((((var_8 ? var_13 : (arr_8 [i_0])))))));
                    var_20 = (488572515 - 488572514);
                }
                arr_10 [i_1] = (((arr_4 [i_1 + 1]) ? (((((((arr_2 [i_0]) ? (arr_7 [i_0 + 1] [i_1 - 1]) : (arr_7 [i_0] [12])))) ? 12855 : (((1 >> (1125898833100800 - 1125898833100786))))))) : ((~(arr_7 [i_0] [15])))));
                var_21 = (min(var_21, (arr_1 [i_1 - 1] [i_0 - 2])));
            }
        }
    }
    #pragma endscop
}
