/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((((((var_17 >> (var_12 - 8071))) != 32739))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 += var_1;

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_14 [i_1] = var_16;
                        var_22 &= (((((var_6 ? var_14 : (arr_9 [i_0] [i_1] [i_2] [i_3])))) ? var_12 : 101807783));
                        var_23 += ((((arr_12 [i_0] [2] [i_1] [i_2] [i_0] [i_3]) + (3100289050 != 1048026152))));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        arr_18 [i_0] [i_2] [i_2] [i_1] [i_1] = (arr_13 [i_0] [i_0]);
                        var_24 = 0;
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_25 = ((var_18 >> (((~var_0) + 2865))));
            var_26 = (-(((((var_8 ? var_14 : (arr_22 [i_6] [i_6])))) ? 1048026142 : (max((arr_15 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), (arr_12 [i_5] [i_5] [i_5] [i_6] [i_6] [i_6]))))));
        }
        var_27 = (min(((min(-1048026152, 1048026152))), (((var_19 / -1048026152) ? var_0 : var_11))));
        var_28 |= (((((~(max((arr_19 [8]), -1048026152))))) ? (max((var_1 > 255), 1048026151)) : ((((0 - 15) > (((1048026152 != (arr_24 [i_5])))))))));
    }

    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_29 |= (min(((max(var_12, 1048026151))), ((var_2 ? (arr_27 [i_7]) : 872341898))));
        var_30 -= ((-(((arr_27 [i_7]) / -1048026175))));
        var_31 = (max(var_31, ((-1085020837 ? -1048026158 : 0))));
    }
    #pragma endscop
}
