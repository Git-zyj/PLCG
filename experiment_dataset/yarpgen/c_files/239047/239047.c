/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_18 = (1774989032 ^ 7374728257345532967);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = (((~0) ^ (arr_3 [i_0] [i_1 + 1] [i_2 + 1])));
                    var_20 |= ((((-9223372036854775806 ? (arr_2 [i_1 + 1] [i_1] [i_1 - 3]) : (arr_4 [i_0 - 1] [i_1 + 2] [i_1 + 2]))) == (max(var_11, (arr_4 [i_0 + 1] [i_1 - 1] [i_1 - 2])))));
                    var_21 -= (arr_5 [1] [i_0 - 1] [i_1 + 1] [i_2 + 1]);
                }
            }
        }
        var_22 = (((((0 + ((var_6 ? var_17 : var_2))))) ? -50624 : (((arr_3 [18] [i_0 - 1] [i_0]) ^ -14899))));
        arr_6 [i_0] = (~7150066850266984067);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        arr_14 [i_5] [i_3] [i_3] [i_0] = (max((((((8803410454863532618 | (arr_3 [i_3] [i_4] [i_5])))) ? (~var_3) : ((var_12 ^ (-2147483647 - 1))))), var_6));
                        arr_15 [i_3] [i_3] [6] [6] [i_3] = (max(((-(arr_1 [i_0 + 2]))), ((max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1]))))));
                        arr_16 [6] [i_3] [i_4 - 2] [i_3] = (max((~var_14), var_3));
                    }
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
    {
        var_23 += ((((max(var_14, 11296677223442567551))) ? (((!((((-2147483647 - 1) ? var_17 : var_12)))))) : (((((9223372036854775805 ? 53406 : 9223372036854775805)) != (((var_17 ? (-2147483647 - 1) : var_0))))))));
        var_24 = (-2147483628 & var_11);
    }
    for (int i_7 = 1; i_7 < 17;i_7 += 1) /* same iter space */
    {
        var_25 = ((12145 - (arr_17 [12])));
        var_26 += (((((((max(-8803410454863532619, (arr_9 [10])))) ? (((arr_10 [i_7] [i_7]) - 7150066850266984069)) : ((max(var_4, var_12)))))) ? (arr_2 [i_7 + 2] [i_7] [i_7]) : (arr_9 [0])));
        var_27 = -8803410454863532618;
        var_28 *= ((!((max((arr_2 [i_7] [i_7 + 1] [i_7 - 1]), (arr_2 [i_7] [i_7 + 2] [i_7 + 1]))))));
    }

    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        var_29 = (min(var_29, ((max((arr_25 [i_8]), (((arr_24 [i_8] [9]) ? -96 : 53406)))))));
        var_30 = var_10;
    }
    #pragma endscop
}
