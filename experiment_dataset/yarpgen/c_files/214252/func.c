/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214252
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
    var_16 = ((/* implicit */int) (signed char)15);
    var_17 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (!(((/* implicit */_Bool) 8796093021184ULL))))) << (((2097150U) - (2097120U)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) max((arr_2 [i_0]), (((signed char) var_7))));
                var_19 = ((/* implicit */signed char) (((+(max((-1861448497), (((/* implicit */int) (short)-14384)))))) ^ (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_1 + 2])) : (((/* implicit */int) ((short) arr_0 [i_0] [i_0])))))));
                /* LoopSeq 3 */
                for (signed char i_2 = 3; i_2 < 17; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_1] [i_1] [4U] = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_2 + 2] [i_1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1 - 1]))) : (arr_6 [i_3] [i_1] [i_1] [i_2 - 3])));
                        var_20 = ((/* implicit */unsigned long long int) arr_6 [i_2 - 2] [i_1] [i_1] [i_1 + 1]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 3; i_4 < 19; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */int) arr_11 [i_0] [(signed char)6] [(signed char)6] [i_4 - 2]);
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_9)), (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)113)))))) : (arr_11 [i_0] [i_1 + 2] [i_0] [i_4 - 2]))))));
                    }
                    arr_12 [i_1] = ((/* implicit */unsigned int) (~(-5498449211002464224LL)));
                    arr_13 [i_0] [i_1] = ((/* implicit */signed char) var_3);
                }
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned char) arr_10 [i_6] [i_1] [i_1] [i_0]);
                        var_24 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) 926112602)) % (1010784005U)));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 2; i_7 < 19; i_7 += 2) 
                    {
                        for (short i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            {
                                arr_26 [i_8] [i_1] [i_5] [i_1] [i_0] = max((((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-91))))) == (((((/* implicit */_Bool) (unsigned char)197)) ? (895880725) : (((/* implicit */int) (unsigned char)193))))))), ((short)14407));
                                arr_27 [i_0] [i_0] [i_0] [i_1] [i_0] [19] = ((/* implicit */short) arr_6 [i_0] [(unsigned short)9] [i_1] [i_7 - 1]);
                                arr_28 [i_0] [i_1 + 2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_19 [i_0] [i_1] [i_7] [i_8]), (arr_19 [i_1 + 2] [i_5] [i_7] [i_8])))) && (((/* implicit */_Bool) (-(arr_19 [i_0] [i_0] [i_0] [i_0]))))));
                                var_25 = var_13;
                                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4077782852U)) ? (((/* implicit */long long int) max((((unsigned int) var_14)), (((/* implicit */unsigned int) var_10))))) : ((+(((((/* implicit */_Bool) var_1)) ? (var_11) : (var_14)))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) arr_0 [i_0] [(short)13]))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_9 = 3; i_9 < 18; i_9 += 2) 
                    {
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1] [i_1 + 1])) ? (arr_21 [i_0] [i_0] [i_1] [i_1 - 1]) : (arr_21 [i_0] [i_1] [i_0] [i_1 + 2]))))));
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) arr_6 [(signed char)14] [(signed char)14] [(unsigned char)2] [i_9 - 3]))));
                    }
                    for (int i_10 = 1; i_10 < 19; i_10 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_11 = 3; i_11 < 17; i_11 += 4) 
                        {
                            arr_38 [i_0] [i_1] [i_5] [i_1] [i_1] [i_11] = ((/* implicit */_Bool) max((((unsigned long long int) arr_10 [i_0] [i_1 - 1] [i_5] [i_10])), (((/* implicit */unsigned long long int) ((short) arr_11 [i_10] [i_10 + 1] [i_10 + 1] [i_10 + 1])))));
                            arr_39 [i_0] [i_1] = ((/* implicit */unsigned char) (+(-5498449211002464224LL)));
                            var_30 ^= ((/* implicit */unsigned char) arr_1 [i_0]);
                        }
                        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (+(((257941010U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41885))))))))));
                    }
                    for (int i_12 = 1; i_12 < 19; i_12 += 2) /* same iter space */
                    {
                        arr_44 [i_12] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) (unsigned char)30)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14384))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_13 = 2; i_13 < 19; i_13 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned short) ((((int) 13U)) * (((((/* implicit */int) (short)-14384)) + (((/* implicit */int) (signed char)33))))));
                            arr_47 [i_0] [i_1 - 1] [i_1 - 1] [i_1] [i_13] = ((/* implicit */long long int) arr_17 [i_1 - 1] [i_1] [i_12 + 1] [i_13 - 1]);
                        }
                        for (int i_14 = 0; i_14 < 20; i_14 += 1) 
                        {
                            var_33 = ((/* implicit */int) (!((!(((((/* implicit */_Bool) (unsigned short)28945)) && (((/* implicit */_Bool) var_14))))))));
                            arr_50 [i_1] [i_1 + 2] [i_1] [i_12 + 1] [i_14] = ((/* implicit */unsigned char) arr_21 [i_1 + 2] [i_5] [i_12 - 1] [i_12 - 1]);
                        }
                        arr_51 [i_1] [i_5] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 217184466U)) ? (3788736979U) : (((/* implicit */unsigned int) 138928926))));
                        var_34 = ((/* implicit */_Bool) (+(8796093021200ULL)));
                    }
                    /* vectorizable */
                    for (int i_15 = 1; i_15 < 19; i_15 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0] [(_Bool)1] [i_5] [(signed char)18] [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) var_13))))))))));
                        arr_54 [i_1] [(unsigned short)10] [i_5] [i_5] [i_0] [i_1] = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))) & (16495966577209842783ULL)))));
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_21 [i_1] [i_1 - 1] [i_1 + 2] [i_1])))))));
                        var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_15] [i_15 - 1] [i_15 - 1] [i_15 - 1])) ? (-926112593) : (arr_16 [i_15] [i_15 - 1] [i_15 - 1] [i_15 - 1]))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 0; i_16 < 20; i_16 += 3) 
                    {
                        for (int i_17 = 0; i_17 < 20; i_17 += 3) 
                        {
                            {
                                var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_36 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 2] [i_1])))) ? (((/* implicit */int) ((unsigned short) arr_1 [i_1 + 2]))) : (((/* implicit */int) arr_42 [4U] [(signed char)16] [i_0] [i_16])))))));
                                var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)46638)))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 3) 
                    {
                        for (unsigned char i_20 = 0; i_20 < 20; i_20 += 1) 
                        {
                            {
                                var_40 = ((/* implicit */long long int) arr_57 [i_1]);
                                var_41 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_8 [i_18] [10] [i_1 + 1]), (((/* implicit */long long int) ((arr_59 [i_0] [i_1 + 2] [7]) ? (arr_61 [i_1] [i_1] [i_19] [i_20]) : (((/* implicit */int) arr_2 [i_20])))))))) ? (max((((((/* implicit */int) (unsigned short)9385)) * (((/* implicit */int) var_9)))), ((-(((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) 4294967280U)), (var_11)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((signed char) var_12)))))));
                            }
                        } 
                    } 
                    var_42 = ((/* implicit */int) ((signed char) (-(arr_21 [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1 + 1]))));
                }
                var_43 &= (~(3571245889U));
            }
        } 
    } 
}
