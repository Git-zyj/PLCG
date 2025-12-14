/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_12);
    var_19 = ((var_3 ? (((var_8 ? ((var_9 ? var_1 : var_11)) : var_10))) : var_5));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 6;i_4 += 1)
                        {
                            {
                                arr_14 [6] [i_3 - 2] [i_2] [6] [1] = (min(((((!var_8) ? var_15 : (((arr_13 [i_4] [i_3] [i_2] [i_0] [i_0]) << (27741 - 27739)))))), (max(var_7, ((var_11 ? var_16 : 2341154758))))));
                                arr_15 [i_0] [i_2] = ((((var_14 ? var_9 : (arr_5 [i_2 + 1] [i_2] [i_2] [i_0]))) & ((((((var_5 ? (arr_0 [i_0]) : (arr_10 [i_4 + 2] [9] [i_3] [i_2] [i_0] [i_0])))) ? ((max(14191, (arr_1 [i_3 + 1])))) : (~var_17))))));
                            }
                        }
                    }
                    arr_16 [i_2] = ((((max((arr_12 [i_2] [i_2] [i_0 + 1] [i_2] [i_0 + 1] [i_0] [i_0]), (arr_1 [i_1 - 2])))) << ((((-(((arr_5 [i_0] [1] [i_0] [i_0]) ? var_12 : var_6)))) + 2))));
                }
            }
        }
        arr_17 [i_0] = ((~((260 ? ((var_2 ? var_4 : var_13)) : ((((var_14 < (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 - 2] [i_0])))))))));
        arr_18 [i_0] = ((~((var_1 << (((arr_3 [i_0 - 2]) - 31744))))));
        arr_19 [i_0] = ((-((((var_8 ? (arr_4 [i_0] [i_0]) : (arr_1 [5]))) / ((var_6 ? var_7 : 18808))))));
        arr_20 [i_0] = var_7;
    }
    #pragma endscop
}
