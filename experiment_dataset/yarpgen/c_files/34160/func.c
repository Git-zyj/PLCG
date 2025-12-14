/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34160
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)4)) & ((((_Bool)1) ? (((/* implicit */int) var_14)) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)96))))))));
    var_20 = ((/* implicit */_Bool) ((unsigned long long int) var_3));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 2) /* same iter space */
        {
            var_21 -= ((/* implicit */short) arr_2 [i_0] [i_1 + 1]);
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(4503599625273344ULL)))) ? (var_9) : (arr_1 [i_0 - 2])));
                var_22 += ((signed char) arr_0 [i_0 + 1]);
                arr_11 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((long long int) -8230679009131306571LL));
            }
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    arr_16 [i_1] [i_3] [(unsigned char)6] [i_1] = var_6;
                    var_23 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_13)))) ? (((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_18)))))));
                    var_24 *= ((/* implicit */unsigned long long int) ((_Bool) (_Bool)1));
                }
                var_25 ^= ((/* implicit */_Bool) ((-8230679009131306571LL) / (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)115)))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 3; i_6 < 21; i_6 += 3) 
                    {
                        {
                            arr_22 [i_1] [(short)3] [i_3] [i_1] [13LL] = ((/* implicit */short) ((var_14) ? (((/* implicit */int) ((signed char) var_13))) : ((~(((/* implicit */int) var_7))))));
                            var_26 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))));
                            arr_23 [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) var_15))));
                            var_27 &= ((/* implicit */short) ((arr_2 [i_3] [i_6]) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) arr_5 [i_1] [i_5]))));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 3) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 3; i_9 < 19; i_9 += 1) 
                    {
                        {
                            var_28 = (!((!(((/* implicit */_Bool) 8230679009131306570LL)))));
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_18 [i_0] [i_1 + 1])) : (((/* implicit */int) arr_18 [i_0] [i_1 + 1]))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_10 = 1; i_10 < 21; i_10 += 2) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_10 - 1])) || (((/* implicit */_Bool) (short)-12132))));
            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? ((+(((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_14))))));
            var_32 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-8230679009131306558LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0 + 4] [i_10] [(short)16] [19ULL] [(short)16])) && (((/* implicit */_Bool) 8230679009131306557LL))))))));
        }
        var_33 ^= ((/* implicit */short) (!(arr_31 [i_0] [i_0] [i_0] [i_0] [i_0 + 1])));
        var_34 -= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            for (unsigned char i_12 = 0; i_12 < 22; i_12 += 3) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_35 &= ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_26 [i_13])) ? (3266570492647543748ULL) : (15180173581062007868ULL)))));
                        arr_48 [i_13] [i_13] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_17)) ? (3266570492647543748ULL) : (((/* implicit */unsigned long long int) var_9))))));
                        arr_49 [i_11] [i_11] [i_13] [i_11] &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_0 + 4]))));
                        arr_50 [i_11] [(short)8] [i_11] [i_12] [i_13] &= ((/* implicit */long long int) (-(((/* implicit */int) var_2))));
                        var_36 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 - 3] [i_11] [i_13]))) : (((((/* implicit */unsigned long long int) 8230679009131306583LL)) & (var_0)))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 3 */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        arr_53 [i_14] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_14)))) & ((~((~(var_16))))));
        /* LoopNest 3 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (short i_16 = 0; i_16 < 16; i_16 += 2) 
            {
                for (signed char i_17 = 0; i_17 < 16; i_17 += 1) 
                {
                    {
                        var_37 = ((/* implicit */_Bool) arr_43 [i_14]);
                        arr_66 [i_14] [i_15] [i_15] [i_16] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_15] [11LL]))) * (var_12)))))) ? ((+(7334343934275143520LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_16])))));
                    }
                } 
            } 
        } 
        var_38 = ((/* implicit */unsigned long long int) (+((~(8230679009131306570LL)))));
        arr_67 [i_14] [i_14] = ((/* implicit */_Bool) ((signed char) (((!(((/* implicit */_Bool) (short)2016)))) ? (max((13648467783989919312ULL), (((/* implicit */unsigned long long int) (signed char)0)))) : (((/* implicit */unsigned long long int) 3587494865189611437LL)))));
    }
    for (unsigned long long int i_18 = 2; i_18 < 13; i_18 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_19 = 0; i_19 < 14; i_19 += 2) 
        {
            var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) arr_55 [i_19] [i_18]))));
            var_40 ^= ((/* implicit */signed char) arr_46 [i_19]);
        }
        /* LoopNest 3 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            for (long long int i_21 = 2; i_21 < 11; i_21 += 2) 
            {
                for (signed char i_22 = 0; i_22 < 14; i_22 += 1) 
                {
                    {
                        arr_82 [i_18] [i_20] = ((/* implicit */long long int) (+(var_13)));
                        var_41 = (~(max((((long long int) 13648467783989919304ULL)), (((/* implicit */long long int) arr_74 [i_18 - 2] [i_18 + 1] [i_18])))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            for (short i_24 = 1; i_24 < 10; i_24 += 3) 
            {
                {
                    var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) ((signed char) 8230679009131306557LL))), ((-(((/* implicit */int) arr_27 [i_18] [i_23] [i_24] [i_24]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 8230679009131306557LL))))) : (((/* implicit */int) var_17))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_25 = 0; i_25 < 14; i_25 += 2) 
                    {
                        for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
                        {
                            {
                                var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8230679009131306571LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-48))))) ? (arr_35 [i_18]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 13648467783989919312ULL))))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_18)), (((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_26 + 1] [i_18]))) : (8230679009131306569LL)))))) : (min((((/* implicit */unsigned long long int) ((_Bool) (unsigned char)183))), (13648467783989919317ULL)))));
                                var_44 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_38 [i_25] [(short)20]))))));
                                var_45 = ((/* implicit */short) min((max(((((_Bool)0) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (max((var_0), (((/* implicit */unsigned long long int) -2305843009213693952LL)))))), (15180173581062007867ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_28 = 1; i_28 < 9; i_28 += 3) 
        {
            for (long long int i_29 = 0; i_29 < 10; i_29 += 4) 
            {
                {
                    arr_104 [i_27] [i_27] [i_27] [i_29] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)2010)) * (((((/* implicit */_Bool) arr_60 [i_28 - 1])) ? (((/* implicit */int) (short)11347)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                    /* LoopSeq 2 */
                    for (long long int i_30 = 3; i_30 < 9; i_30 += 1) 
                    {
                        var_46 *= ((unsigned long long int) (_Bool)0);
                        arr_108 [i_27] [i_28] [i_28] [i_28] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)72)) && (((/* implicit */_Bool) (signed char)-26)))))));
                    }
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        var_47 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -14361817172569210LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_17))))) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_99 [i_27]))) & (var_16))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)161)), (arr_76 [i_27]))))));
                        var_48 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((-2305843009213693952LL), (((/* implicit */long long int) var_7))))) / (((unsigned long long int) arr_19 [i_27] [i_29] [i_29] [i_28 - 1]))));
                        arr_113 [i_29] [i_28] [i_29] [(_Bool)1] [i_27] = arr_99 [i_27];
                    }
                    /* LoopNest 2 */
                    for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
                    {
                        for (short i_33 = 0; i_33 < 10; i_33 += 3) 
                        {
                            {
                                var_49 = var_2;
                                arr_118 [i_27] [i_28] [i_29] [i_27] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (max((var_0), (((/* implicit */unsigned long long int) (signed char)63))))));
                                arr_119 [i_27] [i_28] [i_29] [i_27] [i_33] [i_33] = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned char) arr_21 [i_27] [i_27] [i_29] [i_33]))), ((((+(((/* implicit */int) (unsigned char)183)))) + (((/* implicit */int) arr_30 [i_27] [i_27] [i_28] [i_29] [i_32] [i_33]))))));
                                var_50 = ((/* implicit */unsigned long long int) min((var_50), (((/* implicit */unsigned long long int) ((long long int) ((8230679009131306557LL) * (((/* implicit */long long int) (+(((/* implicit */int) (signed char)0)))))))))));
                                var_51 = arr_93 [i_27] [i_28] [i_29] [i_32] [(_Bool)1] [i_28];
                            }
                        } 
                    } 
                    var_52 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) var_11)), (var_3)));
                    var_53 = ((/* implicit */unsigned long long int) max((var_53), (((/* implicit */unsigned long long int) var_14))));
                }
            } 
        } 
        var_54 &= (-((((!(((/* implicit */_Bool) -2305843009213693952LL)))) ? (max((((/* implicit */unsigned long long int) arr_2 [(unsigned char)21] [i_27])), (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
    }
}
