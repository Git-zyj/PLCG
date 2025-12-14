/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223642
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_13 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        var_14 ^= arr_9 [i_3];
                        var_15 *= arr_2 [i_1];
                    }
                } 
            } 
            var_16 = ((/* implicit */unsigned int) max((var_16), (arr_1 [i_0])));
            var_17 = arr_4 [i_0] [i_0];
        }
        var_18 = arr_10 [i_0] [i_0] [i_0] [4U];
        var_19 = ((/* implicit */signed char) arr_8 [i_0] [(signed char)8] [i_0]);
    }
    for (unsigned int i_4 = 3; i_4 < 11; i_4 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            var_20 = arr_7 [i_5];
            var_21 = arr_8 [i_5] [i_5] [8U];
        }
        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            arr_17 [i_6] [i_6] = arr_7 [i_6];
            var_22 += arr_7 [4U];
        }
        var_23 += arr_1 [14U];
        arr_18 [i_4 + 1] [i_4] = ((/* implicit */signed char) arr_10 [10U] [i_4] [i_4 - 1] [18U]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
        {
            var_24 = ((/* implicit */signed char) arr_2 [i_4 - 2]);
            var_25 ^= arr_10 [i_4] [i_4] [i_4] [4U];
        }
        /* vectorizable */
        for (unsigned int i_8 = 1; i_8 < 9; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_9 = 3; i_9 < 9; i_9 += 4) 
            {
                for (unsigned int i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    {
                        arr_30 [i_4] [i_4] [i_4] [i_4] [i_9] [i_4 - 2] = ((/* implicit */signed char) arr_25 [i_9] [i_8 + 3] [i_9]);
                        /* LoopSeq 3 */
                        for (unsigned int i_11 = 1; i_11 < 9; i_11 += 1) 
                        {
                            arr_35 [i_4] [i_4 - 2] [i_4] [11U] [i_9] = ((/* implicit */unsigned int) arr_20 [i_4]);
                            var_26 = ((/* implicit */unsigned int) arr_20 [i_11]);
                            arr_36 [i_4] [i_4] [i_8] [i_9] [i_8] [i_9] = arr_23 [i_9] [i_11 + 3] [i_9];
                            arr_37 [i_9] = arr_5 [i_8] [i_8] [i_8];
                        }
                        for (unsigned int i_12 = 2; i_12 < 10; i_12 += 3) 
                        {
                            arr_41 [6U] [i_9 + 2] [i_9] [11U] [i_9] [i_8] [i_10] = ((/* implicit */unsigned int) arr_34 [i_4] [i_10]);
                            arr_42 [i_4] [i_4] [i_4] [i_9] [i_4 + 1] = arr_33 [i_4] [i_8] [i_8 + 1] [i_9] [i_8 + 1] [i_9] [i_12];
                            var_27 |= arr_31 [i_4] [i_8] [i_10] [i_10] [i_10];
                        }
                        for (unsigned int i_13 = 0; i_13 < 12; i_13 += 3) 
                        {
                            var_28 = arr_31 [i_4] [i_4] [i_4] [i_9] [i_4];
                            var_29 = ((/* implicit */signed char) arr_33 [i_4] [i_8] [i_9] [i_10] [i_8] [i_9] [9U]);
                        }
                    }
                } 
            } 
            arr_45 [i_4] [i_8] [7U] = arr_26 [i_4] [10U] [i_8] [i_8];
        }
        for (unsigned int i_14 = 0; i_14 < 12; i_14 += 1) 
        {
            arr_48 [6U] [i_14] = arr_2 [i_4];
            /* LoopSeq 1 */
            for (unsigned int i_15 = 3; i_15 < 10; i_15 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_16 = 0; i_16 < 12; i_16 += 4) 
                {
                    for (signed char i_17 = 0; i_17 < 12; i_17 += 2) 
                    {
                        {
                            var_30 -= arr_49 [i_15 - 3] [i_17];
                            arr_55 [6U] [i_14] [i_15] [i_15] [i_14] [i_14] = ((/* implicit */unsigned int) arr_24 [i_14] [0U] [0U]);
                            arr_56 [i_15] [i_14] [i_14] = arr_26 [i_4] [i_15] [i_15 - 3] [i_4];
                            var_31 = ((/* implicit */unsigned int) min((var_31), (arr_25 [i_17] [i_17] [i_15])));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned int i_18 = 2; i_18 < 11; i_18 += 4) 
                {
                    arr_59 [i_4] [i_15] [i_15 - 1] [i_18] = ((/* implicit */signed char) arr_26 [11U] [i_15] [i_4 - 1] [i_18]);
                    var_32 = ((/* implicit */signed char) arr_52 [i_18]);
                }
                for (unsigned int i_19 = 0; i_19 < 12; i_19 += 2) /* same iter space */
                {
                    var_33 = ((/* implicit */unsigned int) arr_9 [i_15]);
                    var_34 = arr_50 [(signed char)10] [(signed char)10] [i_14];
                }
                for (unsigned int i_20 = 0; i_20 < 12; i_20 += 2) /* same iter space */
                {
                    var_35 = ((/* implicit */signed char) arr_60 [i_15]);
                    var_36 = ((/* implicit */signed char) min((var_36), (arr_16 [i_4])));
                    var_37 += arr_29 [i_20];
                    var_38 = arr_33 [i_4] [i_4 - 1] [i_14] [i_15] [i_14] [i_15] [i_20];
                    var_39 = ((/* implicit */signed char) arr_60 [i_15]);
                }
                /* vectorizable */
                for (unsigned int i_21 = 0; i_21 < 12; i_21 += 1) 
                {
                    var_40 = arr_0 [i_4];
                    /* LoopSeq 4 */
                    for (unsigned int i_22 = 2; i_22 < 10; i_22 += 4) 
                    {
                        arr_73 [i_4 - 2] [i_14] [i_15] [i_4 - 2] [i_4 - 2] = ((/* implicit */signed char) arr_29 [i_15]);
                        var_41 = arr_29 [i_15];
                        arr_74 [i_22] &= arr_53 [4U] [i_14] [i_15] [i_21] [i_15];
                        var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) arr_16 [i_4]))));
                        arr_75 [i_4] [i_4] [i_4] [i_15] = ((/* implicit */signed char) arr_49 [i_14] [i_14]);
                    }
                    for (signed char i_23 = 0; i_23 < 12; i_23 += 4) /* same iter space */
                    {
                        var_43 = ((/* implicit */signed char) arr_1 [i_15 + 2]);
                        arr_78 [i_4 - 3] [i_14] [i_15] [i_21] [i_14] = ((/* implicit */unsigned int) arr_12 [i_4] [i_14]);
                    }
                    for (signed char i_24 = 0; i_24 < 12; i_24 += 4) /* same iter space */
                    {
                        arr_82 [i_4] [i_15] = arr_69 [i_4] [i_4] [i_15] [i_4] [i_21] [i_15];
                        var_44 = arr_61 [10U] [i_14] [i_15];
                    }
                    for (unsigned int i_25 = 0; i_25 < 12; i_25 += 2) 
                    {
                        var_45 = arr_64 [i_15] [i_14];
                        arr_85 [i_15] = arr_49 [i_21] [i_15];
                        var_46 = arr_10 [i_4 + 1] [i_14] [i_25] [i_15];
                        arr_86 [i_25] [i_14] [i_15] [i_25] [i_25] |= ((/* implicit */signed char) arr_25 [i_25] [8U] [i_25]);
                        var_47 -= arr_29 [i_25];
                    }
                    var_48 = arr_13 [i_4];
                }
            }
            var_49 = arr_60 [4U];
        }
        arr_87 [i_4] &= arr_14 [i_4] [i_4] [i_4];
    }
    /* LoopNest 2 */
    for (unsigned int i_26 = 0; i_26 < 20; i_26 += 1) 
    {
        for (unsigned int i_27 = 0; i_27 < 20; i_27 += 3) 
        {
            {
                var_50 = ((/* implicit */unsigned int) max((var_50), (arr_10 [i_27] [i_27] [i_27] [8U])));
                var_51 = ((/* implicit */unsigned int) arr_6 [i_26]);
            }
        } 
    } 
    var_52 = var_3;
}
