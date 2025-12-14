/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(2147483647, 396082521));
    var_19 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 8;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        {
                            var_20 = (((-11451 | var_9) ^ (((arr_13 [i_0] [0] [i_1] [i_0] [i_2] [i_3 - 1] [i_0]) - (arr_8 [i_0] [i_0] [i_2] [i_4])))));
                            var_21 = (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) % (((((arr_0 [i_1] [i_2]) || (arr_9 [4] [i_4])))))));
                            var_22 = (arr_10 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_3 - 3]);
                        }
                    }
                }
                var_23 = (((!0) || 1471222911));

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_24 = (!var_1);
                    var_25 = -var_13;
                    var_26 = ((-(arr_11 [i_5] [i_5] [1] [i_1] [i_0] [i_0])));
                    var_27 = ((!(arr_15 [i_5] [i_1] [i_2] [i_1] [i_1] [i_0])));
                }
                for (int i_6 = 3; i_6 < 8;i_6 += 1)
                {
                    var_28 = (arr_18 [i_6] [i_6] [i_1] [i_1] [i_6] [i_6 + 2]);
                    var_29 = (arr_10 [i_0] [i_1] [i_1] [i_1] [i_6 + 2]);
                    var_30 = (arr_7 [i_0] [i_0] [i_1] [i_6]);
                }
            }
            var_31 = (((arr_12 [i_1] [i_1] [i_0]) ^ (arr_2 [i_1])));
        }
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            var_32 = (((arr_17 [i_7] [i_7 + 1] [i_7 + 1]) ? (arr_9 [i_7] [i_0]) : 1537785540));
            var_33 = (arr_19 [i_0] [i_0] [1] [3] [i_0]);
            var_34 = (((arr_0 [i_7 + 1] [i_0]) ? var_12 : var_4));
        }
        var_35 = ((-(arr_22 [i_0] [i_0])));
        var_36 = ((var_14 ? (-9223372036854775807 - 1) : var_4));
    }
    var_37 = (((max(var_5, (max(-3, var_8)))) != ((var_1 ? ((max(var_8, var_17))) : (!var_6)))));
    var_38 = (max((((0 || 1160742161) & (max(-2638782715029843366, 9223372036854775807)))), (max((max(var_14, (-9223372036854775807 - 1))), ((var_10 ? 0 : var_1))))));
    #pragma endscop
}
