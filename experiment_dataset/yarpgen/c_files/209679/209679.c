/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = (min(var_15, ((max((((2251795518717952 ? var_12 : -1437729389))), (((+((var_11 ? (arr_2 [i_0]) : 1))))))))));
        var_16 ^= (min((-6313353321712038167 / 1), -4));
        var_17 = (arr_2 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_18 = (arr_3 [i_1 - 1]);
        var_19 = (((arr_4 [i_1 - 1]) ? ((((1441798601 != (arr_4 [i_1]))))) : ((var_11 ? (arr_3 [i_1]) : var_2))));
        arr_5 [i_1] = 268402688;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    {
                        var_20 -= (~(arr_7 [i_1] [i_3]));
                        arr_14 [i_3] [i_1 - 2] [i_1 + 2] [i_2] [i_3] [i_4 - 3] = -25835;
                        var_21 = ((((var_2 ? (arr_8 [i_2]) : (arr_12 [i_3] [i_2] [i_2] [i_3] [i_3] [i_4]))) * ((((var_1 || (arr_3 [i_4 + 1])))))));
                        var_22 = ((((var_3 ? (arr_3 [i_2]) : var_2))) ? (!136069195651976991) : (arr_6 [i_1 + 2]));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = (((+((((arr_9 [14] [i_5] [i_5] [i_5]) || 2147483621))))) % (arr_11 [i_5] [i_5] [0]));
        arr_18 [i_5] [i_5] = ((var_14 ? (arr_16 [i_5] [i_5]) : ((((min((arr_6 [i_5]), var_3))) | 268402673))));
        var_23 = (((((((((arr_16 [i_5] [i_5]) ? (arr_8 [i_5]) : var_1)) >= 1)))) < (arr_9 [1] [i_5] [i_5] [i_5])));
        var_24 = (arr_15 [i_5]);
        var_25 = 0;
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_26 = (min(((max((max(var_14, var_6)), var_4))), ((-(arr_7 [i_6] [i_6])))));
        var_27 = var_4;
    }
    var_28 &= (min((((var_13 ? var_5 : var_8))), (max(8796093022207, var_12))));
    #pragma endscop
}
