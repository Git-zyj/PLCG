/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] |= (((arr_0 [i_0]) | var_11));
        arr_3 [5] |= ((-(arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 4; i_2 < 8;i_2 += 1)
        {
            var_20 += ((!(arr_0 [i_2 - 4])));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 6;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_21 += (arr_5 [i_2 - 3]);
                        var_22 = (min(var_22, (((!(arr_10 [i_2] [i_2] [i_2 + 1] [i_3 + 3]))))));
                    }
                }
            }
        }
        var_23 *= (((arr_4 [i_1]) << (((!(arr_0 [i_1]))))));
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
    {
        arr_16 [i_5] [i_5] &= (((((var_15 ? (max(0, 3832131694)) : ((min(1403636424, (arr_5 [6]))))))) ? 105 : 1577386934577415710));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    var_24 += (((-1403636448 && 462835602) < (((((arr_12 [i_7]) + 2147483647)) << (arr_1 [i_5])))));
                    var_25 = (min(var_25, (((462835585 < (min((~2189749761901258846), var_3)))))));
                }
            }
        }
        var_26 += (arr_11 [i_5] [i_5]);
        var_27 = (min(var_27, (((((max((((~(arr_10 [i_5] [i_5] [i_5] [i_5])))), (max((arr_4 [i_5]), var_17))))) ? -var_19 : (arr_0 [i_5]))))));

        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            var_28 ^= (max(1092283940, (min((((-69 ? (arr_4 [i_8]) : -69))), var_5))));

            /* vectorizable */
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                var_29 &= 1;
                var_30 ^= (-19 || -4928150341408368141);
                var_31 += var_18;
            }
            /* vectorizable */
            for (int i_10 = 2; i_10 < 9;i_10 += 1)
            {
                var_32 = (min(var_32, (((var_16 ? ((~(arr_6 [i_8]))) : 1)))));
                arr_28 [i_5] [i_8] [i_8] |= (-12 != var_1);
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        {
                            var_33 += ((57 ? ((var_16 ? var_19 : (arr_15 [i_10] [9]))) : (var_4 + var_13)));
                            var_34 ^= ((!(var_14 != 4688564561106978658)));
                            var_35 = (min(var_35, (!23346)));
                        }
                    }
                }
                var_36 &= ((var_13 ? ((var_19 ? var_11 : var_9)) : (arr_26 [i_10 - 1] [i_8] [i_5] [i_5])));
            }
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                var_37 ^= ((((-1403636399 ? -1403636432 : 1))) ? (-2147483647 - 1) : ((~(!var_17))));
                var_38 ^= (max(var_1, (arr_36 [i_13] [i_13] [i_13])));
                var_39 *= ((!((1 < (arr_10 [i_5] [i_5] [i_8] [i_13])))));
                var_40 = (min(var_40, ((max(var_19, (max(var_18, 2351043099)))))));
            }
        }
        for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
        {
            var_41 &= (((((-(arr_19 [i_14] [i_5] [i_5] [i_14])))) + (min(1, 418782389))));
            arr_41 [i_5] |= var_1;
            var_42 = (min(var_42, (arr_17 [i_14] [i_14] [i_14])));
        }
    }
    for (int i_15 = 0; i_15 < 0;i_15 += 1)
    {
        var_43 = (max(var_43, ((max((((arr_43 [i_15] [i_15 + 1]) ? (arr_44 [7] [i_15 + 1]) : ((var_4 ? var_15 : 144080003703767040)))), ((min(var_5, (arr_43 [i_15] [i_15 + 1])))))))));

        for (int i_16 = 0; i_16 < 25;i_16 += 1)
        {
            arr_47 [i_15] [i_16] |= var_16;
            var_44 |= 790618576;
        }
    }
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 18;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 18;i_18 += 1)
        {
            for (int i_19 = 4; i_19 < 17;i_19 += 1)
            {
                {
                    var_45 -= ((((-6045737623936832020 + (-2147483647 - 1))) <= ((((arr_42 [i_19 - 1]) / var_10)))));
                    var_46 &= 8067923670213870304;
                }
            }
        }
    }
    var_47 ^= (((((-((var_3 ? var_11 : 3097884206))))) ? var_16 : 5786990390910660869));
    #pragma endscop
}
