/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247489
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
    var_18 = ((/* implicit */unsigned char) var_17);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) min(((+(((/* implicit */int) max(((unsigned char)182), (((/* implicit */unsigned char) arr_2 [i_0] [i_1]))))))), (((/* implicit */int) var_14)))))));
                                arr_14 [i_4] &= max((min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))))), ((unsigned char)106))), (((unsigned char) max((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_1 + 1] [(unsigned char)2] [i_3])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (signed char i_6 = 2; i_6 < 10; i_6 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) ((short) ((unsigned char) (signed char)-76))))));
                                arr_20 [i_1] [i_0] [i_2] [(signed char)2] [i_1] = ((/* implicit */short) arr_17 [(signed char)11] [i_2] [i_1 + 4]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) max(((short)1), (((/* implicit */short) arr_8 [i_0] [i_0]))));
        arr_21 [i_0] = arr_2 [(unsigned char)9] [(signed char)1];
        var_22 = arr_19 [i_0] [i_0] [i_0] [(unsigned char)1] [i_0];
    }
    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        arr_24 [(short)16] = ((/* implicit */unsigned char) arr_23 [i_7] [i_7]);
        arr_25 [i_7] = ((signed char) (+(((/* implicit */int) max((arr_23 [i_7] [i_7]), (((/* implicit */short) arr_22 [(unsigned char)2])))))));
        arr_26 [i_7] &= ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) (+(((/* implicit */int) var_6))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 13; i_8 += 2) 
    {
        arr_30 [i_8] = ((/* implicit */signed char) arr_28 [(signed char)10]);
        /* LoopSeq 3 */
        for (signed char i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_10 = 3; i_10 < 11; i_10 += 4) 
            {
                var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_33 [(signed char)10] [(signed char)10] [i_10 + 1] [(signed char)10]))));
                var_24 = ((/* implicit */unsigned char) ((short) (short)-12718));
            }
            arr_35 [(short)4] [(unsigned char)2] = ((/* implicit */short) (signed char)127);
            arr_36 [i_8] [(short)6] = ((/* implicit */short) ((unsigned char) arr_22 [i_8]));
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_8] [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_33 [i_8] [i_8] [(signed char)12] [i_9])) : (((/* implicit */int) arr_33 [i_8] [i_8] [(unsigned char)8] [i_8])))))));
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 13; i_11 += 2) 
            {
                for (signed char i_12 = 0; i_12 < 13; i_12 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_16))));
                        arr_42 [i_8] [i_8] [i_11] [i_11] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)38))));
                    }
                } 
            } 
        }
        for (short i_13 = 0; i_13 < 13; i_13 += 4) /* same iter space */
        {
            var_27 ^= ((/* implicit */short) arr_34 [(unsigned char)2] [(unsigned char)9] [(short)8]);
            /* LoopSeq 3 */
            for (unsigned char i_14 = 0; i_14 < 13; i_14 += 2) 
            {
                /* LoopSeq 3 */
                for (short i_15 = 0; i_15 < 13; i_15 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 4; i_16 < 12; i_16 += 1) 
                    {
                        arr_53 [i_13] [i_13] = ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) var_2)))));
                        arr_54 [(short)7] [i_8] [i_13] [i_14] [i_14] [i_8] [i_16] |= ((/* implicit */short) (+(((/* implicit */int) (unsigned char)178))));
                        arr_55 [(unsigned char)8] [i_16 - 1] [i_15] [i_15] [(unsigned char)9] [i_13] [i_8] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_45 [i_15] [i_13] [(unsigned char)7])) ? (((/* implicit */int) arr_48 [(unsigned char)2] [(unsigned char)2] [i_14])) : (((/* implicit */int) (unsigned char)38))))));
                    }
                    var_28 = arr_44 [i_8] [i_8];
                    var_29 = arr_48 [i_13] [i_14] [i_15];
                }
                for (unsigned char i_17 = 3; i_17 < 10; i_17 += 3) /* same iter space */
                {
                    var_30 ^= ((/* implicit */short) ((signed char) arr_50 [(short)12] [i_8] [i_17 + 2] [i_17 - 1] [i_17 + 2] [i_17 + 3]));
                    var_31 ^= ((/* implicit */unsigned char) (signed char)-127);
                    var_32 |= arr_45 [i_8] [(unsigned char)2] [i_8];
                }
                for (unsigned char i_18 = 3; i_18 < 10; i_18 += 3) /* same iter space */
                {
                    arr_61 [i_18] [i_13] [i_14] [i_18] [i_18 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_13] [(unsigned char)9] [i_18 + 2] [i_18 + 1])) ? (((/* implicit */int) arr_32 [i_8])) : (((/* implicit */int) arr_39 [i_18 + 2] [i_18 + 2] [i_14] [(short)2] [i_18]))));
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_43 [i_18 - 2] [i_18 - 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_43 [i_18 + 3] [i_18 - 3]))));
                }
                arr_62 [i_8] [i_8] [i_14] = arr_56 [i_8] [i_8] [i_8] [i_8];
                /* LoopSeq 1 */
                for (signed char i_19 = 0; i_19 < 13; i_19 += 1) 
                {
                    arr_65 [i_19] [i_19] [(unsigned char)11] [i_19] [i_19] [(unsigned char)10] = ((/* implicit */signed char) ((unsigned char) ((unsigned char) var_4)));
                    arr_66 [(unsigned char)4] [(unsigned char)4] [i_19] = ((/* implicit */unsigned char) (short)735);
                    arr_67 [(short)1] [(signed char)8] [i_19] [i_19] [i_8] [i_8] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_52 [i_8] [i_13] [(unsigned char)1] [i_19])))) ? ((+(((/* implicit */int) arr_50 [i_19] [(signed char)7] [i_13] [(unsigned char)5] [i_13] [(unsigned char)5])))) : (((/* implicit */int) (unsigned char)166))));
                }
            }
            for (signed char i_20 = 0; i_20 < 13; i_20 += 2) 
            {
                arr_71 [i_8] [(signed char)11] [i_20] = ((/* implicit */short) var_1);
                arr_72 [i_8] [i_8] [i_13] [(signed char)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)218))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1)))))));
            }
            for (unsigned char i_21 = 0; i_21 < 13; i_21 += 3) 
            {
                arr_76 [i_21] [(short)3] = ((/* implicit */short) (~(((/* implicit */int) arr_49 [i_8] [i_13]))));
                var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) arr_27 [i_13])))));
            }
            var_35 = ((/* implicit */unsigned char) var_7);
        }
        for (short i_22 = 0; i_22 < 13; i_22 += 4) /* same iter space */
        {
            var_36 += (short)-3470;
            arr_79 [(short)9] [i_22] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_75 [i_22] [i_22] [(short)0]))));
        }
    }
}
