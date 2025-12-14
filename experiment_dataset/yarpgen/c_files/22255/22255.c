/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_4;

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_21 = ((((max(((max(var_2, (arr_3 [i_0])))), ((var_2 ? var_1 : var_12))))) + var_11));
        var_22 += var_12;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_23 += (!95);
        var_24 = (~-var_9);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 8;i_4 += 1)
                {
                    {
                        arr_17 [i_1] [i_1] [i_4] = (!48);
                        var_25 += ((-(((arr_0 [i_4 - 2] [i_4]) ? -var_12 : var_4))));

                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            var_26 = (min(((1 ? (~68719474688) : -8782815495205023374)), (((((224 ? var_4 : var_9)) / -1)))));
                            var_27 = (arr_6 [i_3]);
                            var_28 |= (((max(18446744073709551615, var_2)) > (((((((!(arr_16 [i_1] [i_1] [i_3 + 3] [i_4 + 2])))) == ((((arr_7 [i_2] [i_3 + 3]) && (arr_10 [i_3] [i_4] [i_3]))))))))));
                        }
                        var_29 = var_18;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        var_30 = (((((~(arr_20 [i_6] [i_6])))) ? (arr_4 [i_6] [i_6]) : (224 < var_17)));
        arr_22 [i_6] &= ((var_14 ? (arr_10 [i_6] [i_6] [i_6]) : ((-15 ? var_1 : var_11))));
    }
    var_31 = var_14;
    #pragma endscop
}
