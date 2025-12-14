/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_15 = (min(var_15, (((var_4 ? 15698330459520470703 : var_2)))));
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_16 = (min(var_16, (~32548)));
                            arr_13 [i_0] [i_2] [i_0] [i_0] = (((var_4 != var_1) && var_1));
                            var_17 = (min(var_17, (((var_5 ? (arr_12 [i_3] [i_0 + 2]) : 3029689514)))));
                            var_18 ^= (!var_3);
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_19 = (~var_13);
                            arr_23 [i_0] [i_1 + 1] [i_7] = (((arr_11 [i_5] [i_1] [i_5] [i_6] [i_5] [i_7 + 1] [i_0 + 2]) ? (arr_11 [i_0] [i_1] [i_7 + 1] [i_7] [i_7] [i_7 - 1] [i_0 + 2]) : 7));
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_20 = (var_7 - -var_8);
            arr_27 [i_0] [i_0] [i_8] = (arr_2 [i_0]);
        }
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            arr_39 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] = (((arr_5 [i_0] [i_0] [i_0]) ^ var_10));
                            var_21 ^= 24292;
                        }
                    }
                }
                var_22 ^= var_13;
                arr_40 [i_0] [i_0] [i_9] [i_10] = (var_12 != var_5);
            }
            for (int i_13 = 4; i_13 < 11;i_13 += 1)
            {
                arr_44 [i_0] [i_0] [i_0] = var_11;
                arr_45 [i_0] [i_0] [i_0] = -247;
                var_23 -= (var_10 < -2504760358700447567);
                var_24 *= 24292;
                var_25 -= 1306937076;
            }
            var_26 = (max(var_26, (((~(arr_6 [0] [i_0 - 1] [i_0] [i_9 - 1]))))));
            var_27 ^= ((24292 ? 2246979697429856783 : 2504760358700447552));
            arr_46 [i_0] = 2988030220;
        }
        arr_47 [i_0] [4] |= ((!((((arr_6 [6] [6] [i_0 + 2] [i_0 + 2]) ^ (arr_8 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [8]))))));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            for (int i_15 = 3; i_15 < 8;i_15 += 1)
            {
                {
                    var_28 = (((~var_9) | (arr_30 [i_0 + 1] [i_0])));
                    var_29 = -1;
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 12;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 12;i_17 += 1)
                        {
                            {
                                var_30 = var_0;
                                arr_60 [i_0] [i_14] [2] [i_0] [i_17] = ((!(arr_16 [i_0] [i_0 + 1] [i_14] [i_15 - 2])));
                            }
                        }
                    }
                    var_31 += ((-(arr_58 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_18 = 4; i_18 < 11;i_18 += 1)
    {
        var_32 = 1;
        var_33 -= var_11;
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 23;i_19 += 1)
    {
        var_34 = (var_7 > var_1);
        var_35 = (~41276);
        var_36 = (min(var_36, (15551843080671766998 + 0)));
        var_37 = (min(var_37, (((1306937064 >> (-1 + 14))))));
    }
    for (int i_20 = 1; i_20 < 17;i_20 += 1)
    {
        arr_71 [i_20] [i_20] = ((((((((var_9 ? 247 : (arr_66 [i_20])))) ^ var_0))) ? ((max(0, var_0))) : ((((var_7 ^ -9025128023366778781) ^ (arr_65 [i_20 + 2]))))));
        var_38 ^= 115;
        arr_72 [i_20] = var_7;
        var_39 *= (var_13 ? (((~var_1) ? 2988030209 : (arr_67 [i_20 + 1] [i_20 - 1]))) : (((((max(-2012138762, var_6))) ? ((24259 ? (arr_70 [i_20]) : (arr_65 [i_20]))) : ((~(arr_67 [i_20] [i_20])))))));
    }
    #pragma endscop
}
