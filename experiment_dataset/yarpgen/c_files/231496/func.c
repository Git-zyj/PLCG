/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231496
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0 - 4] [i_0]))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_19 = ((/* implicit */int) arr_3 [i_1]);
            arr_4 [i_0] = ((/* implicit */unsigned int) (_Bool)1);
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_3 = 2; i_3 < 13; i_3 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned char) arr_9 [i_2]);
                        var_21 = ((/* implicit */unsigned long long int) arr_0 [i_0 - 2] [i_3 - 2]);
                        arr_13 [i_0 - 4] [(signed char)0] [i_2] [i_3] [i_0 - 4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned short)7] [i_0 - 2] [i_0 + 1] [i_2])) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-1042230123424382827LL)))) : (var_7)));
                        var_22 = ((/* implicit */unsigned char) arr_5 [i_2] [i_0 + 3]);
                    }
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_0 - 4] [i_1] [i_2] [i_2] [i_3 - 1] [i_3] [(short)6]))));
                        var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_1] [i_2] [i_0 + 1] [i_5] [i_2] [13U])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                        arr_16 [i_0 + 2] [i_2] [11ULL] [i_3] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0 + 1]))) % (((arr_14 [i_0] [i_0] [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [12LL] [i_2] [i_0] [i_2])))))));
                        var_25 = ((/* implicit */unsigned char) arr_11 [i_3 - 2] [i_3 - 2] [i_2] [i_3] [i_3] [i_3] [i_3]);
                    }
                    for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        var_26 = ((/* implicit */short) var_16);
                        arr_21 [i_3] [i_3] [i_3] [i_2] [i_3] [i_3 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_0 - 4] [i_0 + 2] [i_0 + 3] [i_2] [i_3 - 2])) || (((/* implicit */_Bool) arr_18 [i_0 - 4] [i_0 + 3] [i_0 + 3] [i_2] [i_3 - 1]))));
                        var_27 = arr_12 [i_0] [i_1];
                    }
                    var_28 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!((_Bool)1))))));
                    arr_22 [i_3] [i_3] [i_2] [i_2] &= ((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_3 - 2] [i_3]);
                }
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        {
                            arr_29 [i_0] [i_1] [(signed char)4] [i_7] [i_1] &= ((/* implicit */signed char) (~((+(((/* implicit */int) arr_9 [(unsigned char)8]))))));
                            var_30 = ((/* implicit */unsigned int) ((int) arr_24 [i_2] [(short)5]));
                            var_31 = ((((/* implicit */_Bool) (~(arr_14 [7U] [i_1] [i_2] [i_8])))) ? (((/* implicit */int) arr_12 [i_0 - 4] [4U])) : (((/* implicit */int) arr_1 [i_0])));
                            var_32 = ((/* implicit */unsigned long long int) arr_6 [i_2]);
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (long long int i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_10 = 1; i_10 < 13; i_10 += 2) 
                {
                    var_33 = ((/* implicit */unsigned int) (unsigned short)65534);
                    var_34 -= (~(((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_9] [i_10] [2U])));
                }
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 11; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)20))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [(short)2] [i_11] [i_9] [i_11] [i_12])) && (((/* implicit */_Bool) var_0)))))) : (3897788314U)));
                            var_36 |= arr_3 [10ULL];
                        }
                    } 
                } 
                var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 957187310U)) : (arr_36 [i_0 - 2] [i_1] [i_9])));
            }
            for (long long int i_13 = 0; i_13 < 14; i_13 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_14 = 1; i_14 < 11; i_14 += 2) 
                {
                    var_38 = (i_13 % 2 == zero) ? (((/* implicit */_Bool) ((arr_44 [i_13] [i_14 - 1]) << (((arr_44 [i_13] [i_14 + 1]) - (491548259047766659ULL)))))) : (((/* implicit */_Bool) ((arr_44 [i_13] [i_14 - 1]) << (((((arr_44 [i_13] [i_14 + 1]) - (491548259047766659ULL))) - (16362662475193472849ULL))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 3; i_15 < 13; i_15 += 1) 
                    {
                        var_39 *= ((/* implicit */short) (!(((/* implicit */_Bool) var_17))));
                        var_40 = ((((/* implicit */_Bool) ((unsigned long long int) var_15))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_13] [i_0]))) : ((-(arr_37 [4LL] [4LL] [4LL]))));
                        var_41 = ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((((/* implicit */int) var_14)) - (52)))))) ? (arr_47 [i_13] [i_13] [i_13] [i_14] [i_13] [i_13]) : (((/* implicit */unsigned int) 8191))));
                    }
                    var_43 = ((/* implicit */unsigned int) (_Bool)1);
                }
                for (unsigned int i_16 = 0; i_16 < 14; i_16 += 1) 
                {
                    var_44 = ((/* implicit */_Bool) ((arr_5 [i_13] [i_13]) << (((((/* implicit */int) var_11)) - (9443)))));
                    var_45 = ((/* implicit */long long int) arr_32 [i_0 - 4] [i_0 - 2] [i_13] [i_0 - 2] [i_13]);
                    var_46 |= ((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_8 [i_16] [i_1]) >= (-8089048491193788162LL))))));
                    var_47 = ((/* implicit */unsigned char) arr_19 [i_13] [i_13] [i_1] [i_1] [i_13]);
                }
                /* LoopNest 2 */
                for (short i_17 = 0; i_17 < 14; i_17 += 4) 
                {
                    for (short i_18 = 1; i_18 < 13; i_18 += 1) 
                    {
                        {
                            var_48 = ((/* implicit */int) arr_3 [i_0]);
                            var_49 = ((/* implicit */int) max((var_49), (((/* implicit */int) arr_38 [i_0 + 1] [i_0 + 1] [i_13] [i_17] [i_18 - 1]))));
                        }
                    } 
                } 
                var_50 = ((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_13] [(short)5] [i_13] [(short)3]);
                var_51 = ((/* implicit */unsigned int) (unsigned short)15);
            }
            var_52 = ((/* implicit */int) ((unsigned char) arr_26 [i_0] [i_1] [i_0] [i_1] [i_1] [(_Bool)1]));
        }
        var_53 = ((/* implicit */unsigned short) (~(arr_47 [4LL] [i_0 + 2] [i_0] [i_0] [i_0] [i_0 + 2])));
        /* LoopSeq 2 */
        for (unsigned char i_19 = 0; i_19 < 14; i_19 += 4) 
        {
            var_54 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [12] [i_0 - 2] [12] [i_19])) && (arr_1 [i_0 - 3])));
            var_55 |= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) 3332431859730715591ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_45 [i_0] [i_0] [i_19] [i_19] [i_19])))));
            var_56 = ((/* implicit */int) 15114312213978836031ULL);
        }
        for (unsigned short i_20 = 0; i_20 < 14; i_20 += 4) 
        {
            var_57 = ((/* implicit */unsigned char) (~(var_8)));
            var_58 = (!(((((/* implicit */int) var_11)) < (arr_33 [i_0] [i_0] [i_0] [i_20]))));
        }
    }
    for (unsigned char i_21 = 1; i_21 < 20; i_21 += 2) 
    {
        /* LoopNest 3 */
        for (int i_22 = 0; i_22 < 21; i_22 += 4) 
        {
            for (long long int i_23 = 2; i_23 < 20; i_23 += 3) 
            {
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    {
                        arr_76 [(unsigned char)8] [i_22] [i_23] [i_24] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_72 [(unsigned short)12] [i_22] [i_23 + 1] [16])) ? (((/* implicit */int) arr_63 [i_21] [i_23])) : ((+(((/* implicit */int) var_4)))))) == (((((/* implicit */_Bool) (~(arr_68 [i_22] [5])))) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : (((/* implicit */int) var_10))))));
                        var_59 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_63 [i_21 + 1] [i_21 - 1])) & (((/* implicit */int) arr_63 [i_21 + 1] [i_21 - 1]))))) ? (((((/* implicit */_Bool) (unsigned short)14)) ? (min((((/* implicit */unsigned int) (_Bool)1)), (arr_74 [i_21] [i_23] [i_23] [i_22]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_21 + 1] [i_23 - 1] [i_23] [i_24]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 9U))))))));
                    }
                } 
            } 
        } 
        var_60 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) var_5))));
        var_61 = ((/* implicit */long long int) ((((/* implicit */int) ((short) var_8))) - (((/* implicit */int) ((arr_75 [0LL] [(short)10] [i_21 - 1] [i_21 - 1]) <= (arr_75 [i_21 - 1] [(unsigned short)4] [i_21 - 1] [i_21 - 1]))))));
    }
    var_62 += var_16;
    var_63 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_3)))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))))));
}
