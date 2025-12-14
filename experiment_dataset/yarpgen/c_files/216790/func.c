/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216790
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
    var_11 = ((/* implicit */unsigned char) ((long long int) min((((/* implicit */unsigned int) var_5)), (var_1))));
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_1 [i_1])), (var_5)))) : (min((((/* implicit */unsigned int) arr_10 [i_3 - 1] [(_Bool)1] [(unsigned char)2] [(signed char)0] [6LL])), (var_1)))))) * (((((/* implicit */_Bool) arr_2 [i_2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_1 [i_0]), (var_3))))) : (((long long int) arr_4 [i_0] [(_Bool)1]))))));
                        arr_13 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)253)) ? (1529768615U) : (1529768607U))));
                    }
                } 
            } 
            arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [i_0 + 1])), (2765198681U)))) ? (((/* implicit */int) arr_3 [i_0 - 2])) : (((/* implicit */int) max((arr_3 [i_0 + 1]), (arr_3 [i_0 - 1]))))));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) arr_3 [i_0 - 3]))));
            arr_17 [8] [9U] = var_10;
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                arr_21 [(short)5] [i_5] [i_0] = ((/* implicit */unsigned int) ((arr_20 [i_0] [i_0 - 4] [i_0]) ? (((/* implicit */int) arr_20 [i_5] [i_4] [i_0])) : (((/* implicit */int) arr_20 [i_0 - 3] [i_4] [(_Bool)1]))));
                arr_22 [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_0] [i_0 - 4] [(signed char)8] [i_4])) * (((/* implicit */int) arr_15 [i_0] [i_0 - 4] [i_5]))));
            }
            var_14 -= ((/* implicit */_Bool) ((arr_12 [i_0 + 1] [i_4]) ? (((unsigned int) (_Bool)1)) : (((var_6) << (((3673747947U) - (3673747931U)))))));
        }
        for (long long int i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                var_15 = ((/* implicit */unsigned char) (((((~(((/* implicit */int) ((signed char) arr_11 [i_7] [i_7] [i_7] [i_6]))))) + (2147483647))) << (((/* implicit */int) ((signed char) (!(arr_24 [i_0] [i_0])))))));
                var_16 = ((/* implicit */long long int) arr_16 [i_7] [(_Bool)1] [(_Bool)1]);
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 8; i_9 += 2) 
                {
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_33 [i_0 + 1] [i_6] [i_8] [i_9 + 1] [i_6] [i_10 - 1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_2 [i_0 - 3] [i_9 + 3])))) == (((((((/* implicit */_Bool) arr_23 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0]))) : (var_7))) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3))))))));
                            arr_34 [(unsigned short)10] [i_0 - 2] [(unsigned short)3] [i_0 - 2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) var_5)) >= ((~(min((var_8), (((/* implicit */unsigned int) arr_8 [i_8] [i_9 - 1] [i_8]))))))));
                        }
                    } 
                } 
                var_17 ^= ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_10)) << (((arr_7 [i_0 - 4] [(unsigned char)9] [i_0 - 1] [i_0 - 1]) + (8184684101650339258LL))))));
                var_18 *= ((/* implicit */unsigned char) arr_15 [i_0 - 4] [i_0 - 1] [i_0 - 2]);
                var_19 = ((/* implicit */_Bool) ((((_Bool) ((((/* implicit */_Bool) arr_25 [(short)1])) ? (arr_23 [(unsigned char)5] [(unsigned char)5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_0 - 4] [i_6] [i_6] [i_8])))))) ? (((arr_26 [i_0 - 2] [i_0 - 2]) ? (((/* implicit */int) arr_26 [i_0 - 2] [i_0 - 1])) : (((/* implicit */int) arr_26 [i_0 - 3] [i_0 - 4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [(unsigned short)5])) : (((/* implicit */int) var_2))))))))));
            }
            for (long long int i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                var_20 ^= (!(((/* implicit */_Bool) (short)5504)));
                arr_37 [i_11] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)0)) + (max(((+(((/* implicit */int) arr_27 [i_0] [i_0 - 4] [i_0])))), (((/* implicit */int) (unsigned short)65511))))));
            }
            for (short i_12 = 4; i_12 < 8; i_12 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    arr_46 [i_0] [i_0] [i_12] [i_13] [i_6] &= ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_31 [i_0 - 1] [i_12] [i_13]) && (((/* implicit */_Bool) arr_3 [i_0]))))) == (((/* implicit */int) (short)-16384))));
                    var_21 -= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_6] [i_12 - 2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_10 [i_0 - 1] [i_6] [i_12 - 3] [i_13] [(short)5])))));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_22 ^= ((/* implicit */unsigned char) (unsigned short)18292);
                    var_23 = ((/* implicit */short) ((var_9) ? (((arr_30 [i_12 + 2] [i_12 - 1] [i_12 - 4] [i_0 - 3]) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_12 + 2] [i_12 - 1] [i_12 - 4] [i_0 - 3]))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_12] [i_12 - 3] [i_12] [i_12]))))) ? (min((((/* implicit */unsigned int) (unsigned short)21)), (arr_47 [(unsigned char)8] [i_6] [i_6] [i_6] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_26 [i_14] [i_0]))))))));
                    /* LoopSeq 2 */
                    for (int i_15 = 2; i_15 < 9; i_15 += 3) 
                    {
                        var_24 |= ((/* implicit */unsigned long long int) ((int) 1435292500));
                        arr_54 [i_6] [i_15 + 2] = ((/* implicit */unsigned int) arr_49 [i_0] [i_6] [i_12 + 2] [i_6] [i_15 - 1] [i_6]);
                        var_25 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_23 [i_14] [i_14])))) & (((unsigned int) ((((/* implicit */_Bool) arr_25 [i_0])) ? (((/* implicit */int) arr_16 [i_12] [i_0] [i_0])) : (var_5))))));
                    }
                    for (signed char i_16 = 1; i_16 < 9; i_16 += 3) 
                    {
                        var_26 = ((/* implicit */signed char) min((max((3318375967U), (arr_38 [i_12 + 3]))), (((/* implicit */unsigned int) (signed char)-105))));
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((unsigned short) ((var_7) >= (((((/* implicit */_Bool) arr_8 [(short)2] [(short)10] [(short)10])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))))));
                        arr_59 [i_16 - 1] [i_14] [i_12] [i_6] [(unsigned char)4] = ((/* implicit */int) arr_16 [(unsigned char)0] [i_14] [i_0 - 2]);
                        var_28 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2765198709U)) ? (1529768594U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) * (arr_39 [i_0 - 1] [i_6] [i_0 - 2])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 - 3] [i_0 - 3] [i_12 + 2] [i_14] [i_12 + 2]))) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_14] [i_16 - 1])) : (arr_48 [i_6] [i_14] [i_12] [i_6] [i_6] [i_0])))))));
                        arr_60 [i_6] [i_14] [i_12 - 4] [i_14] [i_16 + 1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535)));
                    }
                    var_29 |= ((/* implicit */unsigned char) (~(1435292512)));
                }
                var_30 = ((/* implicit */_Bool) ((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [i_0] [10U] [i_12] [i_6]))))))));
                var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_5))) * (((((/* implicit */_Bool) arr_41 [i_0 + 1] [i_12 + 2] [i_12 + 2] [i_12 + 3])) ? (arr_41 [i_0 - 3] [i_12 - 4] [i_12] [i_0 - 3]) : (arr_41 [i_0 - 3] [i_12 - 2] [i_12] [i_0 - 2]))))))));
                /* LoopNest 2 */
                for (unsigned char i_17 = 0; i_17 < 11; i_17 += 1) 
                {
                    for (unsigned int i_18 = 0; i_18 < 11; i_18 += 2) 
                    {
                        {
                            arr_68 [i_18] [i_17] [i_12] [i_6] [i_0] = ((/* implicit */short) ((unsigned short) arr_16 [i_0 - 1] [i_0 + 1] [i_12 + 3]));
                            arr_69 [i_17] [i_17] [i_6] [i_6] [i_0 - 3] = ((/* implicit */unsigned int) ((long long int) arr_27 [i_12 - 2] [i_12 + 3] [i_12 + 2]));
                            arr_70 [i_18] [i_12 - 1] [i_12 - 1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((var_10) ? (arr_7 [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0 - 4]) : (arr_7 [i_0 - 4] [i_0 + 1] [i_0 - 1] [i_0 - 3]))) == (arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 - 3])));
                        }
                    } 
                } 
            }
            var_32 = ((/* implicit */unsigned short) arr_1 [(unsigned char)7]);
            /* LoopNest 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (unsigned short i_20 = 0; i_20 < 11; i_20 += 1) 
                {
                    {
                        var_33 -= ((/* implicit */unsigned char) var_9);
                        var_34 = ((/* implicit */long long int) ((unsigned int) min((arr_24 [i_0 - 2] [i_0 - 3]), (arr_24 [i_0 - 3] [i_0 + 1]))));
                        var_35 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_10 [i_20] [i_0 - 3] [i_0 - 3] [i_0 - 4] [(_Bool)1])) & (((/* implicit */int) arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_0 - 2])))) & (((((/* implicit */int) (unsigned char)14)) | (((/* implicit */int) (short)27086))))));
                        arr_75 [i_0] [(unsigned short)5] [i_19] = ((((/* implicit */long long int) ((((/* implicit */_Bool) 1050983828U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-115))))) >= (var_7));
                    }
                } 
            } 
        }
        for (long long int i_21 = 0; i_21 < 11; i_21 += 1) /* same iter space */
        {
            arr_78 [(unsigned char)6] [i_21] [i_0] = ((/* implicit */signed char) arr_43 [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_21] [i_21] [i_21]);
            var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (-(arr_38 [i_0 - 4]))))));
        }
        var_37 = 1529768615U;
    }
    for (unsigned int i_22 = 1; i_22 < 13; i_22 += 3) 
    {
        var_38 = ((/* implicit */signed char) var_4);
        arr_83 [i_22] = ((/* implicit */short) arr_81 [i_22]);
    }
}
