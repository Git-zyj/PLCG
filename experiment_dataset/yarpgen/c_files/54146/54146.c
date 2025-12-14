/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_8 ? ((14748303210624962986 + (-8990 + -113))) : -var_13));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_20 = ((~(arr_3 [i_2] [i_1] [i_2])));
                        var_21 = (min(var_21, 8969));
                    }
                }
            }
        }
        var_22 = (((-8993 & var_1) == (~8959)));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_15 [13] = (arr_11 [i_4]);
        arr_16 [i_4] = ((~((~(max(2147483648, (arr_13 [i_4])))))));
    }
    var_23 = (max(var_23, 127));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    var_24 += (arr_18 [i_5] [i_5]);
                    arr_24 [i_5] [i_6] = var_15;
                    var_25 = (min(var_25, 18446744073709551615));
                    var_26 += 0;
                }
            }
        }
    }
    #pragma endscop
}
