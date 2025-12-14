/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = var_2;
        var_20 = var_8;
        var_21 ^= ((!(~var_0)));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_22 = 237;

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_23 = 1;
            var_24 = 5162546403927955507;
            var_25 = (((((93 * (!var_1)))) | (((((-5162546403927955508 ? (arr_2 [i_1]) : (arr_3 [i_1] [i_2])))) | (min(5162546403927955528, (-9223372036854775807 - 1)))))));
            var_26 = (min((max(1328240348, -23164)), (((var_12 < ((var_12 ? (arr_2 [i_1]) : var_15)))))));
            arr_7 [i_1] [i_2] [i_2] &= ((1448455943 ? (((-63 ^ 25730) ? (arr_3 [i_2] [i_2]) : 5162546403927955536)) : (((1555771199 ? -6565137020883365655 : var_10)))));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_12 [i_1] [i_1] [i_1] = -var_3;
            var_27 = ((-(!50090)));
            var_28 = (~29711);
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_29 = ((((~(~var_5))) >= 3748500480880698964));
            var_30 |= 127;
        }
        arr_17 [i_1] = ((-(var_11 * -10)));
    }
    #pragma endscop
}
