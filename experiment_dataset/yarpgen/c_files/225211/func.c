/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225211
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
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */int) (((+(var_3))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (-1602309821) : (var_5))))))) ^ (((/* implicit */int) (unsigned char)51))));
        var_16 = ((/* implicit */_Bool) min(((+(((arr_1 [i_0]) / (arr_2 [i_0]))))), ((((-(arr_2 [i_0]))) / (arr_1 [i_0 + 1])))));
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            arr_6 [i_0] = ((/* implicit */short) (+((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)11938)) >= (var_7))))))));
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */int) arr_1 [i_0 - 2]);
            /* LoopNest 2 */
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                for (short i_3 = 1; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55470)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (4993289038163799275LL))))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) var_4));
                        var_17 = ((/* implicit */int) min((var_17), ((+(((/* implicit */int) (unsigned char)11))))));
                        var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) min(((short)2047), (((/* implicit */short) var_10)))))) ? (((((var_4) / (arr_2 [i_0 + 1]))) / (((/* implicit */long long int) (-(2047)))))) : (-6864058488962938047LL)));
                    }
                } 
            } 
            arr_15 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1]))));
        }
        for (signed char i_4 = 2; i_4 < 12; i_4 += 1) 
        {
            arr_18 [i_0] &= ((/* implicit */int) (-(((unsigned int) (short)32767))));
            var_19 += ((/* implicit */short) ((((/* implicit */_Bool) ((((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))))) >> (((/* implicit */int) arr_5 [i_0 - 1] [i_4] [i_4]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_2))));
        }
        /* vectorizable */
        for (short i_5 = 1; i_5 < 12; i_5 += 4) 
        {
            arr_23 [i_0] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)47898)) != (((/* implicit */int) (_Bool)1))));
            /* LoopNest 3 */
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                for (long long int i_7 = 2; i_7 < 11; i_7 += 4) 
                {
                    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)115)) >= (((/* implicit */int) (signed char)3))));
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)56872)))))));
                            arr_32 [i_0] [i_5] [i_6] [i_6] [i_7] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_22 [i_0] [i_0]))));
                        }
                    } 
                } 
            } 
            arr_33 [i_0 - 1] [i_0 - 1] = ((/* implicit */short) 6042556359085651883LL);
            arr_34 [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-12237)))))) - (-5010200333417182000LL)));
        }
        arr_35 [i_0] = ((6864058488962938046LL) >= (((/* implicit */long long int) ((/* implicit */int) var_6))));
    }
    for (int i_9 = 1; i_9 < 14; i_9 += 2) 
    {
        arr_38 [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */signed char) (!((_Bool)1)))), (var_6))))));
        arr_39 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)181)) ? ((-(((/* implicit */int) (signed char)-47)))) : (((/* implicit */int) ((((/* implicit */int) (short)6107)) == (var_7))))));
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_11 = 0; i_11 < 22; i_11 += 2) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_9)))) ? (((((/* implicit */int) var_6)) & (arr_42 [i_10] [i_10] [i_10]))) : (((/* implicit */int) arr_43 [i_10]))));
            /* LoopSeq 2 */
            for (unsigned int i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                var_23 = ((/* implicit */unsigned int) arr_42 [i_10] [i_11] [i_12]);
                /* LoopNest 2 */
                for (unsigned int i_13 = 1; i_13 < 20; i_13 += 2) 
                {
                    for (signed char i_14 = 3; i_14 < 21; i_14 += 2) 
                    {
                        {
                            arr_52 [i_10] [i_11] [i_12] [i_12] [i_12] [i_10] [i_10] = ((/* implicit */short) ((long long int) arr_40 [i_13 + 1] [i_10]));
                            var_24 = ((/* implicit */long long int) arr_42 [i_10] [i_11] [i_14 - 1]);
                        }
                    } 
                } 
                var_25 -= ((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_50 [i_10] [i_12] [i_10] [i_11] [i_11] [i_12] [i_12])))) || (((/* implicit */_Bool) ((signed char) 925885896))));
                /* LoopSeq 2 */
                for (short i_15 = 0; i_15 < 22; i_15 += 3) 
                {
                    arr_57 [i_10] [i_10] [i_10] [i_15] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_41 [i_10] [i_10])) ? (((/* implicit */int) arr_54 [i_10] [i_10] [i_12] [i_15])) : (((/* implicit */int) (signed char)4))))));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) 2147483647))) >= (((/* implicit */int) ((unsigned short) (short)-30780)))));
                }
                for (unsigned int i_16 = 1; i_16 < 19; i_16 += 1) 
                {
                    arr_60 [i_10] [i_10] = ((/* implicit */signed char) var_12);
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 0; i_17 < 22; i_17 += 2) 
                    {
                        var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_10] [i_10] [i_17])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)9))))) ? (((/* implicit */int) ((var_8) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_17] [i_12] [i_16] [i_12] [i_12] [i_12] [i_10])))))) : (((((/* implicit */_Bool) 2247857702U)) ? (((/* implicit */int) var_0)) : (arr_48 [i_11] [i_11]))))))));
                        arr_64 [i_10] [i_11] [i_12] [i_10] [i_10] = ((var_5) > (arr_41 [i_10] [i_10]));
                    }
                }
            }
            for (int i_18 = 1; i_18 < 20; i_18 += 4) 
            {
                var_29 = ((/* implicit */unsigned int) ((var_10) && (((/* implicit */_Bool) (~(989226255))))));
                var_30 = ((/* implicit */int) 990655592U);
                arr_67 [i_10] [i_11] = (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)21))) : (4294967295U))));
                arr_68 [i_10] [i_10] [i_18] = ((/* implicit */long long int) ((unsigned long long int) arr_40 [i_18] [i_10]));
            }
        }
        /* LoopNest 2 */
        for (signed char i_19 = 3; i_19 < 20; i_19 += 2) 
        {
            for (int i_20 = 0; i_20 < 22; i_20 += 1) 
            {
                {
                    arr_76 [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) & (-4611686018427387904LL)));
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)96)) * (((/* implicit */int) var_11))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (long long int i_21 = 3; i_21 < 21; i_21 += 1) 
        {
            var_32 *= ((((/* implicit */_Bool) arr_53 [i_10])) ? (0U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (var_5)))));
            arr_79 [i_10] = ((/* implicit */signed char) ((1900328036U) << (((((/* implicit */int) var_0)) & (((/* implicit */int) var_10))))));
            /* LoopNest 3 */
            for (signed char i_22 = 0; i_22 < 22; i_22 += 1) 
            {
                for (int i_23 = 0; i_23 < 22; i_23 += 1) 
                {
                    for (long long int i_24 = 1; i_24 < 21; i_24 += 1) 
                    {
                        {
                            arr_87 [i_10] [i_10] [i_22] [i_23] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) arr_65 [i_21] [i_21])) ? (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_21 - 1] [i_10] [i_24 - 1] [i_24] [i_24 + 1] [i_24 - 1]))) : (((long long int) var_12))));
                            arr_88 [i_10] [i_10] [i_10] [i_22] [i_24] [i_21 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)0)) ? ((+(((/* implicit */int) var_14)))) : ((+(((/* implicit */int) (unsigned short)9983))))));
                            var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((-4611686018427387907LL) - (((/* implicit */long long int) ((/* implicit */int) arr_78 [i_10] [i_22] [i_10]))))))));
                            arr_89 [i_10] [(unsigned char)14] [i_22] [i_23] [i_24 + 1] [i_23] [i_23] &= ((/* implicit */signed char) ((var_10) ? (((/* implicit */int) ((var_3) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32756)))))) : (((/* implicit */int) (short)32748))));
                        }
                    } 
                } 
            } 
            arr_90 [i_21] [i_10] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)55566)) ? (var_13) : (-8569890955095087756LL)))) & (11558024414988509328ULL)));
        }
        for (long long int i_25 = 0; i_25 < 22; i_25 += 1) 
        {
            var_34 = ((/* implicit */short) ((((var_4) & (((/* implicit */long long int) arr_48 [i_10] [i_25])))) >= (((/* implicit */long long int) ((/* implicit */int) ((18U) != (0U)))))));
            arr_93 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) - (((((/* implicit */int) (short)28767)) - (((/* implicit */int) var_12))))));
        }
        for (short i_26 = 2; i_26 < 21; i_26 += 3) 
        {
            var_35 = ((/* implicit */signed char) ((((var_4) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_77 [i_26 - 1])) + (12286)))));
            /* LoopSeq 1 */
            for (unsigned char i_27 = 0; i_27 < 22; i_27 += 1) 
            {
                arr_99 [i_10] [i_10] [i_27] [i_27] = ((/* implicit */short) (unsigned short)55546);
                var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14))))))))));
            }
            /* LoopSeq 2 */
            for (signed char i_28 = 1; i_28 < 20; i_28 += 2) 
            {
                var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) (+(-5287231948822998397LL))))));
                var_38 = ((/* implicit */short) var_12);
                var_39 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_50 [i_26 - 2] [18LL] [i_26 - 2] [i_26 + 1] [i_28 - 1] [i_28 - 1] [i_28 - 1])) ? (204186212) : (((/* implicit */int) arr_70 [i_28] [i_28] [12LL]))));
                arr_102 [i_10] [i_10] [i_28] [i_10] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
            }
            for (short i_29 = 0; i_29 < 22; i_29 += 4) 
            {
                var_40 = ((/* implicit */signed char) 4611686018427387907LL);
                var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3024267824678081612LL)) ? (((/* implicit */int) arr_43 [i_10])) : (((/* implicit */int) var_12))));
                var_42 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)170))))) ? (((/* implicit */int) ((((/* implicit */int) (short)28758)) < (((/* implicit */int) var_6))))) : (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_14)) + (24881)))))));
            }
        }
        for (_Bool i_30 = 0; i_30 < 0; i_30 += 1) 
        {
            var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) var_3))));
            arr_108 [i_10] [i_30] = ((/* implicit */int) ((((/* implicit */_Bool) arr_63 [i_30] [i_10] [i_30] [i_30] [i_30] [i_30 + 1])) && (((/* implicit */_Bool) arr_58 [i_10] [i_10]))));
            /* LoopNest 2 */
            for (long long int i_31 = 3; i_31 < 20; i_31 += 3) 
            {
                for (short i_32 = 1; i_32 < 19; i_32 += 3) 
                {
                    {
                        var_44 = ((/* implicit */unsigned long long int) var_15);
                        arr_115 [i_10] [i_10] [i_31] [i_31] [i_32] = ((/* implicit */unsigned char) arr_111 [i_10] [i_30] [i_31] [i_10]);
                        var_45 = ((/* implicit */long long int) ((signed char) var_10));
                    }
                } 
            } 
        }
    }
    var_46 = ((/* implicit */signed char) max((((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_1)), (var_3))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))))), ((((+(((/* implicit */int) (unsigned char)168)))) << (((((var_2) ? (((/* implicit */int) (short)10295)) : (((/* implicit */int) var_15)))) - (95)))))));
    var_47 -= ((/* implicit */long long int) min(((+(((/* implicit */int) max(((signed char)100), ((signed char)0)))))), (((/* implicit */int) var_14))));
    var_48 = ((/* implicit */_Bool) var_6);
}
