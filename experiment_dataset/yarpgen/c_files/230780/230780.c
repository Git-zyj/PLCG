/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_0;
    var_11 = var_5;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (max((arr_2 [i_0]), var_9));
        var_13 = ((((min((arr_0 [i_0]), (arr_0 [i_0])))) ? (~1) : ((65535 ? var_9 : ((min(-1299642326, 162)))))));
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1)
    {
        var_14 = (arr_5 [i_1]);
        var_15 -= (max((((arr_1 [i_1]) ? (arr_1 [i_1]) : var_2)), ((((arr_1 [i_1]) ? (arr_1 [i_1]) : (arr_1 [i_1]))))));
        var_16 -= (1299642326 != 1604820537);
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = (max(((var_5 ? 102 : (arr_1 [1]))), ((35 ? (arr_6 [i_2]) : (arr_3 [i_2])))));
        arr_10 [i_2] = 12610597030466399121;
        var_17 = (arr_3 [i_2]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_18 = ((var_5 ? (((var_9 % (arr_13 [i_3])))) : 17473325621243663507));
        arr_14 [i_3] = 94;
    }
    var_19 = (min(var_19, var_0));

    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_18 [1] = ((var_0 & (((arr_0 [i_4]) - (arr_2 [i_4])))));
        var_20 -= (((((4 ? var_9 : (!-54)))) ? ((((min(var_5, var_8))) ? ((min(var_3, (arr_0 [i_4])))) : var_8)) : (((max((arr_16 [i_4]), var_5))))));
        var_21 = (((((((arr_0 [i_4]) ? var_3 : var_7)))) ? var_4 : (((arr_15 [i_4] [i_4]) ? (arr_17 [i_4]) : 6829259011587760236))));
    }
    #pragma endscop
}
