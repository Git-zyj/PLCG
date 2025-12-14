/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = max((((var_7 ? var_7 : 937130088))), ((((max(126, 13362456958363250813))) ? (max(var_6, 45801)) : (((229376 ? 1 : -27))))));
        arr_3 [i_0] = ((min(var_9, (min(var_9, 9223372036854775807)))));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_14 = ((!(!255)));
        var_15 = min(1, 4602678819172646912);
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_15 [i_2] [i_2] [i_2] [i_2] = (((((((arr_11 [i_4]) ? var_4 : 9223372036854775788))) ? ((1630932660 ? 45802 : 3100960002215392270)) : (((var_13 ? (arr_13 [i_2] [i_2] [i_2] [i_2]) : var_10))))));
                            var_16 = (min(var_16, (((var_13 ? ((((min((arr_11 [i_5]), (arr_13 [i_2] [i_3] [i_2] [i_5])))) ? ((~(arr_9 [i_2]))) : (((arr_11 [i_4]) ? (arr_10 [i_3] [i_4] [i_5]) : (arr_9 [i_5]))))) : ((((min((arr_7 [12]), (arr_8 [0] [i_4] [0])))))))))));
                        }
                    }
                }
                arr_16 [i_2] [i_2] = (((((~((2524864138402170335 ? var_12 : var_7))))) ? (min(3100960002215392256, 124)) : ((((!((max(15, 3067355948)))))))));
            }
        }
    }
    #pragma endscop
}
