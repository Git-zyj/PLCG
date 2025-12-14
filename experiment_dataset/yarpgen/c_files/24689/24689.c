/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        arr_10 [i_2] [i_2] |= ((181 || (((1921669395 ? (73 || 232) : 205)))));
                        var_11 = var_10;
                    }
                    var_12 *= 51;

                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        var_13 = 12185412276915729049;
                        var_14 = (((((arr_13 [i_4] [1] [i_0] [i_0]) <= 42)) ? 0 : (min(((0 ? (arr_5 [i_0] [i_2] [i_0]) : 2931027422676202408)), (((-3390509856877149644 && (arr_4 [i_0] [i_0] [i_0]))))))));
                        var_15 = (min(((min((18012 == var_3), ((!(arr_12 [i_0] [i_1] [i_2] [i_4])))))), var_7));
                        var_16 = (arr_6 [2] [i_1] [i_1] [i_1]);
                        var_17 &= 896611731;
                    }
                    for (int i_5 = 4; i_5 < 17;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((max(61, (arr_15 [i_2] [i_5 - 2] [i_5 - 2] [i_5 - 2])))) < ((~(arr_9 [i_5] [i_5 - 3] [i_0] [i_5])))));
                            var_18 = ((((1 ? 2047 : -18012)) | var_7));
                        }
                        var_19 -= ((18010 ? 185 : 75));
                        arr_19 [i_0] [i_1] [i_2] = ((((74 % -32765) ? var_2 : ((908737903 ? 182 : 156)))));
                    }
                    arr_20 [i_0] [i_1] [i_0] = max((arr_8 [i_0] [i_0] [i_0] [i_0]), (((((156 ? (arr_3 [5]) : 40)) > -1))));
                    var_20 = ((min((((var_1 ? 241 : 1))), 2931027422676202408)));
                }
            }
        }

        /* vectorizable */
        for (int i_7 = 4; i_7 < 17;i_7 += 1)
        {
            var_21 = (min(var_21, ((((arr_21 [16]) ? (arr_11 [i_0] [i_7 - 4] [14] [i_7] [i_0] [i_0]) : var_2)))));
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    {
                        arr_30 [i_0] [i_0] [i_0] [i_0] [17] = var_6;
                        var_22 -= var_3;
                    }
                }
            }
        }
    }
    var_23 = (max(var_23, (((-6045631995789630118 ? ((min(var_9, var_3))) : var_2)))));
    var_24 = 153;
    #pragma endscop
}
