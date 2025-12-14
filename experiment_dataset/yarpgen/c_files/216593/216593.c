/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_11;
    var_19 = ((var_16 ? var_11 : (min(((max(var_13, var_4))), (min(var_10, var_12))))));
    var_20 = (max(var_20, (((var_3 ? (max((~var_14), (!var_7))) : ((((var_11 ? var_2 : var_11)))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_21 = arr_0 [i_0 + 1] [i_0 + 2];
                    arr_10 [i_0] [i_1] = -28124;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_22 = (min(var_22, ((max((arr_8 [17] [i_1] [i_0 - 1] [i_1]), (((((var_12 * (arr_2 [i_2] [i_1] [i_2])))) ? (!var_4) : (arr_1 [i_2 + 1] [i_2 - 2]))))))));
                        var_23 += 3993209585;
                        var_24 *= ((max((arr_3 [i_0 + 1]), (18446744073709551615 / 3573026159054813578))) == (((-(arr_12 [i_1] [i_1] [i_2] [i_3])))));
                    }
                }
            }
        }
    }
    var_25 ^= ((((0 + var_12) ? (max(var_14, var_14)) : (!var_14))) << (var_6 - 36167));
    #pragma endscop
}
