/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    var_20 = var_17;
                    var_21 = (max(var_21, (arr_6 [i_0 + 1] [i_2 + 2])));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_0 - 2] [i_0 - 2] [i_1] [i_0 - 2] = (arr_9 [i_3 + 2] [i_3 + 1] [i_3]);
                    arr_12 [i_0] [i_1] = (((arr_1 [i_0 - 1] [i_0 - 1]) < ((var_15 - (arr_9 [i_0] [i_1] [i_0])))));
                    arr_13 [16] = (-8 ? 88 : 12755);
                }
                arr_14 [i_0] [i_1] [i_0] = (((~79) ? ((510 ? 182 : 90)) : (arr_9 [i_0 - 2] [i_0 - 2] [i_0 + 2])));
                var_22 = (min(((min(448108800, 33891))), ((-(arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 1])))));
            }
        }
    }
    var_23 = (4096 ^ 384);
    #pragma endscop
}
