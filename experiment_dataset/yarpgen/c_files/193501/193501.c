/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    var_20 = ((-(((((1 ? -8386 : 2044))) ? var_11 : var_7))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_21 = var_4;
        arr_4 [i_0] = ((704369092237191751 ? (!var_11) : ((max(var_14, (arr_1 [i_0]))))));
        arr_5 [i_0] |= ((var_15 ? (((!(arr_3 [i_0] [i_0])))) : (arr_2 [14] [i_0])));
        var_22 = 17742374981472359865;
        arr_6 [i_0] [17] |= (-(((max(var_13, var_7)) >> (var_6 - 15690))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_23 = (max(((max(2031353259, (!var_15)))), (max((-2147483647 - 1), 65535))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        arr_18 [10] [i_2] [18] = var_5;
                        var_24 = ((var_14 & (arr_11 [i_1] [i_2])));

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_25 = ((50638 ? (((var_7 / var_5) ? ((min(1, var_14))) : -167246785)) : (((((255 ? var_1 : 1))) ? (~var_10) : (var_7 == var_16)))));
                            arr_21 [i_1] = (max(2070, (((arr_1 [i_1]) ? (~-9365) : var_2))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 18;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            {
                arr_28 [12] [i_6] = (min((max(-255, ((-255 ? 17742374981472359865 : 17397)))), 1));
                arr_29 [i_6] = (max(var_6, -255));
                arr_30 [i_6] [i_6] [i_6] = (min(((max((arr_10 [18] [i_6]), var_14))), 2044));
            }
        }
    }
    #pragma endscop
}
