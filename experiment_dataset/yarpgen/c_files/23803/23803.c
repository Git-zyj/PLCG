/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [7] [i_1] [i_1] = var_0;
                    arr_9 [i_0] [i_0] [i_2] = var_1;
                    var_11 = (!0);
                    var_12 = (min(var_12, (((var_3 ? (((!(!var_6)))) : (((arr_6 [i_0] [i_1] [i_2] [10]) ? var_7 : (arr_6 [i_2] [i_1] [i_0] [i_0]))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            {
                arr_17 [i_3] [i_4] [i_3] = var_9;
                var_13 = (var_8 * (((min(var_7, (arr_14 [i_3] [i_3] [i_4]))) / (arr_14 [i_3] [i_3] [i_4 + 1]))));
            }
        }
    }
    var_14 = ((((((var_10 << (var_9 - 14960))) & (var_4 < var_9))) - (((((var_8 + var_3) || ((max(var_10, var_9)))))))));

    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        var_15 *= (((max((var_10 <= var_1), (!var_1))) ? (max((max((arr_19 [0]), var_1)), ((((arr_22 [i_6] [i_5]) + 255))))) : (((((var_8 > var_6) >= (((arr_5 [i_5] [i_5] [i_7]) ? (arr_25 [i_6 + 1] [i_7] [i_8]) : var_2))))))));
                        arr_31 [i_8] [i_6] [i_6] [10] = ((var_5 << ((((var_5 & (arr_5 [i_5] [i_6] [i_6 + 3]))) - 37699))));
                        arr_32 [i_6] [i_6] = ((((((arr_6 [12] [i_6 + 2] [i_7] [12]) ? var_5 : (((var_9 || (arr_18 [i_7] [i_8]))))))) ? (min(var_8, ((1 ? var_2 : 30747)))) : ((((var_3 && 0) ? (((!(arr_27 [17])))) : var_1)))));
                        arr_33 [i_5] [i_6] = var_7;
                    }
                }
            }
        }
        var_16 = (-var_8 - var_3);
        arr_34 [i_5] = (55567 + var_1);
    }
    var_17 |= (((min((var_7 + var_3), (~var_0))) + var_5));
    #pragma endscop
}
