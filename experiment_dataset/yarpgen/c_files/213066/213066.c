/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(-1686691436, var_8));
    var_11 = (min((min((var_1 + var_8), -70)), (var_9 | var_5)));
    var_12 = ((+(((!var_7) ? (~var_9) : 9223372036854775807))));
    var_13 = var_0;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_4 [4] = (arr_1 [17] [i_0 + 1]);
        arr_5 [i_0 - 3] = (((((((arr_0 [i_0 + 1]) > (arr_0 [i_0 + 1]))))) % (7969138894630291806 / 7969138894630291806)));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_14 = ((((((13544 ? 23607 : var_4)))) & (max(((1 * (arr_8 [i_1]))), (arr_8 [6])))));
        arr_10 [i_1] = (max((min(((min(var_7, (arr_7 [i_1])))), (max((arr_6 [i_1]), 10477605179079259796)))), 7969138894630291806));
        var_15 = (max(((+((min((arr_6 [i_1]), var_6))))), (arr_6 [i_1])));
        arr_11 [i_1] = 237;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        arr_14 [i_2 - 1] = 148;

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_16 = (arr_16 [i_2 - 1] [i_3] [i_2 - 1]);
            var_17 = (((((1 ? (arr_7 [i_3]) : (arr_13 [i_2 - 1] [i_3])))) ? (arr_17 [i_2]) : (((-5 ? var_2 : 4139308422779976312)))));
            arr_18 [i_3] [14] = (((((arr_17 [17]) ? (arr_15 [i_3] [i_3] [i_3]) : var_7)) | (((((arr_17 [i_3]) || (arr_13 [i_2] [i_3])))))));
            var_18 = 1;
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_19 = ((!(arr_24 [i_2] [i_2] [i_2 - 1] [i_4 - 1] [1] [i_4] [i_4])));
                            arr_27 [i_6] [14] [i_3] [i_6] [i_6] [i_6] = ((arr_22 [i_2 - 1] [i_3] [i_4 - 1]) + (arr_21 [i_2 - 1] [i_3] [i_3] [i_5]));
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_20 = (((arr_24 [1] [i_2] [21] [i_2] [i_2] [10] [i_7]) << (var_9 - 4651204490844998360)));
            var_21 = -0;
            var_22 = (~2906526428);
        }
    }
    #pragma endscop
}
