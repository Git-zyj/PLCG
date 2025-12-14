/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~(min(var_18, var_13)));
    var_21 = (max(var_21, var_8));
    var_22 = var_8;
    var_23 += ((7105992370209012027 ? (((min(var_16, -1)))) : (max((((var_0 ? 1919495113 : 63))), (min(var_2, var_19))))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_24 = ((~(min(-85, (arr_0 [i_0 + 1] [i_0 + 1])))));
        var_25 = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_7 [i_1] [i_0] [i_0] = ((max(-1467722261, 3365744008)));
            var_26 = -1043657695;
            var_27 &= (!-5);
            arr_8 [13] [i_0] = (min(4277341145, 4294967294));
            var_28 = (((arr_3 [i_0] [i_1]) - ((((arr_5 [i_0] [i_1]) && 0)))));
        }
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            var_29 = (((((((max((arr_11 [i_0]), (arr_3 [0] [0]))))) < (min(var_18, 626677260774734030)))) ? (((max(7, 13)))) : (max(1602811808, ((((arr_4 [i_0] [i_0]) * (arr_11 [i_0]))))))));
            arr_12 [i_0 - 1] [i_0 - 1] [i_0] = ((+((~(max((arr_10 [i_0]), -888209985))))));
            var_30 -= (min(var_7, (min(((-(arr_2 [18]))), ((min(61387, 7)))))));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
        {
            arr_16 [i_0] = (min((min((arr_3 [i_0 - 1] [i_0 + 2]), 4294967295)), (((441890361 ? 2147483618 : -24)))));
            var_31 = (min(var_31, 17626167));
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
        {
            arr_19 [i_0] [i_4] = 8455;
            arr_20 [i_0] = ((124 ? 4294967295 : 8191));
            arr_21 [i_0] = (!15);
        }
    }
    #pragma endscop
}
