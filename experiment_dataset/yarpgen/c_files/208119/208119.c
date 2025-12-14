/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] &= var_13;
                            arr_14 [i_0] [12] [i_2] [i_3] = (!4294967293);
                            arr_15 [i_3] [i_3] = (((((min((arr_5 [14] [i_2]), 4080361446340793309)) ^ ((((arr_5 [i_0] [i_0]) & var_1))))) & 3154703294));
                        }
                    }
                }
                arr_16 [i_1] [i_0] = ((0 != var_2) <= (min(4294967290, -89)));
            }
        }
    }

    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_17 ^= (arr_18 [14] [14]);
                        var_18 = ((~(arr_25 [i_4] [i_4] [i_6 + 1] [i_7])));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_8 = 2; i_8 < 17;i_8 += 1)
        {
            var_19 = (((((arr_24 [13] [i_4 - 1] [i_4]) ? (arr_22 [i_4] [13]) : 3154703294)) != ((var_5 ? 59135 : 15267982042388688873))));
            var_20 = var_13;
            var_21 &= (var_0 != 1140264001);
            arr_31 [i_4] [i_4] [i_8 - 1] = ((-(arr_18 [i_4] [i_4 - 1])));
        }
        for (int i_9 = 2; i_9 < 18;i_9 += 1)
        {
            arr_35 [i_4] [i_4] = (!4294967293);
            var_22 |= (max(20165, (max(4080361446340793309, 0))));
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 18;i_12 += 1)
                    {
                        {
                            var_23 = var_6;
                            var_24 = (max(var_24, 0));
                            var_25 += 123;
                        }
                    }
                }
            }
            var_26 = (max(var_26, 1140264014));
        }
        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            arr_48 [i_4] [i_4] [i_13] = (max(6, (((524032 && (((var_14 ? 4181784028025153838 : (arr_30 [i_4 - 1] [i_4])))))))));
            arr_49 [0] [3] [i_4] = arr_43 [i_4] [i_13] [i_4] [14] [i_4 - 1] [i_13];
        }
        /* vectorizable */
        for (int i_14 = 1; i_14 < 16;i_14 += 1)
        {
            arr_54 [i_4] [i_14 + 1] [1] |= ((((6 ^ (arr_25 [i_4] [0] [i_4] [i_14 + 3]))) | (arr_47 [i_4] [i_4] [i_14 + 2])));
            arr_55 [i_4 - 1] [i_4] = var_7;
            arr_56 [i_4] [i_4] [i_14 - 1] = (((arr_17 [i_4]) ? ((-(arr_23 [i_14] [i_4] [i_14]))) : (((28222 - (arr_45 [i_4] [i_4] [i_4 - 1]))))));
        }
        arr_57 [i_4] = ((!((((arr_51 [i_4]) ? var_3 : (arr_51 [i_4]))))));
    }
    for (int i_15 = 0; i_15 < 20;i_15 += 1)
    {
        var_27 = var_7;
        arr_61 [i_15] = ((-((((((arr_58 [i_15]) ? (arr_59 [i_15]) : (arr_59 [i_15])))) ? ((4294967293 ? (arr_59 [i_15]) : var_4)) : ((max(var_14, (arr_58 [i_15]))))))));
        arr_62 [i_15] [i_15] = (min(((1 ? 49589 : 28222)), (((((4294967295 ? (arr_60 [i_15] [i_15]) : (arr_58 [17])))) ? var_13 : (-2050639472 && var_16)))));
        var_28 = (max(var_28, ((max((arr_58 [i_15]), ((-(arr_58 [i_15]))))))));
        arr_63 [i_15] [i_15] = (max((((arr_58 [i_15]) >> ((var_1 ? (arr_59 [i_15]) : var_5)))), (((+((max((arr_59 [i_15]), 1))))))));
    }
    for (int i_16 = 0; i_16 < 11;i_16 += 1)
    {
        var_29 = 2919887806;
        arr_68 [i_16] = var_16;
    }
    var_30 = ((var_13 ? 15267982042388688879 : ((min((~28222), 1)))));
    #pragma endscop
}
