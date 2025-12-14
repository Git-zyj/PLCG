/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_20 = ((((min((arr_0 [i_0] [11]), 24386))) ? ((max((max(var_2, 33554424)), var_13))) : (((-9223372036854775806 / var_14) ? ((((arr_2 [i_0]) ? -13 : var_13))) : (arr_2 [i_0 + 1])))));
        arr_3 [8] [5] = (min(((min((arr_0 [i_0] [i_0]), var_12))), ((436292865 | (arr_0 [i_0] [i_0 + 1])))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_21 = (max(var_21, ((((arr_4 [i_1 + 2]) ? (arr_4 [i_1 + 1]) : (arr_2 [i_1 + 3]))))));

        for (int i_2 = 4; i_2 < 14;i_2 += 1)
        {
            var_22 = ((3 ? ((6144 ? var_15 : var_16)) : 7679));
            var_23 = (max(var_23, ((((arr_0 [i_1 - 1] [i_1 + 2]) << (35570 - 35564))))));
        }
        for (int i_3 = 1; i_3 < 14;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    {
                        arr_18 [1] [i_5] [i_5] [i_1] = (((((arr_9 [i_3 + 4] [i_5 - 1] [i_4 + 3]) + 2147483647)) << (((arr_4 [i_3]) - 3891864788))));
                        var_24 = (max(var_24, ((((arr_8 [i_3 + 2] [i_3 + 2] [i_5 + 1]) - (((arr_12 [i_1]) ? -9173044592000872682 : 1)))))));
                        var_25 &= (!0);
                        var_26 = ((3485605027 ? 2538082080 : 86));
                    }
                }
            }
            var_27 = (arr_2 [i_1 + 2]);
            var_28 = (((11727919725092273098 ? -15 : var_2)));
            var_29 = ((var_3 ? ((5 ? (arr_1 [i_1] [i_3]) : (arr_11 [i_1] [9] [9] [i_3]))) : ((((254 != (arr_2 [i_3 + 2])))))));
        }
        for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
        {
            var_30 = (max(var_30, ((((!var_12) <= (arr_1 [2] [i_1]))))));
            arr_21 [i_1] [8] &= 1287020693;
        }
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 15;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 16;i_9 += 1)
            {
                {
                    var_31 ^= (((var_1 - var_7) % (arr_27 [i_7] [i_9 + 1] [i_8 - 1])));
                    var_32 -= 2049979438;
                    arr_31 [i_8] [i_8] [i_8] = ((var_18 ? (arr_9 [i_7 - 1] [i_7 - 1] [i_9]) : (var_1 || var_14)));

                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_33 = ((((arr_20 [i_8] [i_8]) >= 3840)));

                        for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            var_34 *= (arr_22 [i_7 + 3]);
                            arr_36 [i_11] [i_9] [2] [i_9] [i_7] &= 312372881;
                        }
                        for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                        {
                            arr_40 [i_7] [i_8] [i_7] [i_9 + 2] [i_10] [i_8] = (arr_19 [i_9 - 2] [16]);
                            var_35 &= (3168557974 ? (arr_25 [i_9]) : ((((var_6 > (arr_5 [i_7] [i_7]))))));
                        }
                        arr_41 [i_7 + 1] [i_7] [i_8 - 1] [i_8] [i_9] [i_10] = ((1152921504606845952 ? (arr_28 [i_8 - 1] [i_9 + 2]) : 3909781149414377304));
                    }
                }
            }
        }
        var_36 -= ((-(((!(arr_32 [i_7] [12] [12] [i_7]))))));
    }
    var_37 = (((((3 > ((1984 ? 104 : 6))))) - var_10));
    var_38 ^= (((min(9006735562329207941, 1)) << (var_5 - 15014721473373566590)));
    #pragma endscop
}
