/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((var_12 ? var_6 : var_10))), (((~var_12) ? ((max(var_7, var_12))) : ((var_7 ? 13573865679711293822 : var_1))))));
    var_14 ^= var_7;

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_15 = ((((max(((max((arr_0 [i_0]), (arr_0 [i_0 + 1])))), (~13573865679711293828)))) ? ((((!(arr_1 [i_0]))) ? ((((!(arr_1 [i_0]))))) : ((2097152 ? 205 : (arr_0 [i_0]))))) : (max((arr_0 [i_0 + 1]), (!22)))));
        var_16 = ((var_4 ? 2097152 : (((arr_1 [i_0]) & var_1))));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_17 = (((((-(arr_0 [i_1])))) ? ((var_12 + (arr_0 [i_1 + 1]))) : ((max((arr_0 [i_1 + 1]), (arr_0 [i_1 - 1]))))));
        var_18 = (max((min((arr_2 [i_1 + 1]), 192)), (arr_2 [i_1 - 1])));
        arr_4 [i_1] = ((-((max((arr_2 [i_1 + 1]), (arr_2 [i_1 - 1]))))));
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2 + 1] = (arr_6 [i_2]);

        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            var_19 = ((!((max(-15763, -2097153)))));
            arr_12 [i_2] = (arr_2 [3]);
        }
    }
    var_20 *= ((var_11 ? ((var_1 ? ((var_8 ? 4872878393998257788 : 1751664270)) : var_1)) : var_0));
    var_21 = (max((min(var_7, (max(var_9, 1)))), (((((var_11 ? var_2 : var_5)) == var_7)))));
    #pragma endscop
}
