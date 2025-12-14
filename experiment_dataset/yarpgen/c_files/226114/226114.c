/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, 1));
    var_16 = (max(var_16, 33));
    var_17 = (min(var_17, (!4294967295)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((((!((min(1376925567965817488, 15))))) ? (!var_10) : (((min((((!(arr_1 [i_0])))), 6))))));
        var_18 = (((((-69 * (arr_0 [i_0])))) ? 1 : (((!((((arr_2 [i_0]) ? 435411879 : var_9))))))));
        var_19 = (((((arr_0 [i_0]) <= (109 / 23))) ? (((((!(arr_0 [i_0]))) && ((max(29576, (arr_0 [i_0]))))))) : -435411880));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    {
                        var_20 = (((35976 ^ 12445) ? ((~((9662961958276175713 << (254 - 251))))) : 1572004673596262154));
                        var_21 = (((max((-2147483647 - 1), var_11))));
                        var_22 += 6;
                    }
                }
            }
        }
        var_23 = (min(var_23, (arr_2 [i_0])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_24 = (((((arr_10 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) || 29576)) || (18 || 65535)));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        arr_20 [i_4] [i_4] = 29605;
                        var_25 = (var_1 << 15);
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        var_26 &= ((!((max(7006728904584190081, (0 || 167))))));
        var_27 = (min(var_27, -4279928150));
        var_28 += (207 % var_14);
    }
    var_29 = var_13;
    #pragma endscop
}
