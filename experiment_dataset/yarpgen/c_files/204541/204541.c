/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_11;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = (max(1, 4029316207));
                    arr_7 [i_1] [i_2] = ((((((arr_2 [i_0 - 1] [i_0 - 1]) != var_8))) != (((!(arr_1 [i_0 - 1] [i_0 - 1]))))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_21 = ((~(max(var_1, var_10))));
                        var_22 = 165;
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_14 [i_2] [i_4] [i_2] [i_0] &= (min((var_14 >= var_7), (min(154, 91))));
                        var_23 = 11723;
                        arr_15 [i_2] &= (96 ? ((~(arr_11 [i_0 - 1]))) : ((max((arr_11 [i_0 - 1]), (arr_11 [i_0 - 1])))));
                        var_24 |= (((~3) >= (((~63839) ? var_3 : (((((arr_3 [i_0]) != var_18))))))));
                    }
                    arr_16 [i_0 - 1] [8] [i_2] = var_6;
                }
            }
        }
    }
    var_25 = (((~var_13) ? (~130) : var_10));
    #pragma endscop
}
