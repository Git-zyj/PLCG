/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_7 ? (var_0 + var_17) : (!var_11))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((((min(var_7, 4258520146))) ? ((var_7 ? var_10 : var_16)) : -430145008))) ? (((((var_2 ? (arr_1 [i_0] [i_0]) : var_1))))) : ((-430144999 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
        arr_3 [i_0] = (max((min((((arr_1 [i_0] [i_0]) & (arr_0 [i_0] [i_0]))), (min(var_14, (arr_0 [i_0] [i_0]))))), (((arr_0 [i_0] [i_0]) ? (((max(var_5, var_2)))) : (arr_0 [i_0] [i_0])))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_20 *= ((!((((0 ? (arr_1 [i_0] [i_1]) : var_6))))));
            var_21 = var_6;
            var_22 = var_2;
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_9 [i_0] [i_2] = (max((arr_6 [i_0]), ((((arr_5 [i_0] [i_2] [i_2]) ? (arr_0 [i_2] [9]) : var_15)))));
            var_23 = (min(var_23, (arr_6 [i_0])));
        }
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_24 = ((((!(arr_12 [i_3])))));
        var_25 = (arr_6 [i_3]);
        arr_13 [1] |= (max(var_3, (((((var_14 ? 7101343711994901653 : (arr_7 [i_3] [i_3])))) ? var_1 : (arr_11 [i_3] [1])))));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_26 = (~(((arr_10 [i_4]) ? ((var_12 ? (arr_7 [9] [i_4]) : var_4)) : var_12)));
        var_27 = (((((max(-430145008, (arr_14 [i_4]))) ? ((var_4 ? 1 : (arr_1 [i_4] [i_4]))) : (((arr_7 [i_4] [i_4]) ? var_2 : 1))))));
        var_28 -= 1;
        var_29 &= (arr_15 [i_4]);
    }
    var_30 &= var_2;
    #pragma endscop
}
