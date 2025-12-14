/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_14 = var_6;
        var_15 = (((~255) ? ((((arr_1 [i_0]) >= ((-(arr_1 [i_0])))))) : ((((max(var_5, 249))) ? (arr_0 [i_0]) : ((max(242, (arr_1 [i_0]))))))));
        var_16 &= ((var_9 ? (((arr_1 [i_0]) >> (arr_0 [i_0]))) : 255));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_16 [i_4] [i_2] [i_3] [i_4] = ((arr_13 [i_1] [i_1] [i_1]) * 1);

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            arr_21 [i_4] = ((var_0 ? ((251 ? 3 : var_10)) : (arr_12 [i_5] [i_4] [i_3] [i_1])));
                            var_17 = (((var_10 * var_6) ? (arr_15 [i_2] [i_3] [i_5]) : (((arr_18 [i_1] [i_1] [i_1]) ? 5 : var_13))));
                            arr_22 [i_1] [i_2] [i_3] [i_4] = -4294967293;
                            var_18 = (!var_6);
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            arr_25 [i_4] [i_2] = var_9;
                            var_19 = (max(var_19, (arr_3 [i_1] [i_2])));
                            var_20 = 115;
                            var_21 = (max(var_21, -var_0));
                            var_22 = (min(var_22, (((var_13 && ((((arr_17 [i_2] [i_1] [i_3]) + 48692))))))));
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_23 = ((((((arr_15 [i_1] [i_2] [i_3]) ? 35971 : 2147483647))) % (-9223372036854775807 - 1)));
                            var_24 = ((var_7 ^ 242) ? (((arr_15 [i_1] [i_1] [i_1]) ? var_3 : -1)) : (arr_6 [i_1]));
                            arr_28 [i_1] [i_2] [i_3] [i_4] [i_4] = ((((((arr_5 [i_1]) * (arr_9 [i_4] [i_7])))) ? ((-115 ? 469936573 : (arr_15 [i_7] [i_2] [i_1]))) : var_8));
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            arr_31 [i_1] [i_2] [i_3] [i_3] [i_4] [i_4] [i_4] = (((var_0 == var_1) & (((arr_18 [i_1] [i_2] [i_3]) ? 255 : (arr_3 [i_2] [i_8])))));
                            var_25 = (((arr_3 [i_2] [i_8]) ? 255 : var_12));
                            arr_32 [i_1] [i_2] [i_3] [i_4] [i_8] = ((!(((~(arr_29 [i_1] [i_4] [i_1] [i_1] [i_1]))))));
                            var_26 = (((arr_19 [i_8] [i_4] [i_4] [i_1]) ^ (arr_23 [i_1] [i_2] [i_3] [i_4] [i_4] [i_4])));
                        }
                    }
                }
            }
            var_27 += (((((arr_27 [i_2] [i_2] [i_2] [i_2] [i_1] [i_1] [i_1]) ? 27090 : 64)) >= (arr_4 [i_2] [i_2])));
        }
        var_28 *= ((+(max((arr_8 [i_1] [i_1] [i_1]), var_3))));
        var_29 = (((var_3 ? (arr_7 [i_1] [i_1] [i_1]) : 13)) < (~0));
    }
    var_30 = (max(((((var_5 ? var_11 : var_10)) + (~1))), var_13));
    #pragma endscop
}
