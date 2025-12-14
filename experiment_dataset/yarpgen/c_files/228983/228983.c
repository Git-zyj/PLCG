/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] [i_2] [1] = ((((((arr_0 [i_1 - 1] [i_1]) ? ((max((arr_1 [i_0]), var_8))) : var_4))) ? ((+((var_1 ? (arr_1 [i_0]) : 57209)))) : -1557808915));
                    var_12 = (arr_2 [i_2] [i_1 + 1] [1]);
                    var_13 += (arr_4 [i_0] [i_1] [i_1]);
                    arr_7 [i_0] [i_2] = (((var_4 && (arr_0 [i_0] [i_0]))));
                }
            }
        }
        var_14 += ((((arr_5 [i_0] [i_0]) & 59990)));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_15 += var_7;
        arr_10 [i_3] [i_3] = (arr_8 [i_3]);
        var_16 = (max(var_16, (arr_8 [0])));
        arr_11 [i_3] [i_3] = min(((!((((arr_3 [i_3]) * 5572))))), ((!(arr_5 [i_3] [i_3]))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_21 [i_5] [i_3] [i_5] [i_6] [i_5] [i_3] = (arr_1 [i_6]);

                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            arr_25 [i_3] [i_3] [i_7] [i_3] [i_7] [i_4] = var_4;
                            arr_26 [i_7] [i_3] [i_3] = ((((min((arr_13 [i_3]), (arr_13 [i_3])))) == ((var_4 ? (arr_0 [i_7 - 1] [i_4]) : var_2))));
                        }
                        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                        {
                            arr_29 [i_3] [i_3] = (max((arr_19 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), (((((var_8 >= (arr_22 [i_3] [i_5] [1] [1] [i_3])))) << (arr_18 [i_8] [i_4] [i_5] [i_4])))));
                            arr_30 [i_3] [i_4] [i_3] [i_3] [i_8] = (arr_9 [i_6] [i_3]);
                            arr_31 [i_3] [i_3] [i_6] [i_6] [i_4] [i_6] [i_3] = 60016;
                        }
                        for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                        {
                            arr_35 [i_3] = (arr_14 [i_3]);
                            arr_36 [i_3] [i_4] [i_3] [i_6] [i_5] [i_4] = 281472829227008;
                            var_17 = (max((arr_13 [i_3]), (max(((var_8 ? var_2 : var_5)), (var_6 >= var_5)))));
                            arr_37 [i_3] [i_5] [i_5] [i_3] [i_9] [i_3] |= (~-1954422592);
                        }
                        for (int i_10 = 2; i_10 < 12;i_10 += 1)
                        {
                            var_18 = (min(var_18, (((((!((((arr_27 [i_10 - 2] [7] [i_5] [i_6]) ? 0 : 77))))) ? (((arr_38 [i_3] [i_4] [i_10 + 2] [i_10] [i_6] [i_3]) % (arr_38 [i_3] [i_4] [i_10 + 2] [i_6] [i_5] [i_6]))) : ((((1222503441 || (arr_33 [i_3] [i_5] [2] [2] [i_10 - 2]))))))))));
                            var_19 |= ((((min((!77), (min(var_10, var_8))))) ? ((((arr_8 [i_5]) < (arr_8 [i_6])))) : (((arr_5 [i_10] [i_10 + 1]) >> (((var_1 * 4294967290) - 1095949683))))));
                            arr_40 [i_3] [i_4] [i_3] [i_3] [i_3] [i_6] = var_9;
                            var_20 &= ((!((((!2517135722) ? -1439940978 : (arr_9 [i_3] [i_5]))))));
                            arr_41 [i_3] [i_3] [i_3] [i_3] [i_10 - 1] [i_3] = var_7;
                        }
                    }
                }
            }
        }
    }
    var_21 += (((((var_2 ? var_1 : (var_8 ^ var_0)))) && ((min(var_5, (-605636823 && 102))))));
    var_22 = (((((((var_2 ? 63 : 60001))) ? var_6 : var_0)) % var_2));
    #pragma endscop
}
