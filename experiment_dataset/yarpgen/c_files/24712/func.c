/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24712
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
    /* LoopSeq 3 */
    for (signed char i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) min((max((((/* implicit */long long int) arr_0 [i_0 + 3])), (var_7))), (max((arr_1 [i_0]), (((/* implicit */long long int) ((((/* implicit */int) var_0)) >> (((/* implicit */int) arr_0 [i_0])))))))));
        arr_4 [i_0] [i_0 - 2] = arr_1 [i_0];
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            var_12 = ((/* implicit */short) max((((/* implicit */signed char) var_4)), (arr_5 [i_1] [i_1] [i_1])));
            var_13 = ((/* implicit */signed char) min((((/* implicit */long long int) (((+(((/* implicit */int) arr_0 [i_0])))) / (((/* implicit */int) var_10))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) arr_2 [i_1 - 1] [i_0]))))), (arr_1 [i_1 + 1])))));
            /* LoopSeq 1 */
            for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                arr_11 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(0U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)52238), (((/* implicit */unsigned short) (_Bool)0)))))) : (562941363486720ULL)));
                /* LoopNest 2 */
                for (short i_3 = 2; i_3 < 13; i_3 += 2) 
                {
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 4294967295U)) | (34909494181888ULL)));
                            arr_18 [i_4] [i_2] [(_Bool)0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (var_2)))) ? (((/* implicit */int) max((min(((short)-6540), (((/* implicit */short) (unsigned char)250)))), (((/* implicit */short) (signed char)115))))) : (((((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 2])) / (((/* implicit */int) var_6))))));
                            arr_19 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_11))));
                            var_14 = ((((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_13 [i_0] [i_2 + 1] [i_2] [i_3 - 1])))) <= ((~(((/* implicit */int) arr_8 [i_2] [i_2 + 1] [i_2 - 1] [i_2 + 1])))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */short) max((1052173036U), (((/* implicit */unsigned int) (unsigned short)46687))));
                var_16 = ((/* implicit */long long int) max((var_16), (((((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)115))))), ((signed char)115)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 89451893)))))) >= (arr_6 [i_2 + 1]))))) : (min((var_7), (((/* implicit */long long int) arr_9 [i_0] [i_2 + 1] [i_1 + 1]))))))));
            }
            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 - 2]))) != (arr_1 [i_0 - 1]))))));
            var_18 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)32494)) ? (min((var_9), (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(unsigned short)13] [i_1 - 1] [i_0 - 1] [i_0 - 1] [(short)5] [i_0] [i_0 + 2]))))) < (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)2040), (((/* implicit */unsigned short) (unsigned char)128))))))));
        }
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_1 [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [(unsigned short)2] [i_0] [i_0 - 3])))))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        arr_24 [i_5] = ((/* implicit */unsigned long long int) (_Bool)1);
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                {
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (~(9223372036854775807LL))))));
                    arr_30 [i_5] [i_6 - 1] = ((/* implicit */_Bool) (unsigned short)5916);
                }
            } 
        } 
        var_21 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))) != (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))))) <= (((/* implicit */int) ((((/* implicit */int) arr_25 [i_5])) < (((/* implicit */int) (_Bool)1)))))));
    }
    for (signed char i_8 = 2; i_8 < 9; i_8 += 1) 
    {
        arr_35 [i_8] = ((/* implicit */unsigned int) min((1166699796), (((/* implicit */int) min((arr_12 [i_8] [i_8] [i_8 - 1]), (arr_7 [(unsigned short)14]))))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) min((((/* implicit */int) min((var_0), (arr_22 [i_8 - 1])))), (((((/* implicit */_Bool) arr_6 [i_8 + 1])) ? (((/* implicit */int) arr_13 [i_8] [i_8] [i_8 - 2] [i_8 - 2])) : (((/* implicit */int) max((arr_25 [i_8]), ((_Bool)1)))))))))));
    }
    /* LoopNest 3 */
    for (int i_9 = 1; i_9 < 9; i_9 += 2) 
    {
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned char) arr_2 [i_11] [i_11]);
                            var_24 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_37 [i_9 + 1])) & (((/* implicit */int) arr_37 [i_9 + 1]))))));
                            arr_51 [8LL] [(signed char)7] [i_12] [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_31 [i_13]))));
                            var_25 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_11] [i_10] [i_12] [i_12])) ? (((/* implicit */int) arr_9 [i_9] [i_9] [i_13])) : (((/* implicit */int) arr_22 [i_11]))))), (((arr_28 [i_9] [i_11] [i_11]) / (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_9] [i_9 + 2] [i_9] [i_12])) && (((/* implicit */_Bool) var_10)))))) : ((-(arr_42 [i_10 - 1] [i_12] [2] [i_12])))));
                        }
                        for (signed char i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
                        {
                            arr_56 [i_11] [(unsigned char)8] |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_16 [i_14] [i_12] [i_11] [i_10 - 1] [(_Bool)1] [i_9])), ((((((_Bool)1) && (((/* implicit */_Bool) (short)25712)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((+(arr_42 [i_14] [i_11] [i_10 - 1] [i_9])))))));
                            arr_57 [i_11] [i_14] [i_14] [i_12] [i_14] [i_12] [i_9] = ((/* implicit */long long int) (((((-(((/* implicit */int) (unsigned char)140)))) + (2147483647))) >> ((((~(((int) var_1)))) + (1021598317)))));
                            arr_58 [i_9] [i_10] [i_12] [(signed char)6] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_0)))))) * (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))))), (arr_50 [i_14] [i_12] [i_11] [i_10] [i_9]))))));
                        }
                        for (signed char i_15 = 0; i_15 < 11; i_15 += 3) /* same iter space */
                        {
                            var_26 = ((/* implicit */int) ((signed char) arr_49 [i_9 - 1] [i_12]));
                            var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-1))));
                            var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) var_0)))))) ? (((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) (_Bool)1))))) : ((+(((/* implicit */int) ((var_2) == (((/* implicit */long long int) arr_52 [i_11] [i_11] [i_10 - 1] [i_12] [i_15])))))))));
                        }
                        var_29 = ((/* implicit */unsigned int) arr_22 [i_9]);
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        arr_63 [i_11] [i_11] [(unsigned short)7] [i_11] [i_16] = ((/* implicit */long long int) arr_26 [i_16 - 1] [i_11] [i_10]);
                        var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 259733441U))));
                        var_31 = ((/* implicit */int) min((var_31), ((+(((/* implicit */int) arr_61 [i_9 - 1] [i_10] [i_10] [i_9 + 1]))))));
                        var_32 |= ((/* implicit */short) (!(arr_0 [i_16])));
                    }
                    for (unsigned int i_17 = 2; i_17 < 8; i_17 += 3) 
                    {
                        arr_66 [i_9] [i_10 - 1] [i_10 - 1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [3ULL] [i_11] [3ULL])) ? (arr_45 [i_9 - 1] [i_10 - 1] [(short)10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))), ((+(var_1)))));
                        var_33 -= ((/* implicit */unsigned short) (-(((/* implicit */int) min((var_5), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_11]))))))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_18 = 0; i_18 < 11; i_18 += 4) 
                    {
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (_Bool)0)), ((-(((((/* implicit */_Bool) arr_40 [i_11])) ? (((/* implicit */unsigned int) -1131508837)) : (var_1)))))));
                                arr_73 [i_9] [i_9] [7LL] [i_9] [i_9] [i_9] [i_9] = var_0;
                                var_35 |= ((/* implicit */int) var_4);
                            }
                        } 
                    } 
                    var_36 &= ((/* implicit */unsigned char) (~(arr_31 [i_10 - 1])));
                }
            } 
        } 
    } 
    var_37 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned short) (short)-12466)), ((unsigned short)7486))), (((/* implicit */unsigned short) var_5))));
    var_38 = ((/* implicit */unsigned char) var_9);
}
