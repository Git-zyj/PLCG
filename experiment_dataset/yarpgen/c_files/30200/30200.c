/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((var_12 ? (-3331759886372924007 / -var_12) : -var_3)))));
    var_20 *= (-(((((var_17 ? var_14 : var_4)) == var_6))));
    var_21 *= var_16;
    var_22 = var_16;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_23 = (max(var_23, 1693111179));
        var_24 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_25 = (max(var_25, (!var_11)));
        var_26 = ((((var_16 ? 1 : var_14)) | ((var_3 ^ (arr_4 [6] [i_1])))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = ((-(((((-783342971 ? var_8 : 0))) ? ((((arr_10 [i_2]) + (arr_7 [5] [i_2])))) : ((var_8 ? 2055982049 : (arr_7 [i_2] [i_2])))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        var_27 = ((+(((arr_13 [i_2]) ? ((var_5 ? 51467 : (arr_9 [i_2]))) : (var_10 & 0)))));
                        var_28 = ((((max((arr_7 [i_2] [i_2]), (max(2238985246, (arr_7 [i_2] [i_2])))))) || (arr_15 [i_5] [i_3] [i_4])));
                        var_29 |= var_5;
                    }
                }
            }
        }
        var_30 = ((!(((((var_10 ? var_2 : (arr_7 [5] [5])))) && (var_7 && var_4)))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {
                        var_31 = 783342971;
                        var_32 = ((((min((-127 - 1), var_0))) ? (((!(!var_7)))) : ((((!var_14) || (((var_18 ? var_5 : 1888225819))))))));
                        var_33 *= (((min((arr_16 [i_2] [1] [i_2] [1]), (((arr_25 [15]) ? (-9223372036854775807 - 1) : 1)))) & -var_13));
                        var_34 = (!var_13);
                    }
                }
            }
        }
    }
    #pragma endscop
}
