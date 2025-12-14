/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((!0), ((var_2 != (max(78, 17250990821412206211))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = (!(((~((max((arr_1 [i_0]), (arr_1 [i_0]))))))));
        var_13 = (max(var_13, (((-1 ? (((1195753252297345404 | 872070669) ? (arr_0 [i_0] [i_0]) : var_1)) : (((min(872070669, 7560)))))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] [1] = (92 % -1889);
        var_14 = (min(var_14, (((-44562 ? ((min(-1, (min(var_4, var_9))))) : var_3)))));

        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_15 [i_3] [i_3] [i_2] [i_3] = (((min((arr_9 [i_3 + 1] [i_2] [i_3]), (arr_9 [i_3 + 1] [i_2] [i_3 + 1]))) < var_4));
                        var_15 = (max(var_15, ((((0 && 872070669) ? ((~((0 ? var_2 : var_3)))) : var_0)))));
                    }
                }
            }
            arr_16 [i_2] |= ((((((arr_9 [i_2] [i_2] [i_1]) ? 3761243130 : (arr_9 [i_1] [i_2] [i_2])))) ? 0 : ((((-14752 && (arr_6 [i_1] [i_2])))))));
            var_16 -= ((-(((!var_5) ? (min((arr_2 [i_1]), (arr_0 [i_1] [i_2]))) : (((1 >> (61161 - 61159))))))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_25 [i_1] [i_2] [i_5] [i_6] = ((+((~((((arr_17 [i_6] [i_5] [i_2]) != (arr_21 [i_7]))))))));
                            var_17 = ((((!(3136855918 != 3422896627)))));
                            arr_26 [i_1] [i_2] [i_5] [i_2] [i_2] [i_7] = ((~(((arr_3 [i_6]) ? (arr_3 [i_1]) : (arr_3 [i_7])))));
                            var_18 = (min(var_18, ((((arr_23 [i_1] [5] [5] [i_1]) ? var_2 : ((var_0 ? var_7 : var_0)))))));
                        }

                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 14;i_8 += 1)
                        {
                            arr_31 [i_1] [i_2] [i_6] [i_8] = ((((arr_11 [i_1] [i_1] [i_5] [i_6] [i_1] [i_8]) | 16)) < 1);
                            var_19 -= (arr_13 [i_8] [i_8]);
                            arr_32 [i_8 + 2] [i_6] [i_5] [i_2] [i_1] = ((65535 << (3193 - 3185)));
                        }
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_20 = (max(var_20, (0 % -16451)));
                            var_21 = (min(var_21, (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1])));
                            arr_37 [i_9] [i_6] [i_5] [i_5] [i_1] [i_1] = (min(((max(1, 3176))), (~-var_7)));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
        {
            arr_40 [i_1] [i_1] [i_1] = 128;
            /* LoopNest 3 */
            for (int i_11 = 2; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        {
                            arr_47 [i_12] [i_12] [i_11] [i_11] [i_1] [i_1] = var_10;
                            arr_48 [1] [i_11] [i_11] [i_10] = 0;
                        }
                    }
                }
            }
            arr_49 [i_10] = 2879735808;
        }
    }
    for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
    {
        arr_52 [i_14] = ((((min((arr_27 [i_14] [i_14]), (min(1, (arr_24 [i_14] [i_14] [i_14] [i_14] [i_14])))))) ? (max((((-16023 + 2147483647) << (1 - 1))), (arr_14 [i_14] [i_14] [i_14] [i_14]))) : (~0)));
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                {
                    arr_57 [i_15] [i_15] = (arr_5 [i_14] [i_15] [i_16]);
                    var_22 = (max((3977 && 7965712248450955841), -var_5));
                }
            }
        }
        arr_58 [i_14] = (((((0 ? 2459577856 : (arr_43 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])))) ? (arr_0 [i_14] [i_14]) : (((((0 ? 11 : 213)))))));
    }
    #pragma endscop
}
