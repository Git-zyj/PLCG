/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = (min(var_13, ((((((((min(var_3, var_0))) ? var_8 : var_2))) % ((var_5 ? 4294967295 : var_2)))))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_14 = (arr_1 [10]);
        var_15 = 127;
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_7 [i_1] = (((((~(arr_3 [i_1])))) ? (((arr_3 [i_1]) & (arr_3 [i_1]))) : (((min(-127, (-127 - 1)))))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_16 |= -118;
                        arr_14 [i_4] [i_1] [i_1] [4] = (min((arr_9 [i_1] [i_2] [i_3]), (~127)));
                        var_17 *= (min((((127 > 0) ? 0 : -118)), ((~(-127 - 1)))));
                        arr_15 [23] [i_3] [i_3] [i_1] [13] [i_3] = ((43121 ? 127 : -127));
                    }
                }
            }
        }
        var_18 = (min(var_18, ((min(127, (((!((min(0, var_6)))))))))));
        var_19 &= 2688217965;
    }
    var_20 = var_7;
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 21;i_8 += 1)
                    {
                        {
                            arr_25 [i_5] [3] [i_5] [i_5] [i_5] = (min((arr_18 [i_7]), 0));
                            arr_26 [i_5] [i_7 + 3] [i_5] = ((((((arr_2 [i_5] [i_5]) & (arr_12 [i_5] [i_8 - 1] [i_8 - 1] [i_7 + 2] [i_5 - 1])))) ? var_11 : (((~var_8) | ((min((arr_4 [i_5]), (arr_8 [i_5] [i_5] [i_7 + 1] [i_8]))))))));
                        }
                    }
                }
                var_21 = (min(var_0, (((arr_11 [i_5] [i_5 - 1] [i_6] [i_6] [i_5]) ^ ((5367077411662668768 % (arr_16 [i_5] [i_6])))))));
                arr_27 [i_5] [i_5] = ((((min(var_5, -2147483639) % -127))));
            }
        }
    }
    #pragma endscop
}
