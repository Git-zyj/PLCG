/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((~var_3), (((1920 < ((min(85, var_13))))))));
    var_17 *= ((!(((min(var_12, 9517351802444139787))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_18 &= (arr_2 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = ((!((((arr_6 [i_0]) & (3826370115 >= var_2))))));
                    var_20 = (((~172) ? (min(13, ((1 ? var_6 : -44)))) : ((min(((var_8 ? var_9 : var_5)), (((var_3 ? var_2 : (arr_7 [10])))))))));
                    var_21 = var_14;
                    var_22 = ((min(var_0, (arr_2 [i_0]))));
                    var_23 = (((((-1 ? (((arr_5 [i_0] [i_0] [i_2]) ? 64 : 86)) : ((var_9 ? (arr_4 [14]) : var_8))))) ? (((arr_6 [i_0]) ? var_7 : (arr_6 [i_0]))) : var_5));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_24 = (((((arr_6 [6]) % var_0)) <= ((((((min(143, (arr_7 [i_3]))))) == (~var_15))))));
        var_25 = (min(255, var_6));
        var_26 += (max(((((((arr_9 [i_3] [19]) ? 85 : var_11))) ? (((min(43893, var_2)))) : (max(var_10, var_5)))), (((43 >> (1378100669 - 1378100664))))));
        var_27 = (((((max(var_2, var_2)))) * var_15));
    }
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        var_28 = (min(var_28, 20));
        var_29 = (max((~-46), (~0)));

        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            var_30 = 29297;
            var_31 &= (((((arr_11 [i_4 + 1]) ? (arr_11 [i_4 - 2]) : var_2)) + (((((arr_1 [12]) + 2147483647)) << (((var_13 + 6403) - 27))))));
        }
    }
    #pragma endscop
}
