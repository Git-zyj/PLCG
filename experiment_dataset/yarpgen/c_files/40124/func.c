/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40124
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
    var_14 = ((/* implicit */signed char) max(((-((+(((/* implicit */int) var_1)))))), (((/* implicit */int) (unsigned char)69))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(arr_1 [i_0] [(signed char)5])))) - ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)190))) - (arr_0 [i_0])))))));
        var_15 = ((/* implicit */unsigned int) (signed char)-1);
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        arr_9 [i_1] [i_2] [i_1] [11U] = max((((unsigned int) arr_5 [i_1 + 1] [i_1 - 1])), (arr_5 [i_1 + 1] [i_1]));
                        arr_10 [i_3] [i_2] [i_2] [i_1] [i_0] &= ((/* implicit */short) (-(((/* implicit */int) ((short) max((922727875227081129LL), (((/* implicit */long long int) (signed char)-38))))))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) (signed char)-52))))) ? (var_8) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [2ULL])))))))) ? ((-(((/* implicit */int) (signed char)6)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        var_17 = ((/* implicit */_Bool) (-((~(((((/* implicit */long long int) ((/* implicit */int) (short)20305))) ^ (7594147712795803516LL)))))));
        var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_12 [i_4]) * (((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [(_Bool)0] [i_4])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) (unsigned char)87)))) == (((/* implicit */int) (unsigned char)7)))))) : (((arr_12 [i_4]) << (((arr_12 [i_4]) - (3539938667U)))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            for (long long int i_6 = 4; i_6 < 24; i_6 += 3) 
            {
                {
                    var_19 *= ((/* implicit */short) min(((+(arr_17 [i_6 + 1] [16] [16] [i_6 - 3]))), (max((arr_17 [i_6 + 1] [(signed char)12] [(signed char)12] [i_6 - 3]), (arr_17 [i_6 + 1] [24] [24] [i_6 - 3])))));
                    var_20 = ((/* implicit */int) max((((((_Bool) arr_16 [(_Bool)1] [(_Bool)1] [i_4])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))) : (arr_15 [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_10)), (var_11))))))), (((/* implicit */unsigned int) ((unsigned short) ((unsigned short) var_2))))));
                    var_21 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_1))))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2967534311335214645LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_6 - 1] [(unsigned char)16] [i_4]))) < (arr_16 [i_6 + 1] [i_5] [i_4]))))) : ((-(arr_16 [i_4] [(signed char)9] [i_4])))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            for (unsigned short i_8 = 1; i_8 < 24; i_8 += 1) 
            {
                for (unsigned short i_9 = 2; i_9 < 23; i_9 += 3) 
                {
                    {
                        var_23 = ((/* implicit */short) ((long long int) min((((/* implicit */unsigned int) var_2)), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_15 [i_4]) : (var_4))))));
                        var_24 ^= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (signed char)105)) <= (((/* implicit */int) arr_11 [(short)22] [(short)22])))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_10 = 0; i_10 < 19; i_10 += 3) /* same iter space */
    {
        arr_30 [i_10] [i_10] = ((/* implicit */short) min((((/* implicit */int) arr_21 [16] [i_10])), (min((((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (signed char)3)))), (((((/* implicit */int) (signed char)-21)) + (((/* implicit */int) var_0))))))));
        var_25 += ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((_Bool) arr_26 [(short)20])) && (((/* implicit */_Bool) max(((signed char)-1), ((signed char)-16))))))), (((unsigned long long int) arr_17 [i_10] [(_Bool)1] [(_Bool)1] [i_10]))));
        var_26 = ((/* implicit */unsigned long long int) (~(max((((unsigned int) (signed char)-1)), (((/* implicit */unsigned int) 2113929216))))));
    }
    for (long long int i_11 = 0; i_11 < 19; i_11 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_12 = 0; i_12 < 19; i_12 += 3) 
        {
            arr_38 [(signed char)18] [i_11] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [(signed char)22] [i_12]))));
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [(signed char)12] [i_12])) + ((-2147483647 - 1))));
            var_28 = ((/* implicit */_Bool) ((((/* implicit */long long int) (-(-16)))) - (8543862698067426506LL)));
        }
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_14 = 2; i_14 < 18; i_14 += 3) 
            {
                var_29 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) min((var_2), (((/* implicit */short) var_0))))), (max((2113929216), (((/* implicit */int) arr_31 [(short)18]))))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (arr_16 [i_11] [i_13] [14LL])))) + ((~(14465729048493719179ULL))))))));
                arr_43 [i_13] = ((/* implicit */signed char) var_7);
            }
            var_30 = ((/* implicit */long long int) (-(var_4)));
            var_31 -= ((/* implicit */int) ((((/* implicit */_Bool) (short)3266)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (max((max((arr_37 [i_11] [(signed char)5]), (((/* implicit */unsigned int) (signed char)15)))), (((/* implicit */unsigned int) min((((/* implicit */signed char) var_0)), ((signed char)98))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_15 = 0; i_15 < 19; i_15 += 2) 
            {
                /* LoopSeq 3 */
                for (signed char i_16 = 1; i_16 < 15; i_16 += 4) 
                {
                    arr_50 [i_16] [i_15] [i_15] [(short)15] [i_11] = ((/* implicit */unsigned short) var_9);
                    arr_51 [(unsigned short)9] [(unsigned short)9] [2LL] [i_16 + 4] = (-(((/* implicit */int) (short)3262)));
                    var_32 = ((/* implicit */unsigned int) ((unsigned short) arr_12 [i_15]));
                    var_33 = ((/* implicit */long long int) ((short) var_1));
                }
                for (short i_17 = 1; i_17 < 16; i_17 += 3) /* same iter space */
                {
                    arr_54 [i_11] [(short)14] [i_11] [i_17] [i_17] [i_11] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) arr_13 [i_17 + 2] [i_17] [i_13 - 1])));
                    var_34 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 2303591209400008704LL)) ? (((/* implicit */int) ((signed char) var_7))) : (953401482)));
                    var_35 -= ((/* implicit */unsigned short) (signed char)115);
                    arr_55 [10U] [i_17] [i_17] [i_11] = ((/* implicit */long long int) ((signed char) arr_49 [i_11] [5LL] [i_15] [i_17 + 2] [i_13 - 1] [i_17]));
                }
                for (short i_18 = 1; i_18 < 16; i_18 += 3) /* same iter space */
                {
                    var_36 = ((/* implicit */short) arr_31 [i_18 + 3]);
                    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_58 [i_15] [i_15] [i_13] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56470))) : (4194303U)));
                }
                var_38 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_11] [i_13 - 1] [i_11] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_25 [i_11] [i_13 - 1] [i_13 - 1] [(unsigned short)1])));
            }
        }
        var_39 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((((/* implicit */int) arr_21 [22U] [22U])) % (((/* implicit */int) (signed char)41)))) ^ (((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_40 [i_11]))))))), (max((((/* implicit */unsigned int) (unsigned short)4064)), (arr_16 [i_11] [i_11] [14])))));
    }
    /* LoopNest 2 */
    for (int i_19 = 0; i_19 < 12; i_19 += 1) 
    {
        for (short i_20 = 0; i_20 < 12; i_20 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_21 = 0; i_21 < 12; i_21 += 1) 
                {
                    arr_68 [i_19] [i_20] [i_19] = ((/* implicit */int) (((+(max((arr_5 [i_19] [i_20]), (((/* implicit */unsigned int) var_12)))))) << (((((/* implicit */int) (unsigned short)46939)) - (46921)))));
                    arr_69 [i_21] [i_19] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) -717015073)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : ((~(3964292497U)))));
                }
                /* vectorizable */
                for (unsigned char i_22 = 2; i_22 < 9; i_22 += 1) 
                {
                    var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_22 + 2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_46 [i_22 - 2]))));
                    var_41 = ((/* implicit */unsigned int) var_13);
                }
                /* LoopSeq 1 */
                for (int i_23 = 0; i_23 < 12; i_23 += 3) 
                {
                    arr_74 [i_19] [i_20] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_0 [i_23])))) ? (arr_15 [i_19]) : ((~(var_4)))));
                    var_42 = ((/* implicit */unsigned short) ((var_3) ? (((((/* implicit */_Bool) var_1)) ? (arr_36 [i_23] [i_20] [i_19]) : (arr_36 [i_23] [i_20] [i_19]))) : (min((arr_36 [12] [12] [i_23]), (((/* implicit */unsigned long long int) (unsigned short)35801))))));
                }
            }
        } 
    } 
    var_43 = ((/* implicit */signed char) min((var_4), (((/* implicit */unsigned int) (unsigned short)50642))));
    var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) (unsigned short)44760))));
}
