/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = (min(var_14, ((max(var_11, (~85))))));
        arr_2 [i_0] = (((((~(arr_0 [i_0] [i_0])))) && ((max((arr_1 [i_0]), (min(15574821513705846527, (arr_0 [i_0] [i_0]))))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                        {
                            arr_13 [9] = ((((min((!-86), (max(var_2, 2871922560003705088))))) ? ((-2871922560003705073 ? 2871922560003705111 : 78)) : var_6));
                            arr_14 [i_0] [i_0] [i_1] [i_0] [i_3] [1] = (min(((max(var_7, (max((arr_0 [i_1] [i_3]), (arr_4 [i_0] [i_2])))))), (((((var_11 ? (arr_3 [i_0] [i_0] [i_0]) : (arr_9 [22] [22] [i_2] [i_3] [i_4] [i_4])))) ? var_10 : ((255 ? var_6 : var_6))))));
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            var_15 *= ((-((-(min(var_2, var_8))))));
                            arr_17 [i_0] [i_1] [i_1] = ((!((((arr_5 [i_0]) ? 85 : (min(var_5, 2871922560003705065)))))));
                            var_16 += -91;
                            arr_18 [i_0] [i_1] [21] [i_0] = ((((max((((-26722 ? var_4 : 16))), ((var_8 ? 15574821513705846551 : 0))))) ? (arr_11 [i_0] [i_1] [i_2] [i_3] [i_5]) : var_11));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_17 = ((2533781534 && (arr_19 [i_0] [i_1] [i_2] [i_3] [i_6])));
                            var_18 ^= (arr_19 [i_0] [i_1] [15] [i_3] [11]);
                            arr_21 [i_0] [i_1] [i_3] = var_4;
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            arr_25 [i_0] [i_1] = ((((max((arr_22 [i_3]), -8202))) && 2871922560003705065));
                            arr_26 [i_0] [i_1] [i_1] [i_2] [i_0] [1] [i_7] = (arr_19 [i_0] [i_1] [i_2] [i_3] [i_7]);
                        }
                        var_19 *= (!var_0);
                        var_20 = (((max((max(18446744073709551615, -8093809571721211670)), 17)) << ((var_0 ? (((-1101752046096295380 && (arr_19 [i_3] [i_0] [i_2] [15] [i_0])))) : 11395))));
                        arr_27 [4] [i_1] [i_2] [i_3] = ((15574821513705846542 - (min(32512, 2871922560003705111))));
                    }
                }
            }
            arr_28 [i_0] [i_1] [i_1] = ((((86 ? (arr_8 [i_0]) : 32767))) && (arr_24 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]));
            arr_29 [i_1] |= (((127 != 3435316705) != (arr_3 [i_0] [i_1] [i_0])));
            var_21 = (min(var_21, (arr_23 [i_0] [i_0] [18] [18] [i_0] [i_0])));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_32 [i_0] [i_8] [2] = (min(2871922560003705097, ((((((15574821513705846550 ? var_1 : (arr_9 [i_8] [i_8] [i_8] [i_8] [i_0] [i_8])))) ? (min(var_4, var_2)) : ((max(var_7, var_7))))))));
            arr_33 [i_8] [i_8] [i_8] = (arr_22 [i_0]);
            var_22 = var_6;
        }
        var_23 |= (arr_11 [5] [i_0] [i_0] [i_0] [i_0]);
    }
    var_24 *= (max((min((max(var_9, var_0)), (max(var_0, var_8)))), (((((min(var_7, var_7))) ? var_8 : 20737)))));
    var_25 = ((((min(var_0, -5989185001795006366))) ? var_1 : (min((~2871922560003705088), var_4))));
    #pragma endscop
}
