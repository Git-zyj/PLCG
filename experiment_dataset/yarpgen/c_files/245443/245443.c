/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_10 *= (((((~(arr_2 [i_0 - 2] [i_0 - 3])))) ? ((((var_7 ? var_4 : var_6)))) : ((((var_0 + var_8) > (!117))))));
                    var_11 = (min(var_11, ((((arr_3 [13] [i_0]) + (((!(((var_3 ? (arr_5 [12] [i_1] [i_2] [i_1]) : (arr_3 [i_0] [i_0]))))))))))));
                    var_12 = ((var_7 ? -79 : -59));
                    var_13 = (!123);
                    var_14 = min((((((max(127, 127))) > (~var_7)))), (arr_6 [i_0] [i_1] [i_1 + 2]));
                }
            }
        }
    }
    var_15 = (max(((((-120 >= -75) <= (91 & -76)))), (((((var_4 ? var_1 : var_2))) ? (var_0 & var_0) : var_6))));

    for (int i_3 = 3; i_3 < 9;i_3 += 1)
    {
        var_16 = (max((max((arr_3 [i_3] [i_3]), var_9)), (((!var_7) ? (-4 <= -90) : ((~(arr_1 [6] [10])))))));
        var_17 = (max(var_17, (((!(((127 ? -66 : -92))))))));
        arr_9 [i_3 + 3] = (((((var_6 && var_0) & (arr_7 [i_3] [i_3]))) | (((arr_7 [i_3 - 3] [i_3]) ? ((var_5 ? (arr_4 [i_3] [i_3] [0]) : var_2)) : ((~(arr_0 [i_3] [i_3])))))));
        arr_10 [11] = (27 != -25);
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_18 = ((~((85 ? -105 : 10))));
        arr_15 [i_4] = (((((var_1 * var_0) > (arr_11 [i_4]))) ? (max(((-(arr_6 [i_4] [i_4] [i_4]))), (~16))) : (((((~(arr_1 [i_4] [i_4])))) ? ((((arr_13 [i_4] [i_4]) && var_1))) : (((var_3 == (arr_3 [i_4] [i_4]))))))));
        var_19 = (15 % -52);
        arr_16 [i_4] = ((~(min(var_6, -0))));
        arr_17 [i_4] [i_4] = max(-52, 16);
    }
    var_20 = ((((((!var_1) ^ (var_3 % var_4)))) ? ((((-29 * -127) && -112))) : (var_0 & var_7)));
    var_21 = (min(var_21, (~-1)));
    #pragma endscop
}
