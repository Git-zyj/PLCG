/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 += (((5872226419331518148 > (!var_4))));
        var_14 = (max((((arr_0 [i_0]) ? (arr_1 [i_0]) : var_2)), ((((arr_2 [i_0]) % -1688862574)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (((((-(arr_0 [i_0]))) >= ((((arr_6 [16]) != (!var_5)))))))));
                    arr_8 [i_0] [i_1] [i_2] = ((min((arr_3 [i_2] [i_1] [0]), (arr_3 [i_0] [i_1] [i_2]))) > (arr_3 [i_0] [i_1] [i_2]));
                    var_16 = ((-(12574517654378033465 > 3693)));
                    var_17 = var_2;
                }
            }
        }
    }
    var_18 = var_3;
    var_19 = (((((((max(var_2, var_7))) * 1))) ? var_3 : ((~((var_10 ? 9223372036854775790 : var_12))))));
    var_20 -= ((((((1 ? 9223372036854775791 : -10494)) << (var_9 - 272559965)))) || var_11);
    #pragma endscop
}
