/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((((var_10 ? var_10 : var_13))) ? (((var_3 ? var_5 : -8189777039972522933))) : ((var_10 ? var_0 : 8597304204391316297))))) ? (~var_7) : 9353343117592309291));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (0 * 6636953747057121860);
        var_15 += (0 ^ 0);
        arr_3 [i_0] = (arr_0 [i_0]);
        var_16 = (max(var_16, (((0 + (arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = 11;
        var_17 = (-31604 % 65535);
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_18 = (max(var_18, (arr_4 [i_2] [14])));
                    var_19 = (max(var_19, ((max((min((((arr_4 [i_2] [4]) ? var_6 : (arr_13 [i_2] [i_3] [i_4]))), ((((arr_11 [i_2] [i_2]) == 0))))), (var_8 || -661510545))))));
                }
            }
        }
        arr_14 [i_2] [5] = (arr_9 [i_2]);
        var_20 += (((((((arr_10 [i_2]) ? 661510541 : 785))) ? (arr_11 [i_2] [i_2]) : 63)));
        var_21 ^= ((((max((arr_9 [i_2]), (arr_11 [i_2] [i_2])))) ? ((((min((arr_11 [i_2] [i_2]), (arr_5 [i_2] [i_2]))) == (arr_5 [19] [i_2])))) : ((((min((arr_12 [2]), (arr_11 [i_2] [i_2])))) % (((arr_11 [i_2] [i_2]) ? (arr_7 [i_2]) : (arr_12 [6])))))));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    var_22 = (((arr_10 [i_5]) << (((~5871034913040697209) - 12575709160668854404))));
                    var_23 = (min(var_23, var_5));
                    var_24 = (arr_15 [i_5]);
                    arr_21 [i_5] [i_6] [i_7] [i_7] = ((2206476933068117428 * ((((!(arr_7 [i_6])))))));
                }
            }
        }
        arr_22 [i_5] = (((arr_18 [i_5] [i_5]) / ((((arr_17 [i_5]) | (arr_15 [9]))))));
        arr_23 [i_5] = (arr_20 [i_5] [i_5] [i_5] [i_5]);
        var_25 *= (((+(min((arr_18 [i_5] [i_5]), (arr_8 [i_5]))))) % (arr_9 [i_5]));

        for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
        {
            var_26 += ((((-(min(var_1, (arr_9 [i_5]))))) / (arr_9 [i_5])));
            arr_27 [i_8] = (((arr_10 [i_8]) ? 3930707664 : var_0));
            var_27 ^= ((((!(arr_12 [i_8])))));
            arr_28 [i_5] [i_8] [i_8] = ((-(((arr_25 [i_5]) * -1))));
            var_28 = (min(var_28, (arr_16 [i_5])));
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
        {
            arr_31 [i_5] [i_9] [i_9] = (max(((min((arr_12 [i_9]), (arr_12 [i_9])))), 33646));

            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                var_29 = 12493637945231397060;
                arr_35 [i_9] = (min(((2206476933068117428 ? (arr_11 [i_10] [i_5]) : (arr_25 [i_9]))), (((!(arr_17 [i_10]))))));
                var_30 += (((((((-127 + 8359) == (((arr_25 [i_5]) ? (arr_26 [1] [i_9] [i_10]) : 255)))))) == ((((arr_24 [i_5]) >= (arr_4 [i_5] [i_5]))))));

                for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                {
                    arr_38 [i_5] [i_9] [i_10] [i_11] = (arr_30 [i_5]);
                    arr_39 [i_5] [i_9] [i_10] [i_11] [i_11] = (arr_29 [i_5] [i_9]);
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                {
                    var_31 = (min(var_31, ((max(((((((arr_40 [i_9]) - 3761336296529918578)) > (((7501624577528843038 ? 255 : 8337)))))), (min((arr_15 [i_5]), 18446744073709551600)))))));
                    var_32 = (max(0, ((((min(64750, var_2)))))));
                    arr_42 [i_10] [i_9] [i_10] [i_9] [i_9] [i_12] = (((((((arr_29 [i_10] [i_10]) / var_1)))) ? (arr_7 [i_5]) : ((-(arr_17 [i_9])))));
                }
                var_33 &= (((arr_7 [i_10]) > 16));
            }
            for (int i_13 = 3; i_13 < 11;i_13 += 1)
            {
                var_34 = arr_34 [i_13 + 3] [i_13 + 3] [12];
                arr_46 [i_5] [i_9] [i_13] = ((var_7 ? ((-(arr_34 [i_13 + 3] [i_13 + 2] [4]))) : var_9));
            }
            arr_47 [i_9] [i_5] = var_7;
        }
    }
    var_35 = -5504828787846544277;
    var_36 ^= (min((min((var_7 / var_1), var_10)), 64764));
    #pragma endscop
}
