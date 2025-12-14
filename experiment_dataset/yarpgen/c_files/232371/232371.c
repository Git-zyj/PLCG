/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((!140737488355320) ? ((((min(var_7, var_3))) ? var_9 : (var_0 >= var_2))) : var_1));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (min((min(var_9, (var_8 || var_5))), (min(-var_1, var_4))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 = var_4;
                    arr_7 [i_2] = (((min((var_2 - var_1), ((min(var_3, var_5))))) * ((((var_2 < (((var_0 ? var_3 : var_1)))))))));
                    arr_8 [i_0] [i_1] [10] = ((((var_4 ? var_6 : var_1)) << (((var_0 | var_1) - 7826199648599238496))));
                    var_12 ^= (min(((((var_0 || var_7) - var_9))), var_3));
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        var_13 = (min((var_3 / var_2), (min(18446744073709551596, 20))));
        arr_12 [i_3] = -var_6;
        /* LoopNest 3 */
        for (int i_4 = 4; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    {
                        arr_21 [i_5] = (min(19, 18446744073709551595));
                        arr_22 [i_5] = (min(var_2, ((((var_0 << (var_6 - 20130))) | var_7))));
                    }
                }
            }
        }
    }
    var_14 = (min(var_14, var_5));
    var_15 = (min(((((((var_8 ? var_2 : var_7))) ? var_8 : var_1))), ((min(var_7, var_5)))));
    #pragma endscop
}
