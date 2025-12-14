/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;

    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 + 1] [i_0] = 4199986569;
        var_20 = ((((((577422424 ? 1 : var_4) != 139)))));
        var_21 ^= 2791966812209326210;
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_22 = ((((((arr_5 [i_1 + 1] [i_1 + 1]) * (arr_5 [i_1 + 1] [i_1 + 1])))) ? (min((arr_5 [i_1 + 1] [i_1]), (arr_5 [i_1 + 1] [i_1]))) : ((((!(arr_5 [i_1 + 1] [i_1])))))));
        var_23 = 15654777261500225406;

        for (int i_2 = 2; i_2 < 6;i_2 += 1)
        {
            var_24 -= (((~-4547389462081255989) ? (((((arr_1 [i_1] [i_2]) ? var_4 : (arr_1 [i_2] [i_1]))))) : 18145094940714335138));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_25 = (min(var_25, (((((((min(18446744073709551615, (arr_2 [i_3])))) ? ((~(arr_14 [i_1 + 2] [i_3] [i_4] [i_3] [i_2 - 1]))) : ((((arr_2 [i_3]) ? (arr_1 [i_1] [i_1]) : 0))))) + (((((15654777261500225405 ? 64 : 0))) ? var_4 : (((var_15 & (arr_15 [8] [8] [i_2 + 2] [8])))))))))));
                        var_26 = ((((((arr_7 [i_4] [i_2 - 2] [i_1 + 1]) ? -24 : 0))) ? ((((3 ? var_0 : (arr_7 [i_1 + 1] [i_1] [i_1 + 1]))) / (arr_1 [2] [i_2]))) : var_6));
                    }
                }
            }
        }
    }
    var_27 -= (+-0);
    var_28 -= (!-var_16);
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            {
                arr_20 [i_5] = var_1;
                var_29 ^= ((((!(arr_19 [i_6] [i_5] [i_6]))) ? (((arr_19 [i_5] [i_5] [i_5]) ? var_8 : 1)) : (arr_19 [i_5] [i_6] [i_6])));
                arr_21 [i_5] = 255;
                var_30 = (max(var_30, (min(10733633564273273871, 15654777261500225404))));

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_25 [i_5] [i_6] [i_5] [i_7] = (((((-(-1 && 28126)))) + ((~(max(var_12, 1614476428778365921))))));
                    var_31 = (min(var_31, ((((+(((arr_23 [i_5] [i_6] [i_5] [i_7]) ? 1 : (arr_22 [i_5])))))))));
                    arr_26 [i_5] [i_5] [i_5] = ((16252928 != ((((arr_24 [i_5] [i_5] [i_6] [i_7]) && (arr_24 [i_5] [i_5] [i_6] [i_7]))))));
                    var_32 += (((((10733633564273273871 ? ((~(arr_22 [i_5]))) : (((var_4 ? 97 : var_12)))))) ? (((~(~var_2)))) : ((((min((arr_18 [i_6]), 3454483134211145202))) ? 139 : (arr_16 [i_6])))));
                    var_33 = (max(var_33, ((((var_11 + 1) ? (arr_24 [i_5] [i_6] [i_7] [i_6]) : (((0 + var_5) * ((min(var_4, var_13))))))))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    var_34 = ((4278714367 ? (arr_24 [i_5] [i_6] [i_8] [i_8]) : ((((arr_23 [i_5] [i_5] [9] [i_8]) / (arr_23 [i_8] [i_6] [i_8] [i_5]))))));
                    var_35 &= 6833323477742605704;
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_36 &= 3232745948558236150;
                    var_37 = ((!(((~((655127446 ? (arr_18 [i_5]) : (arr_30 [i_5] [i_6] [16]))))))));
                }
            }
        }
    }
    #pragma endscop
}
