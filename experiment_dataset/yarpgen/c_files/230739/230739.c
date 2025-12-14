/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_11 - (((var_5 - 0) ? 0 : (var_17 - var_19)))));
    var_21 = ((4294967293 ? ((min((var_10 - 3), 0))) : ((((var_15 ? var_12 : var_16)) - var_6))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_11 [14] [9] [i_0] [i_0] = ((((min(4294967288, 4294967290))) ? var_13 : ((var_13 ? (arr_7 [i_0]) : var_12))));
                    var_22 = (max(var_22, (((((((4294967267 ? 18446744073709551615 : var_13)) ^ 4294967288)) > (min(((var_19 ? var_12 : var_9)), var_13)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                arr_18 [1] [1] = ((max(1997049449, var_12)));
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            var_23 = (min((((~var_15) ? var_17 : ((((-5765 + 2147483647) << (var_10 - 166)))))), 4294967295));
                            var_24 = (159 <= var_19);
                            arr_23 [i_3] [i_3] [i_3] [i_3] [2] = (((((((arr_13 [i_6]) ? var_17 : (arr_17 [i_6]))) * 0)) % (arr_20 [i_3])));
                            var_25 = (-54 - 1);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_29 [i_3] [1] [i_8] = (min(var_12, (((12 + var_9) % var_8))));
                            arr_30 [i_3] [i_3] [i_8] [i_3] [i_3] = ((~var_12) ? 0 : ((min(3, (((var_15 ? var_4 : var_3)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
