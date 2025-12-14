/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((min((254526309 <= 109), (max(var_11, var_14)))), ((max(var_14, var_15)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = ((var_9 ? (((((arr_2 [i_0]) != (arr_1 [i_1] [i_0]))))) : ((((min(var_15, (arr_4 [i_1] [i_0] [i_0])))) ? (arr_5 [i_1]) : var_4))));
                var_19 += (min(((var_5 % (((254526325 >> (((arr_1 [i_0] [i_1]) - 770422402))))))), (var_9 * 254526309)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    arr_13 [i_3] [i_3] [i_3] [i_2] &= (((((((arr_9 [i_3]) ? -254526309 : var_7)) + 2147483647)) >> (16103 - 16088)));
                    var_20 -= (var_11 > var_5);
                }
            }
        }
    }
    #pragma endscop
}
