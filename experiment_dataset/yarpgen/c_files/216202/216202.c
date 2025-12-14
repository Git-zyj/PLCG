/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((min(-12537, 2869458124053830496)) % (max(2869458124053830475, (min(2869458124053830496, 2576643664546077909))))));

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        arr_3 [i_0] [i_0] |= -2576643664546077922;
        arr_4 [i_0] = (max(228246348, 3049461474));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((-(arr_6 [i_1])));
        arr_8 [i_1] = var_5;
        arr_9 [4] &= ((100 ? var_10 : (arr_6 [14])));
        arr_10 [2] = 1010828308;
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        arr_24 [10] [i_3] [i_3] [10] = (min(((min(var_6, 1))), ((var_6 ? (arr_22 [i_3] [i_3 + 1] [i_3 - 1]) : (arr_22 [i_3] [i_3 + 1] [i_3 - 2])))));
                        arr_25 [i_3] [i_5] [i_3] [i_5] [i_3 - 1] [i_2] = ((+(((~var_5) ? (!2826044082) : (arr_19 [i_4] [i_2] [i_2])))));
                        arr_26 [i_2] [i_3 - 2] [4] [i_3] = -9044548513230782038;
                    }
                }
            }
            arr_27 [i_3] [i_3] = (var_0 / 65535);
            arr_28 [0] [0] [i_3] = (max(((min((-2147483647 - 1), -1519286745))), (((arr_5 [i_3] [i_3]) - -2576643664546077898))));
            arr_29 [i_2] [i_3] = var_2;
        }
        arr_30 [i_2] = ((((255 ? 30 : 3130441685))));
        arr_31 [10] &= -2576643664546077898;
        arr_32 [0] = ((~30) ? -var_8 : (min((-2576643664546077898 + var_3), var_3)));
        arr_33 [i_2] [12] = ((((max(11253054794150201977, -228246362))) ? ((max(-70, 35))) : 228246351));
    }
    var_14 = -2869458124053830509;
    #pragma endscop
}
