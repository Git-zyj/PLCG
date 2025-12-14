/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233419
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_1] |= max((((/* implicit */unsigned long long int) 2111810102)), (((arr_0 [i_0] [i_1]) ? (6210775225809315402ULL) : (((/* implicit */unsigned long long int) var_12)))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_3] |= ((/* implicit */int) min((var_5), ((((~(((/* implicit */int) var_16)))) > (((/* implicit */int) ((signed char) var_3)))))));
                            var_20 = ((/* implicit */unsigned char) arr_3 [i_0]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 2; i_4 < 9; i_4 += 4) 
                {
                    for (short i_5 = 4; i_5 < 7; i_5 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_0] [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12235968847900236213ULL)) ? (((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_0] [i_0 - 1])) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 6210775225809315402ULL)) ? (6210775225809315402ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-101)))))));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((12235968847900236212ULL), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), (arr_5 [i_1] [i_1] [i_4 + 1] [i_5])))) : (((var_18) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_4 + 2] [i_4])) : (((/* implicit */int) arr_5 [i_1] [i_1] [i_4 + 1] [i_4]))))));
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (-(((((/* implicit */_Bool) arr_5 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4 - 2])) ? ((+(arr_1 [i_1]))) : ((-(12235968847900236221ULL))))))))));
                            /* LoopSeq 4 */
                            for (int i_6 = 0; i_6 < 11; i_6 += 1) 
                            {
                                var_24 = ((/* implicit */unsigned char) var_3);
                                var_25 = ((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)3)) ? (min((12235968847900236223ULL), (12235968847900236235ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_5] [i_4] [i_5] [i_1] [i_4])))))));
                            }
                            for (signed char i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
                            {
                                var_26 |= ((/* implicit */unsigned short) var_1);
                                var_27 = ((/* implicit */unsigned long long int) ((_Bool) arr_7 [i_0] [i_5] [i_4] [i_5]));
                                var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_1] [i_4] [i_5] [i_1]))) : (12235968847900236213ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)25)) && (((/* implicit */_Bool) 511LL))))) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_4] [i_5])))) | (((((/* implicit */int) arr_2 [i_4 - 1])) | (((/* implicit */int) arr_2 [i_4 - 1]))))));
                            }
                            for (signed char i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
                            {
                                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (~(min((((/* implicit */long long int) arr_19 [i_5 + 1] [i_4 - 2] [i_5] [i_8] [i_0 + 1])), (arr_6 [i_5 - 3] [i_4 + 1] [i_4] [i_5]))))))));
                                var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) arr_7 [i_0] [i_1] [i_4] [i_8]))));
                                var_31 = ((/* implicit */unsigned long long int) max((var_31), ((~(12235968847900236212ULL)))));
                            }
                            for (signed char i_9 = 0; i_9 < 11; i_9 += 4) /* same iter space */
                            {
                                arr_25 [i_0] [i_0] [i_4] [i_5] [i_9] [i_4] [i_9] = ((/* implicit */signed char) (((+(6210775225809315386ULL))) << (((/* implicit */int) ((min((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_16)))) <= (((/* implicit */unsigned long long int) (-(arr_6 [i_0] [i_9] [i_0] [i_5])))))))));
                                var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) (signed char)96)), (max(((~(13765597357956072030ULL))), (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (6210775225809315389ULL))))))))));
                                arr_26 [i_0] [i_0] [i_4] [i_5] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_22 [i_0] [i_4] [i_4] [i_4] [i_4] [i_4 + 1])) : (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) (((-9223372036854775807LL - 1LL)) <= (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_33 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_14)))) ? (((((/* implicit */int) var_18)) << (((-46358282) + (46358298))))) : (((/* implicit */int) var_6))))), (var_11)));
    /* LoopSeq 2 */
    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 4) 
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 15; i_11 += 1) 
        {
            for (long long int i_12 = 0; i_12 < 15; i_12 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_13 = 2; i_13 < 14; i_13 += 4) 
                    {
                        for (unsigned long long int i_14 = 1; i_14 < 14; i_14 += 4) 
                        {
                            {
                                var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) max(((-(((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_11] [i_12] [i_13])) && (((/* implicit */_Bool) arr_33 [i_10] [i_11] [i_12] [i_13]))))))), (((((/* implicit */_Bool) min((12235968847900236212ULL), (arr_38 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])))) ? (((((/* implicit */int) var_17)) / (arr_37 [i_13]))) : (((/* implicit */int) arr_33 [i_14 - 1] [i_14 + 1] [i_14 - 1] [i_14 + 1])))))))));
                                var_35 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */int) arr_32 [i_12] [i_12])), (-46358282)))), (((arr_31 [i_10] [i_13]) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_14] [i_13] [i_11]))) : (-8829916663667685162LL))))))));
                                var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_13] [i_14 + 1] [i_13] [i_13 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32766))) : (12235968847900236213ULL)))) ? (((/* implicit */int) arr_34 [i_10] [i_11] [i_12] [i_12])) : (max(((-(((/* implicit */int) var_18)))), (((/* implicit */int) var_3))))));
                                arr_39 [i_10] [i_10] [i_10] [i_14] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) ((unsigned long long int) (((-(12235968847900236213ULL))) - ((-(6210775225809315402ULL))))));
                            }
                        } 
                    } 
                    arr_40 [i_10] [i_11] = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */short) arr_31 [i_10] [i_12])), ((short)-21283)))), (min((511LL), (((/* implicit */long long int) arr_31 [i_11] [i_12]))))));
                }
            } 
        } 
        arr_41 [i_10] = ((/* implicit */unsigned long long int) ((arr_32 [i_10] [i_10]) || (arr_32 [i_10] [i_10])));
        /* LoopNest 3 */
        for (short i_15 = 0; i_15 < 15; i_15 += 2) 
        {
            for (signed char i_16 = 0; i_16 < 15; i_16 += 1) 
            {
                for (unsigned char i_17 = 0; i_17 < 15; i_17 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_18 = 3; i_18 < 13; i_18 += 4) 
                        {
                            var_37 |= (+(((arr_48 [i_10] [i_15] [i_16] [i_18 - 1] [i_15]) / (((/* implicit */int) var_10)))));
                            var_38 = ((/* implicit */unsigned long long int) min((var_38), (min((((((/* implicit */_Bool) arr_48 [i_18 - 1] [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_18 + 2])) ? (((/* implicit */unsigned long long int) arr_48 [i_18 + 1] [i_18 + 2] [i_18 - 2] [i_18 - 3] [i_18 + 1])) : (arr_38 [i_18 - 3] [i_18 - 2] [i_18 + 2] [i_18 + 2] [i_18 + 1] [i_18 - 2] [i_18 + 1]))), (((((/* implicit */_Bool) arr_49 [i_10] [i_18 - 2] [i_18 - 1] [i_18 - 2] [i_18 - 2] [i_18 - 3] [i_18 - 2])) ? (((/* implicit */unsigned long long int) arr_48 [i_18 + 1] [i_18 - 2] [i_18 - 2] [i_18 - 3] [i_18 - 2])) : (6210775225809315381ULL)))))));
                            arr_50 [i_10] [i_15] [i_17] [i_17] = ((/* implicit */unsigned long long int) arr_34 [i_10] [i_16] [i_17] [i_18]);
                            arr_51 [i_10] [i_15] [i_16] [i_17] [i_17] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)105)) + (((/* implicit */int) var_18))))) / (var_12)))) == (((((/* implicit */_Bool) arr_46 [i_18] [i_18 - 3])) ? (((/* implicit */unsigned long long int) var_12)) : (12235968847900236213ULL)))));
                        }
                        var_39 |= ((/* implicit */signed char) (+(((/* implicit */int) arr_47 [i_15] [i_15] [i_16] [i_17]))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 3) 
    {
        var_40 = ((/* implicit */short) var_17);
        /* LoopNest 3 */
        for (unsigned long long int i_20 = 0; i_20 < 15; i_20 += 2) 
        {
            for (short i_21 = 0; i_21 < 15; i_21 += 2) 
            {
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_23 = 0; i_23 < 15; i_23 += 4) 
                        {
                            var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_46 [i_19] [i_20])) ? (((((/* implicit */_Bool) arr_49 [i_19] [i_19] [i_19] [i_20] [i_21] [i_22] [i_23])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_59 [i_19]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_19] [i_19] [i_23] [i_22])))));
                            var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) (~(arr_59 [i_23]))))));
                        }
                        arr_66 [i_21] |= ((/* implicit */int) min((((/* implicit */unsigned long long int) max((arr_56 [i_20] [i_21] [i_22]), (((/* implicit */signed char) arr_32 [i_19] [i_20]))))), (arr_42 [i_20])));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_24 = 1; i_24 < 12; i_24 += 1) 
        {
            for (unsigned short i_25 = 0; i_25 < 15; i_25 += 1) 
            {
                {
                    var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) ((((((((((/* implicit */_Bool) 6210775225809315393ULL)) ? (-8829916663667685162LL) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_19] [i_24] [i_25]))))) + (9223372036854775807LL))) << (((((((/* implicit */int) var_7)) << (((/* implicit */int) var_18)))) - (113))))) <= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_28 [i_19] [i_24 - 1])))))))));
                    var_44 = ((/* implicit */signed char) (((((((_Bool)1) ? (((/* implicit */int) (signed char)-64)) : (-46358290))) - (((/* implicit */int) (signed char)12)))) + (min((((/* implicit */int) arr_56 [i_19] [i_24 + 3] [i_24 + 2])), (max((((/* implicit */int) arr_71 [i_19] [i_25])), (46358282)))))));
                }
            } 
        } 
    }
}
