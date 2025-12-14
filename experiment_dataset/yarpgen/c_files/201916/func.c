/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201916
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
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((((/* implicit */long long int) var_14)), (max((-7394879937710817637LL), (((/* implicit */long long int) (_Bool)0)))))))));
    var_20 = ((/* implicit */short) var_14);
    var_21 -= ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) arr_1 [(unsigned char)4] [i_0]);
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) max((((/* implicit */int) var_6)), ((((+(((/* implicit */int) var_3)))) * (((/* implicit */int) var_15))))));
                            var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((33538048U) != (((/* implicit */unsigned int) arr_11 [i_0]))))) * (((/* implicit */int) ((_Bool) var_2)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) var_3))));
        var_26 = ((/* implicit */unsigned char) arr_13 [i_4] [i_4]);
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_27 = ((/* implicit */unsigned long long int) ((_Bool) var_18));
        /* LoopNest 2 */
        for (unsigned char i_6 = 1; i_6 < 9; i_6 += 2) 
        {
            for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 3; i_8 < 7; i_8 += 4) 
                    {
                        for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_12)))) == (((/* implicit */int) ((((/* implicit */int) (unsigned char)252)) == (((/* implicit */int) (unsigned char)96)))))));
                                arr_26 [i_9] [i_6] [i_7] [i_8] [i_8] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (_Bool)1))));
                                var_29 = ((/* implicit */long long int) (short)-18392);
                                var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (~((~(arr_9 [i_7] [i_8 + 2] [i_7] [i_8 + 2]))))))));
                            }
                        } 
                    } 
                    var_31 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_7] [i_6 + 1] [i_5])) * (((/* implicit */int) arr_20 [i_7] [i_6 - 1] [i_7]))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 1; i_10 < 7; i_10 += 2) 
                    {
                        for (short i_11 = 2; i_11 < 8; i_11 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_10] [i_6] [i_10 - 1] [i_10 - 1] [i_10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((signed char) var_10)))));
                                arr_32 [i_5] [i_6] [i_7] [i_6] [i_11 + 1] = ((/* implicit */signed char) arr_9 [i_5] [i_6] [i_7] [i_7]);
                                var_33 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_10 [i_5] [i_6] [i_11])) ? (13957672284661931279ULL) : (arr_13 [i_10 + 2] [i_11 - 1]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_11] [i_7] [i_11 - 1] [i_11 + 1] [i_11 + 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_35 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-121)) ^ (-1343264666)));
            /* LoopSeq 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) >> (18)))) ? (arr_9 [i_13] [i_12] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_13])))));
                /* LoopNest 2 */
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned short i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned short) (~(arr_33 [i_14] [i_15])));
                            arr_44 [i_5] [i_13] [i_13] [i_14 - 1] = ((/* implicit */unsigned long long int) 5759691238334736925LL);
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) (+(((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) var_14))))))))));
            }
            for (unsigned long long int i_16 = 1; i_16 < 9; i_16 += 4) 
            {
                var_37 += ((/* implicit */unsigned long long int) (signed char)-59);
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (unsigned char i_18 = 0; i_18 < 10; i_18 += 4) 
                    {
                        {
                            arr_54 [i_5] [i_5] [i_5] [i_5] [i_18] [i_18] = ((long long int) var_6);
                            var_38 = ((/* implicit */unsigned long long int) arr_23 [i_16 - 1] [i_16 + 1] [i_16 + 1] [i_16 - 1] [i_12]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_19 = 0; i_19 < 10; i_19 += 2) 
                {
                    for (unsigned short i_20 = 0; i_20 < 10; i_20 += 2) 
                    {
                        {
                            var_39 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)205))));
                            var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (7394879937710817651LL))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_21 = 0; i_21 < 10; i_21 += 2) 
                {
                    var_41 = ((/* implicit */unsigned int) ((long long int) var_1));
                    arr_63 [i_12] [i_12] [i_5] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (signed char)31))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (-3783500976782208298LL) : (((/* implicit */long long int) arr_11 [i_21])))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)26)) << (((((/* implicit */int) (signed char)-1)) + (9))))))));
                }
                for (short i_22 = 0; i_22 < 10; i_22 += 4) 
                {
                    var_42 *= ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551587ULL)) ? (((/* implicit */int) arr_50 [i_16 + 1])) : ((~(((/* implicit */int) (_Bool)1))))));
                    var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-32)))))));
                    var_44 = ((/* implicit */_Bool) max((var_44), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5759691238334736932LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)221))) : (arr_46 [i_12] [i_12] [i_22]))))))));
                    arr_68 [i_5] [i_12] [i_5] [i_16 + 1] [(_Bool)1] [i_22] = ((/* implicit */short) ((var_15) ? (((((/* implicit */_Bool) arr_33 [i_16 + 1] [i_12])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_6))));
                }
            }
            /* LoopNest 2 */
            for (unsigned short i_23 = 0; i_23 < 10; i_23 += 2) 
            {
                for (long long int i_24 = 4; i_24 < 9; i_24 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_25 = 0; i_25 < 10; i_25 += 1) 
                        {
                            var_45 = ((_Bool) arr_72 [i_24 - 4] [i_24 - 4] [i_24] [i_24 - 4]);
                            var_46 = ((unsigned short) (short)13962);
                            var_47 = arr_31 [i_24 - 3] [i_24] [i_24 - 2] [i_24] [i_24] [i_24] [i_5];
                            var_48 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_52 [i_5] [i_12] [i_12] [i_23] [i_24] [i_5] [i_25]))));
                        }
                        for (unsigned short i_26 = 0; i_26 < 10; i_26 += 1) 
                        {
                            arr_80 [i_5] [i_23] [i_5] [i_26] = ((/* implicit */unsigned short) ((signed char) arr_4 [i_23]));
                            var_49 *= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (unsigned char)49))));
                            var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_47 [i_5] [i_23] [i_24 - 3])) ? (arr_47 [9ULL] [i_12] [i_24 + 1]) : (arr_47 [i_5] [i_12] [i_24 - 1])));
                            arr_81 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_12] = ((/* implicit */int) (!(arr_31 [i_24] [i_24] [i_24 + 1] [i_24 - 3] [i_26] [i_23] [i_26])));
                            arr_82 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [(unsigned char)7] = ((/* implicit */long long int) arr_55 [i_5] [i_5] [i_5] [(unsigned char)7]);
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                        {
                            var_51 = (((!(((/* implicit */_Bool) arr_6 [i_27])))) && ((!(((/* implicit */_Bool) var_16)))));
                            var_52 = ((/* implicit */unsigned long long int) max((var_52), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 694467403905634609LL)))))));
                        }
                    }
                } 
            } 
        }
        for (int i_28 = 3; i_28 < 8; i_28 += 2) 
        {
            var_53 += ((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_28] [i_28 - 1]))) < (arr_33 [i_5] [i_28 - 2]));
            /* LoopNest 2 */
            for (unsigned short i_29 = 0; i_29 < 10; i_29 += 4) 
            {
                for (unsigned char i_30 = 2; i_30 < 9; i_30 += 1) 
                {
                    {
                        arr_92 [i_5] [(unsigned short)2] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_91 [i_5] [(short)7] [i_29] [i_30])) >> (((/* implicit */int) arr_60 [i_28 + 1] [i_30 - 2]))));
                        arr_93 [i_5] = ((/* implicit */short) (~(((((/* implicit */_Bool) 2971673645062573984ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_12 [i_29] [i_30 - 2]))))));
                        var_54 = ((/* implicit */int) max((var_54), (((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)49))))));
                        var_55 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_57 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))));
                    }
                } 
            } 
        }
        for (long long int i_31 = 0; i_31 < 10; i_31 += 2) 
        {
            var_56 = ((/* implicit */_Bool) max((var_56), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (166649548U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (4489071789047620346ULL) : (((((/* implicit */_Bool) arr_48 [i_5])) ? (arr_6 [i_31]) : (((/* implicit */unsigned long long int) var_14)))))))));
            var_57 = ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
            var_58 -= ((/* implicit */_Bool) ((((1378501245284240298ULL) == (0ULL))) ? (((/* implicit */int) arr_66 [i_5] [i_31])) : (((/* implicit */int) arr_20 [i_31] [i_31] [i_5]))));
            arr_96 [i_5] [i_31] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned short)18))))));
        }
    }
    /* vectorizable */
    for (short i_32 = 1; i_32 < 23; i_32 += 2) 
    {
        var_59 = ((/* implicit */unsigned char) arr_12 [i_32 + 1] [i_32 + 1]);
        var_60 = ((/* implicit */unsigned long long int) max((var_60), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (-7394879937710817652LL) : (((/* implicit */long long int) var_17)))))));
    }
}
