/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [12] [i_0] = ((1531799556010755316 - (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_1))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_10 = ((~(arr_6 [i_0] [i_1] [i_2] [i_0])));
                    var_11 = (min((((((-(arr_5 [i_1] [i_0] [i_2])))) ? var_0 : var_3)), -4095));
                    var_12 = (-(6322886369050712840 - 4091));
                    var_13 = (((var_6 & -1295819817) ? (((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : 32767)) : ((min((arr_4 [i_0] [i_0]), 113)))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_9 [i_3] [i_3] = ((1398755288 ? ((8070450532247928832 ? 1295819825 : 2)) : 15304018719359124788));
        arr_10 [i_3] = (min(562932773552128, 10));
        arr_11 [i_3] = 15;
        var_14 = var_2;
        var_15 = (-1990592423 || 6);
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_16 = 121;
                                var_17 = (1 + 28);
                                arr_23 [1] [i_8] [i_7] [7] [i_5] [i_5] [i_4] = 1587179197163126135;
                                var_18 = (max(var_18, (max((arr_6 [1] [i_7 - 1] [i_7] [i_5]), (~2509023705092703353)))));
                            }
                        }
                    }
                    var_19 = (((((-27 == ((1 ? var_3 : (arr_14 [i_4] [5])))))) << (arr_21 [i_5])));
                    var_20 = min(((17 ? 32762 : 82)), ((-((1222495871 ? var_8 : 1295819829)))));
                    arr_24 [i_4] [i_4] = ((((((max(32770, (arr_20 [i_6] [i_5] [i_6])))) ? (max(var_8, 18446744073709551615)) : ((min(35336663, -61))))) / 894416900));
                }
            }
        }
        arr_25 [1] = (arr_22 [i_4] [i_4] [i_4] [8] [i_4] [i_4] [i_4]);
        arr_26 [i_4] = (1295819815 || 3352567719241398643);

        /* vectorizable */
        for (int i_9 = 2; i_9 < 21;i_9 += 1) /* same iter space */
        {
            arr_30 [i_9 - 1] = ((-(((arr_27 [i_4]) + var_8))));
            var_21 ^= ((188 ? (arr_0 [i_4] [i_9 + 1]) : (arr_12 [i_4] [i_9])));
        }
        for (int i_10 = 2; i_10 < 21;i_10 += 1) /* same iter space */
        {
            var_22 -= ((17 ? 18446744073709551593 : 2893392682));
            arr_33 [i_10] = ((((((arr_7 [1] [i_10 + 1]) | var_3))) ? ((((arr_7 [9] [i_10 - 1]) >= var_6))) : (arr_7 [i_10] [i_10 - 1])));
            arr_34 [i_10] [i_4] [i_10] = ((((((arr_16 [i_10 - 2] [i_10 - 2] [i_10 - 1]) ? (max(-9223372036854775805, -117)) : (((((arr_14 [i_4] [i_4]) == 45356711))))))) ? (min((arr_22 [i_10 - 1] [i_10 - 2] [i_10 + 1] [i_10 - 1] [i_10 + 1] [17] [i_10]), (arr_13 [i_10 - 1] [i_10]))) : ((((-118 + 2147483647) << (((-65 + 72) - 7)))))));
            arr_35 [i_10] [i_10] = ((~(arr_8 [i_10])));
        }
    }
    var_23 = ((var_1 ? 4294967295 : 13703519015592456204));
    #pragma endscop
}
