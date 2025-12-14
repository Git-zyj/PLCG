/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        var_17 = ((((var_7 ? var_6 : (arr_10 [i_0] [i_0 + 3] [i_0 - 1] [i_0 + 3])))) ? 16 : var_8);
                        var_18 -= ((((((arr_1 [i_0 + 2]) ? var_11 : (arr_1 [i_0 + 4])))) ? (arr_3 [i_0] [i_0 - 1]) : ((var_0 ? ((var_10 ? 8281564455317575246 : (arr_1 [i_1]))) : ((16 ? 8661603908044219167 : 10484))))));
                        var_19 = (min((max(var_5, var_1)), -294791854));
                        var_20 = min(9, (((!((min(-6716098275124201889, -949138756621018444)))))));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_21 += ((-(arr_5 [i_0] [i_1] [i_0])));
                        var_22 = (((~var_1) ? (((((~8) >= (arr_1 [7]))))) : (max((min(var_0, var_11)), 9))));
                        var_23 = ((!(((+(max((arr_5 [i_0 + 1] [i_0 + 1] [1]), (arr_12 [i_0] [i_0] [i_2] [i_0]))))))));
                        var_24 = (((((var_6 ? (!-6716098275124201918) : var_9))) ? (~3949167962922743625) : (!63090)));
                        var_25 = (((max((52 & var_6), (max(var_4, var_8))))) ? ((4294967281 ? 63 : 1042083557)) : var_14);
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        var_26 = (!var_15);
                        var_27 = ((var_15 ? ((6716098275124201912 ? 2819311388224250324 : (arr_11 [i_0 - 1] [i_0 + 1]))) : var_14));
                        var_28 = 9223372036854775807;
                        var_29 += arr_6 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 3];
                        var_30 = (min(var_30, (arr_5 [i_0] [i_0] [i_5])));
                    }
                    var_31 = ((-(max(((var_7 ? (arr_13 [i_0] [i_0] [7] [i_2] [i_2]) : 3584)), ((max((arr_6 [i_0 + 4] [10] [i_2] [i_2]), var_13)))))));
                }
            }
        }
    }
    var_32 = var_9;

    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_33 = (min((min(0, 2305843009213693951)), (((var_3 ? var_14 : -16812)))));
        var_34 = ((((((~(arr_16 [i_6] [13]))) < (arr_16 [i_6] [i_6]))) ? 69 : ((min(114, (arr_15 [i_6]))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
    {
        var_35 = ((-(arr_7 [i_7])));
        var_36 = ((arr_6 [i_7] [i_7] [i_7] [i_7]) ? (arr_2 [i_7]) : var_8);
        var_37 = (min(var_37, (((-(arr_2 [i_7]))))));
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
    {
        var_38 = (max((min(788760173, 8231376895014598464)), (((!(arr_14 [6] [i_8] [i_8]))))));
        var_39 = var_13;
    }
    var_40 = (max(var_5, (((((1 ? 24 : 4294967295))) ? (~var_6) : var_9))));
    var_41 = (((~-70) ? ((((!(((154 ? var_10 : 59655))))))) : ((~((0 ? -4 : 15627432685485301286))))));
    #pragma endscop
}
