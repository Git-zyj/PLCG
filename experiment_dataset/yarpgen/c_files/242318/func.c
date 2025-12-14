/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242318
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-64)) ? (((((/* implicit */_Bool) 1995472737U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_7))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-30768)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) < (3442053094U)))))))));
    var_16 += (-((-(676075168U))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned char) min((arr_1 [i_0] [i_0]), (arr_0 [i_0] [i_0])));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-21157)))))));
                        var_19 = ((((/* implicit */_Bool) (short)-21158)) ? (524280U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)21164))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (unsigned char)0))));
        /* LoopNest 2 */
        for (short i_5 = 2; i_5 < 9; i_5 += 3) 
        {
            for (signed char i_6 = 1; i_6 < 9; i_6 += 2) 
            {
                {
                    var_21 -= ((/* implicit */long long int) arr_3 [(short)2] [(signed char)6] [(signed char)6]);
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) arr_15 [i_4] [i_5])))) > (((((/* implicit */int) (signed char)11)) << (((arr_18 [i_4] [i_6 - 1] [9U] [i_5]) - (5733067591748508948LL))))))))) > (((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)2807))))) - (((long long int) (short)2807)))))))));
                }
            } 
        } 
        arr_20 [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_8 [i_4] [(signed char)0] [i_4] [i_4])) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) (short)-2807))))))) * (var_1)));
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_10)) & (((/* implicit */int) (unsigned char)3))))));
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            for (unsigned int i_9 = 2; i_9 < 8; i_9 += 3) 
            {
                {
                    var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)21144))) * ((-(arr_0 [i_7] [i_8])))));
                    arr_28 [(signed char)1] [i_7] = ((/* implicit */short) (-(((arr_10 [i_9] [i_7]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)80)))))));
                    arr_29 [10U] [i_8] [i_8] [10U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_7] [i_8])) || (((/* implicit */_Bool) (~(var_1))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_10 = 3; i_10 < 9; i_10 += 4) 
        {
            for (signed char i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        var_25 = ((/* implicit */short) (-((-(arr_18 [i_10] [i_10] [i_10] [i_10])))));
                        var_26 = ((/* implicit */short) ((3968205319U) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                    }
                    for (unsigned char i_13 = 2; i_13 < 9; i_13 += 4) 
                    {
                        var_27 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_7] [4U])) ? (((((/* implicit */int) var_2)) * (((/* implicit */int) (signed char)112)))) : ((-(((/* implicit */int) (unsigned char)184))))));
                        var_28 ^= ((/* implicit */unsigned int) (!(((((/* implicit */int) var_0)) < (((/* implicit */int) (signed char)112))))));
                    }
                    var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_12))));
                }
            } 
        } 
    }
    for (unsigned int i_14 = 1; i_14 < 8; i_14 += 2) 
    {
        arr_43 [i_14 - 1] [(unsigned char)8] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) ((arr_18 [i_14 - 1] [i_14] [(signed char)9] [i_14]) < (((/* implicit */long long int) 22448201U))))) < (((/* implicit */int) arr_33 [i_14 - 1] [i_14 + 2])))))));
        arr_44 [i_14 + 1] = ((/* implicit */unsigned int) (unsigned char)75);
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_15 = 0; i_15 < 10; i_15 += 2) 
        {
            var_30 = (+((~(arr_32 [i_14 - 1] [0U]))));
            var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
        }
        /* vectorizable */
        for (unsigned char i_16 = 3; i_16 < 9; i_16 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_17 = 1; i_17 < 9; i_17 += 2) 
            {
                var_32 *= ((/* implicit */signed char) ((((/* implicit */long long int) (~(var_1)))) < (((arr_14 [i_14]) - (((/* implicit */long long int) 2U))))));
                arr_55 [i_14 + 2] [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_7)))) ? (arr_11 [i_14]) : (((/* implicit */long long int) ((/* implicit */int) ((var_5) < (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_16])))))))));
                var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_13 [i_14] [i_16])) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) var_8)))) << (((((((/* implicit */long long int) arr_24 [i_14] [i_14 - 1] [i_14 - 1])) & (arr_10 [(signed char)0] [i_17 + 1]))) - (269279222LL))))))));
            }
            /* LoopSeq 3 */
            for (unsigned int i_18 = 2; i_18 < 6; i_18 += 4) 
            {
                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_14]))))) : (((((/* implicit */int) arr_25 [i_18] [i_18] [i_18 + 4])) >> (((((/* implicit */int) arr_3 [i_18 + 2] [i_14] [i_14])) + (143)))))));
                var_35 += ((/* implicit */unsigned char) var_0);
            }
            for (unsigned int i_19 = 0; i_19 < 10; i_19 += 3) 
            {
                var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) (-(((/* implicit */int) var_8)))))));
                var_37 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_37 [i_14] [i_16 - 3] [i_16 + 1] [i_19])))) ? (((((/* implicit */long long int) ((/* implicit */int) var_11))) + (arr_4 [i_16]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) (short)-2807)) : (((/* implicit */int) arr_41 [i_14])))))));
                /* LoopSeq 2 */
                for (short i_20 = 0; i_20 < 10; i_20 += 3) 
                {
                    arr_63 [i_16] [i_14] [i_16] [i_14] [i_14] [i_20] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (short)-21157))))));
                    arr_64 [i_14] [i_16 - 3] [i_19] [i_16] [i_14] = ((1498123759631043997LL) - (((/* implicit */long long int) ((/* implicit */int) var_9))));
                }
                for (unsigned int i_21 = 2; i_21 < 8; i_21 += 3) 
                {
                    var_38 = ((/* implicit */unsigned int) ((long long int) arr_57 [i_14 + 1] [i_16] [i_21 + 2] [i_21 - 2]));
                    arr_69 [i_16] = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
                    var_39 += ((/* implicit */long long int) arr_59 [(unsigned char)8]);
                }
                var_40 += ((/* implicit */signed char) (~(((/* implicit */int) arr_68 [i_14] [i_14] [i_14] [i_14 - 1]))));
            }
            for (unsigned int i_22 = 0; i_22 < 10; i_22 += 4) 
            {
                arr_73 [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_68 [i_14 + 2] [i_16 - 2] [i_16 - 2] [i_16 - 2])) : ((~(((/* implicit */int) arr_8 [i_14 + 2] [i_14 + 2] [i_22] [i_16]))))));
                var_41 = var_0;
            }
        }
        /* LoopSeq 1 */
        for (signed char i_23 = 0; i_23 < 10; i_23 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_24 = 0; i_24 < 10; i_24 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_25 = 0; i_25 < 10; i_25 += 2) 
                {
                    arr_82 [i_24] [i_23] = ((/* implicit */unsigned int) 9223372036854775807LL);
                    var_42 &= arr_21 [i_14 - 1] [i_24];
                    arr_83 [i_23] [i_23] [i_24] [i_25] = ((/* implicit */signed char) ((((/* implicit */long long int) arr_72 [i_14 - 1] [i_14] [i_14] [i_14])) < (((((/* implicit */long long int) arr_72 [i_25] [i_23] [i_14] [i_23])) - (-2410305340904160886LL)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_26 = 0; i_26 < 10; i_26 += 3) /* same iter space */
                    {
                        var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) 8375155111149002309LL)) || (((/* implicit */_Bool) arr_68 [i_14] [i_14] [i_14] [i_14]))))))));
                        var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_36 [(signed char)4] [i_23])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-11373))) : (arr_4 [i_25]))) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (22448187U)))))))));
                        var_45 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (22448201U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_76 [i_25] [i_23])))))) ? (((((/* implicit */int) arr_85 [i_26] [i_26] [i_24] [i_24] [i_24] [i_23] [i_14])) >> (((((/* implicit */int) arr_74 [i_14] [i_24] [i_26])) - (217))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_26] [i_25])) || (((/* implicit */_Bool) (signed char)20)))))));
                    }
                    for (unsigned char i_27 = 0; i_27 < 10; i_27 += 3) /* same iter space */
                    {
                        arr_89 [i_23] = ((/* implicit */short) -9223372036854775807LL);
                        var_46 = ((/* implicit */long long int) (-(((/* implicit */int) arr_79 [i_27] [i_24] [i_24] [i_23]))));
                    }
                }
                arr_90 [i_24] [i_24] [i_14] &= 4294967295U;
                var_47 = ((/* implicit */unsigned int) var_6);
                var_48 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_34 [i_14 + 1] [10LL] [i_24] [i_23]))));
                arr_91 [9LL] [i_23] = ((/* implicit */short) ((((/* implicit */int) ((arr_26 [(unsigned char)9] [i_14 - 1]) < (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) >> (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_26 [i_14 + 1] [i_14 + 1]))) - (4294967252U)))));
            }
            var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) ((((/* implicit */_Bool) min((var_14), (arr_24 [i_14 + 2] [i_14 + 2] [i_14 - 1])))) ? ((-(arr_27 [i_14 + 2] [i_14 + 2] [i_14 - 1] [i_14 + 2]))) : (max((arr_24 [i_14 + 2] [i_14 + 1] [i_14 + 2]), (arr_27 [i_14 + 1] [i_14 + 1] [i_14 - 1] [i_14 - 1]))))))));
            var_50 = var_2;
        }
    }
}
