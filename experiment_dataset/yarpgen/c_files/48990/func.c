/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48990
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_8 [i_1 + 2] [i_1 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(4185900254491119447LL)))) ? ((+(arr_6 [11LL] [i_2 + 2] [i_2] [i_2 - 1]))) : (((unsigned int) (+(((/* implicit */int) var_11)))))));
                    arr_9 [i_1 + 2] = ((/* implicit */signed char) arr_7 [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */int) max((arr_0 [i_3]), (((unsigned int) ((arr_2 [3]) <= (((/* implicit */int) arr_5 [i_4])))))));
                                var_15 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_1] [i_4] [i_1] [i_0]))))) ? ((-(2345450504U))) : (arr_6 [i_1 + 3] [i_1 + 1] [13LL] [i_4 + 3])))));
                                arr_14 [i_0] [i_0] [i_3] [i_0] [i_3] [i_4] &= ((/* implicit */unsigned short) max((((/* implicit */int) ((signed char) (-2147483647 - 1)))), ((-2147483647 - 1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 1; i_7 < 22; i_7 += 2) 
            {
                {
                    arr_22 [i_6] [i_6] = ((/* implicit */unsigned short) min((((/* implicit */short) (((~(66977792))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [20LL] [i_6] [i_6])))))))), (arr_17 [i_6])));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 1; i_8 < 20; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 23; i_9 += 3) 
                        {
                            var_16 = arr_25 [i_5] [i_6] [i_7] [i_6] [i_7] [i_5];
                            arr_27 [i_5] [i_6] [i_7] [i_6] [i_9] = ((/* implicit */long long int) (~(((/* implicit */int) ((66977792) != (2147483647))))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_10 = 1; i_10 < 22; i_10 += 3) /* same iter space */
                        {
                            var_17 = ((/* implicit */long long int) ((signed char) 6729106982459102909LL));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_21 [i_10 + 1] [i_6] [i_8 + 2]))) ? (max((arr_21 [i_10 - 1] [i_6] [i_8 + 3]), (arr_21 [i_10 - 1] [i_6] [i_8 + 1]))) : (((((/* implicit */_Bool) arr_21 [i_10 + 1] [i_6] [i_8 - 1])) ? (((/* implicit */long long int) var_13)) : (arr_21 [i_10 - 1] [i_6] [i_8 + 2])))));
                        }
                        for (signed char i_11 = 1; i_11 < 22; i_11 += 3) /* same iter space */
                        {
                            arr_35 [i_6] [i_7] [i_7] [i_8] [i_11 + 1] [i_5] [13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_18 [7LL])) : (-66977794))), (((/* implicit */int) var_8))))) ? (max((arr_28 [i_5] [(short)13] [(unsigned short)14] [i_6] [i_11] [i_8]), (((/* implicit */long long int) 66977807)))) : (((long long int) arr_21 [i_8 + 3] [i_6] [i_11 + 1]))));
                            arr_36 [i_6] = ((/* implicit */short) arr_34 [i_5] [i_6] [i_7] [i_8] [i_6] [i_5]);
                        }
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 23; i_12 += 2) 
                        {
                            var_19 = ((/* implicit */long long int) ((-66977807) % (((/* implicit */int) arr_31 [13] [i_12] [13] [i_12] [i_8 - 1]))));
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) var_1)))))));
                            arr_40 [(unsigned char)21] [i_6] [i_6] [i_6] [i_8] [(unsigned short)12] = ((/* implicit */signed char) ((((/* implicit */_Bool) 66977789)) ? (2147483635) : (896)));
                        }
                        for (signed char i_13 = 0; i_13 < 23; i_13 += 4) 
                        {
                            var_21 = ((/* implicit */int) max((((/* implicit */long long int) ((signed char) arr_28 [i_8] [i_8 - 1] [i_6] [i_6] [i_7 - 1] [i_6]))), (((-9223372036854775785LL) + (var_12)))));
                            arr_43 [(signed char)19] [i_8] [i_6] [i_5] [i_6] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)32640))) / ((((~(4177700786028733424LL))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)234)))))));
                            var_22 |= ((/* implicit */_Bool) ((var_10) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)22)))))) : (var_3)));
                            arr_44 [i_7] [i_6] [i_7] [i_8 + 2] [i_5] [i_6] [(unsigned short)7] = ((/* implicit */signed char) (+(((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)234)))))));
                        }
                        for (unsigned char i_14 = 0; i_14 < 23; i_14 += 2) 
                        {
                            arr_47 [i_5] [i_6] [i_7] [i_7 + 1] [i_6] [i_8] [i_6] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned char)20)) ? (((((/* implicit */_Bool) -1855134195)) ? (8159594493258941424LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)126))))) : (7066543526082388875LL))), (((/* implicit */long long int) 66977784))));
                            var_23 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_29 [i_5] [i_6] [i_7 - 1] [i_14] [i_14] [i_14])) <= (((((/* implicit */_Bool) 66977814)) ? (-66977815) : (-66977814))))) || (((/* implicit */_Bool) arr_46 [i_6]))));
                            var_24 -= ((/* implicit */unsigned char) 66977814);
                        }
                        for (int i_15 = 1; i_15 < 22; i_15 += 2) 
                        {
                            var_25 = 66977807;
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((int) ((int) arr_34 [i_5] [i_6] [i_7 + 1] [18LL] [i_5] [12]))) ^ (((int) (-2147483647 - 1))))))));
                            var_27 |= ((/* implicit */signed char) max((((/* implicit */int) (short)-27946)), (2147483647)));
                            var_28 = ((/* implicit */unsigned short) (((+((~(((/* implicit */int) arr_25 [i_5] [i_6] [i_6] [i_7 - 1] [i_15] [i_5])))))) ^ ((~(((/* implicit */int) arr_23 [i_6] [i_15 + 1] [i_6] [i_8]))))));
                        }
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) arr_25 [i_5] [i_6] [i_7] [i_8] [i_6] [i_8]))));
                    }
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((66977796), (-66977789)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) || (((/* implicit */_Bool) arr_23 [i_6] [i_7 + 1] [i_6] [i_7 + 1]))))) : (((/* implicit */int) var_5))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_16 = 0; i_16 < 13; i_16 += 2) 
    {
        var_31 = ((/* implicit */unsigned int) ((unsigned char) 2147483647));
        arr_55 [i_16] = ((/* implicit */unsigned short) arr_17 [i_16]);
    }
    /* vectorizable */
    for (unsigned char i_17 = 0; i_17 < 21; i_17 += 2) 
    {
        arr_58 [i_17] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)23)) >> (((((/* implicit */int) (unsigned char)74)) - (62)))));
        /* LoopSeq 1 */
        for (unsigned char i_18 = 0; i_18 < 21; i_18 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
            {
                arr_65 [1] [i_19] = ((/* implicit */long long int) (~(((/* implicit */int) var_8))));
                /* LoopNest 2 */
                for (long long int i_20 = 1; i_20 < 17; i_20 += 2) 
                {
                    for (long long int i_21 = 0; i_21 < 21; i_21 += 2) 
                    {
                        {
                            var_32 = ((((/* implicit */_Bool) var_3)) ? (arr_45 [i_20] [i_20 + 2] [i_20] [(unsigned char)2] [i_20 + 3] [i_20]) : (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_21]))));
                            arr_71 [i_20] [i_20] [i_19] [i_18] [i_20] [i_17] = arr_48 [i_20 + 1] [i_20] [i_20 + 1] [i_20 + 3] [i_20 - 1] [i_20 + 1] [i_20 + 1];
                            var_33 |= ((((/* implicit */_Bool) (short)-27946)) ? (((/* implicit */int) (unsigned char)234)) : (1561508237));
                        }
                    } 
                } 
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
            {
                var_34 = ((/* implicit */_Bool) ((long long int) 66977794));
                /* LoopSeq 2 */
                for (signed char i_23 = 1; i_23 < 19; i_23 += 2) 
                {
                    arr_78 [i_23] = ((/* implicit */_Bool) ((unsigned int) arr_42 [i_23 - 1] [i_23 + 2] [i_23 + 1] [i_23 - 1]));
                    var_35 = ((/* implicit */long long int) (~(((66977814) / (-66977797)))));
                }
                for (short i_24 = 0; i_24 < 21; i_24 += 2) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_25 = 4; i_25 < 19; i_25 += 2) 
                    {
                        arr_86 [i_25] [i_24] [i_22] [i_17] [i_18] [i_17] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) -66977807)) && (((/* implicit */_Bool) arr_79 [i_24] [i_17])))))));
                        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((arr_21 [i_17] [i_25] [i_22]) > (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_25 - 1] [i_25 + 1] [i_25 + 1] [i_25] [i_25]))))))));
                        arr_87 [i_17] [i_18] [i_17] [i_24] [(signed char)4] = ((/* implicit */unsigned char) var_13);
                        var_37 -= ((/* implicit */_Bool) (~(arr_85 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25 - 2] [i_25])));
                    }
                    for (int i_26 = 0; i_26 < 21; i_26 += 3) 
                    {
                        var_38 = ((/* implicit */int) var_4);
                        arr_91 [i_26] [i_26] [i_24] [i_22] [i_26] [i_17] = ((/* implicit */_Bool) (short)-27930);
                        arr_92 [i_26] [i_24] [(short)1] [i_26] [i_18] [i_17] [(short)1] = ((/* implicit */unsigned short) 66977805);
                    }
                    var_39 = (~((~(arr_59 [i_17] [i_18]))));
                }
                var_40 = ((/* implicit */unsigned short) arr_90 [i_17] [i_22] [i_18] [i_17] [i_17]);
                var_41 |= ((/* implicit */long long int) (signed char)(-127 - 1));
            }
            /* LoopNest 3 */
            for (long long int i_27 = 0; i_27 < 21; i_27 += 3) 
            {
                for (unsigned char i_28 = 0; i_28 < 21; i_28 += 2) 
                {
                    for (int i_29 = 0; i_29 < 21; i_29 += 4) 
                    {
                        {
                            var_42 = ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) var_5))))) < (arr_21 [i_29] [i_18] [i_18])));
                            var_43 *= ((/* implicit */unsigned int) arr_50 [i_27]);
                            var_44 ^= ((((/* implicit */int) arr_75 [i_17] [i_18] [i_27] [i_18] [i_29])) & (((/* implicit */int) arr_75 [i_17] [i_29] [i_27] [i_28] [i_29])));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_30 = 0; i_30 < 21; i_30 += 2) 
            {
                arr_105 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned short) ((_Bool) arr_19 [i_17] [i_18] [i_17]));
                var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) ((long long int) -2147483638)))));
                /* LoopNest 2 */
                for (unsigned short i_31 = 0; i_31 < 21; i_31 += 3) 
                {
                    for (int i_32 = 2; i_32 < 19; i_32 += 2) 
                    {
                        {
                            arr_110 [i_17] [i_31] [i_30] [i_31] [i_17] [i_31] = ((/* implicit */int) ((((/* implicit */int) arr_32 [i_32] [i_32 + 2] [i_17] [i_31] [i_32] [i_17])) <= (((/* implicit */int) arr_32 [i_18] [i_32 + 1] [i_17] [i_18] [i_32] [i_18]))));
                            var_46 = ((((/* implicit */_Bool) arr_39 [i_17] [i_30] [6] [(short)16] [i_17])) ? (((((/* implicit */_Bool) -66977808)) ? (((/* implicit */unsigned int) 66977808)) : (arr_88 [i_18] [i_30] [i_31]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-27946))));
                        }
                    } 
                } 
            }
            for (int i_33 = 3; i_33 < 19; i_33 += 2) 
            {
                arr_115 [i_17] [i_17] [i_33 - 1] |= -66977783;
                var_47 = ((/* implicit */long long int) ((signed char) ((arr_113 [i_17] [i_18] [(signed char)15] [i_18]) + (((/* implicit */long long int) ((/* implicit */int) var_4))))));
                var_48 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-114))));
            }
        }
    }
}
