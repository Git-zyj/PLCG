/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22601
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */short) (signed char)-41)), (((short) var_13))))) << (((((/* implicit */int) var_7)) - (25)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_19 = var_6;
            var_20 *= ((/* implicit */signed char) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0])) || (((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0])))))));
        }
        for (short i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            /* LoopSeq 4 */
            for (short i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                var_21 = ((/* implicit */short) (signed char)-96);
                arr_12 [i_0] = var_10;
            }
            for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                var_22 = ((/* implicit */signed char) (((+(((/* implicit */int) (short)127)))) / (((((/* implicit */int) arr_11 [i_0] [i_2])) - (((/* implicit */int) arr_2 [i_0] [i_2] [i_4]))))));
                arr_15 [i_4] [i_2] [i_0] = var_14;
                arr_16 [i_2] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0])))))));
                arr_17 [i_2] = (signed char)-28;
                var_23 = ((/* implicit */signed char) min((var_23), (arr_1 [i_2])));
            }
            for (short i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                arr_20 [i_5] [i_2] = ((/* implicit */short) ((((/* implicit */int) (short)-20804)) - (((/* implicit */int) min(((short)-20804), (arr_4 [i_0]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_6 = 1; i_6 < 8; i_6 += 4) 
                {
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_5] [i_0])))))));
                    var_25 = ((/* implicit */short) (~(((/* implicit */int) (short)20803))));
                }
                for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    var_26 = var_10;
                    arr_25 [i_7] = (signed char)44;
                    var_27 -= ((/* implicit */short) (~(((/* implicit */int) arr_4 [i_7]))));
                }
                /* LoopSeq 1 */
                for (signed char i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    var_28 -= ((/* implicit */short) min((((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_8]))))) - (((/* implicit */int) ((((/* implicit */int) (short)-17527)) <= (((/* implicit */int) (signed char)-126))))))), ((-(((/* implicit */int) (short)(-32767 - 1)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        var_29 ^= var_8;
                        var_30 = ((/* implicit */short) (((~(((/* implicit */int) var_12)))) / (((/* implicit */int) arr_3 [i_0] [i_8] [i_9]))));
                        arr_32 [i_8] = ((/* implicit */signed char) (+(((/* implicit */int) var_4))));
                    }
                    for (short i_10 = 1; i_10 < 9; i_10 += 1) 
                    {
                        var_31 = (short)2052;
                        var_32 = var_12;
                    }
                    arr_37 [i_8] [i_8] [i_8] [i_8] = ((short) ((((/* implicit */int) arr_10 [i_0] [i_0])) <= ((+(((/* implicit */int) var_10))))));
                    arr_38 [i_0] [i_8] [(signed char)5] [i_0] = arr_31 [i_0] [i_8] [i_5] [i_5] [i_5];
                    arr_39 [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_18 [i_8] [i_5])) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) arr_35 [i_2]))))))));
                }
            }
            for (signed char i_11 = 0; i_11 < 12; i_11 += 4) 
            {
                var_33 = ((/* implicit */short) (-(((/* implicit */int) arr_19 [i_0] [i_0] [i_11]))));
                var_34 = arr_3 [i_0] [i_2] [i_11];
                arr_43 [(short)5] [i_2] = ((/* implicit */short) max((((/* implicit */int) (short)-20818)), ((+(((/* implicit */int) (short)-10369))))));
            }
            arr_44 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_18 [i_0] [i_0]))) ? ((+(((/* implicit */int) var_13)))) : ((~(((/* implicit */int) arr_18 [i_0] [i_0]))))));
        }
        for (short i_12 = 0; i_12 < 12; i_12 += 3) 
        {
            var_35 += arr_30 [i_0] [i_0] [(signed char)3] [i_0] [i_0];
            var_36 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [(signed char)8] [i_12] [i_12] [i_12] [(signed char)4])) ? (((/* implicit */int) arr_21 [(short)7])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_12])))))));
            var_37 = max((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-124))))), (arr_22 [(signed char)3] [(signed char)3] [(short)5] [i_12]));
            var_38 = arr_13 [i_0] [i_12] [i_12];
            var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) (+(((/* implicit */int) var_10)))))));
        }
        var_40 &= ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7))))));
        var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) min((var_16), (((short) ((signed char) (signed char)-94))))))));
        /* LoopNest 2 */
        for (signed char i_13 = 1; i_13 < 11; i_13 += 4) 
        {
            for (short i_14 = 0; i_14 < 12; i_14 += 3) 
            {
                {
                    arr_53 [i_0] [i_14] [i_13] [i_14] = max((var_15), (arr_41 [i_0] [i_0] [i_14]));
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        for (signed char i_16 = 4; i_16 < 9; i_16 += 4) 
                        {
                            {
                                var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) max((((/* implicit */int) min((arr_8 [i_13 - 1] [i_13 - 1]), (arr_8 [i_13 - 1] [i_13 - 1])))), (((((/* implicit */_Bool) arr_8 [i_13 - 1] [i_13 - 1])) ? (((/* implicit */int) (short)-30883)) : (((/* implicit */int) arr_8 [i_13 - 1] [i_13 - 1])))))))));
                                var_43 = ((/* implicit */signed char) (short)-20804);
                                var_44 = var_15;
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_17 = 2; i_17 < 17; i_17 += 3) 
    {
        arr_61 [(signed char)16] [i_17] = var_13;
        /* LoopNest 2 */
        for (signed char i_18 = 0; i_18 < 19; i_18 += 4) 
        {
            for (signed char i_19 = 0; i_19 < 19; i_19 += 3) 
            {
                {
                    arr_66 [i_17 - 2] [i_19] [i_19] = arr_60 [i_17];
                    var_45 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_64 [i_19] [i_18] [i_19]))));
                }
            } 
        } 
        var_46 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_60 [i_17 + 1]))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)-29506)) ^ (((/* implicit */int) (short)-32759))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-1)))) : (((/* implicit */int) (short)960))))));
        /* LoopSeq 2 */
        for (signed char i_20 = 0; i_20 < 19; i_20 += 3) 
        {
            arr_69 [i_20] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) min(((short)28837), (arr_63 [i_17 - 1] [i_17 - 1])))) ? (((((/* implicit */_Bool) arr_63 [i_17 - 1] [i_17 - 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_63 [i_17 - 2] [i_17 + 1])))) : (((/* implicit */int) arr_63 [i_17 - 1] [i_17 + 2]))));
            arr_70 [i_20] [i_20] = ((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */short) var_2)), (arr_60 [i_17 + 1]))))));
            var_47 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)-22889)) ? (((/* implicit */int) (short)10797)) : (((/* implicit */int) min(((short)28994), (((/* implicit */short) (signed char)40)))))));
            var_48 = arr_64 [i_20] [i_17 + 1] [i_20];
        }
        for (short i_21 = 4; i_21 < 18; i_21 += 3) 
        {
            var_49 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_60 [i_17 + 2])) ? ((+(((/* implicit */int) arr_60 [(signed char)1])))) : (((/* implicit */int) arr_72 [i_17 + 1])))) <= (((/* implicit */int) var_15))));
            arr_73 [i_17] [i_21] = ((/* implicit */signed char) (+(((/* implicit */int) arr_71 [i_21 - 2] [i_17 + 2] [i_17]))));
            var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (short)4738)) <= ((~(((/* implicit */int) (short)21294))))))) | (((/* implicit */int) var_4)))))));
        }
        arr_74 [i_17] [i_17] = ((/* implicit */short) (+(((/* implicit */int) ((signed char) arr_65 [i_17 - 2] [i_17] [i_17] [i_17 + 1])))));
    }
    var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) (signed char)-2))));
    var_52 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-29157))));
}
