/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2607
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
    var_11 = max((((/* implicit */int) var_7)), (((int) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_7))))));
    var_12 &= (-((~(min((((/* implicit */int) var_5)), (var_8))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_13 -= ((/* implicit */signed char) max(((+(((((/* implicit */_Bool) arr_2 [i_0] [(signed char)12])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)12))))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(signed char)1] [(signed char)1]))) : (((1023U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))));
        var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (_Bool)1)), (3755414021U)));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 2; i_1 < 10; i_1 += 3) /* same iter space */
        {
            var_15 ^= ((/* implicit */unsigned long long int) ((arr_0 [i_1 - 1] [i_1]) >= (arr_0 [i_1 - 2] [3LL])));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        {
                            arr_11 [(signed char)11] [(_Bool)1] [i_1] [2LL] [i_4] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (signed char)119)))) & ((+(((/* implicit */int) var_9))))));
                            arr_12 [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-1))));
                            arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0))) << (((-1) / (((/* implicit */int) (unsigned short)26002))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_5 = 2; i_5 < 10; i_5 += 3) /* same iter space */
        {
            var_16 = min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0] [i_0])), (arr_10 [(short)10] [i_5] [i_0] [i_0] [(unsigned short)8] [i_0] [(unsigned short)8]));
            var_17 *= ((/* implicit */long long int) -1);
        }
        for (short i_6 = 2; i_6 < 10; i_6 += 3) /* same iter space */
        {
            var_18 += ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_6 - 1] [i_0] [i_6] [2LL] [i_0])))) || (((/* implicit */_Bool) ((((_Bool) 127LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (268435455LL))))));
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                for (unsigned short i_8 = 2; i_8 < 13; i_8 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            arr_27 [i_6 - 1] [i_6] [i_9] [i_6] [i_6 - 1] [i_6 + 2] [i_6] = ((/* implicit */unsigned char) ((((-510188328) + (2147483647))) << (((1) - (1)))));
                            var_19 = ((/* implicit */unsigned long long int) arr_2 [i_0] [11]);
                        }
                        for (unsigned long long int i_10 = 3; i_10 < 12; i_10 += 1) 
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [4U] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_9 [i_0]), (((/* implicit */unsigned short) var_5))))) ? (((((/* implicit */_Bool) (unsigned short)39533)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_6] [i_6] [i_8]))) : (arr_0 [(signed char)6] [i_10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0] [i_0]) < (((/* implicit */unsigned long long int) arr_18 [i_0] [i_6] [i_7])))))))))));
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((arr_22 [i_0] [i_7] [(unsigned short)9] [i_8]) & (((/* implicit */long long int) ((/* implicit */int) var_6))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [(unsigned short)11] [i_6] [7U] [i_8 - 1] [(_Bool)1] [(unsigned short)13])) ? (((/* implicit */int) (signed char)-1)) : (arr_4 [i_8] [(signed char)0]))))))) && (((/* implicit */_Bool) ((long long int) ((unsigned long long int) (unsigned char)168))))));
                            arr_33 [i_6 - 2] [i_8 - 1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_6 + 1] [i_8 - 2] [i_8])) ? (arr_3 [i_6 - 2] [i_8 - 1] [i_8]) : (arr_3 [i_6 + 3] [i_8 - 2] [i_0]))) >> (((((((/* implicit */_Bool) arr_3 [i_6 - 1] [i_8 - 2] [i_0])) ? (((/* implicit */unsigned long long int) var_8)) : (arr_3 [i_6 + 3] [i_8 - 1] [i_8]))) - (471427642ULL)))));
                            arr_34 [(_Bool)1] [i_6 - 2] [(_Bool)1] [(unsigned char)4] [0ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_25 [i_8] [(unsigned char)4] [i_6 + 3] [i_8 - 1] [i_10 - 3]), (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */short) (signed char)-22)))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-34)), ((unsigned short)65535)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_7 [i_10] [i_8] [i_7] [i_6] [i_0] [i_0])) : (((/* implicit */int) (signed char)-4))))))) : (((((((/* implicit */_Bool) arr_26 [i_6] [i_0])) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-34))) - (4634176488578475850ULL)))))));
                        }
                        var_21 -= ((/* implicit */signed char) (+((~((-(((/* implicit */int) (_Bool)0))))))));
                    }
                } 
            } 
        }
        arr_35 [i_0] = ((/* implicit */unsigned long long int) arr_5 [(short)0] [(short)0] [(short)0] [i_0]);
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_11 = 0; i_11 < 14; i_11 += 3) 
        {
            arr_39 [i_0] [i_11] [i_0] |= ((/* implicit */unsigned long long int) 4294967276U);
            arr_40 [(signed char)10] [(signed char)10] [i_0] = ((/* implicit */signed char) (~((~(9343315628576086738ULL)))));
            arr_41 [3ULL] [3ULL] = ((int) arr_16 [i_11] [i_0]);
            var_22 *= ((var_0) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_21 [i_0] [i_0] [i_11])))));
            var_23 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (471134630) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) (-(-1345006121)))) : (arr_22 [i_11] [i_0] [i_0] [i_0])));
        }
        /* vectorizable */
        for (unsigned short i_12 = 1; i_12 < 11; i_12 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_13 = 0; i_13 < 14; i_13 += 3) 
            {
                for (int i_14 = 0; i_14 < 14; i_14 += 1) 
                {
                    for (unsigned short i_15 = 0; i_15 < 14; i_15 += 2) 
                    {
                        {
                            arr_52 [i_13] [i_14] [11LL] [i_13] [i_12] [i_0] [i_13] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_15 [i_12 - 1] [i_12 + 2] [i_12 + 1]))));
                            var_24 *= ((/* implicit */signed char) ((unsigned long long int) (-(arr_25 [i_15] [i_12] [i_12] [4] [i_15]))));
                        }
                    } 
                } 
            } 
            arr_53 [i_0] [i_12] &= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_9)) ? (0) : (arr_4 [i_0] [0])))));
        }
        for (signed char i_16 = 1; i_16 < 12; i_16 += 1) /* same iter space */
        {
            arr_56 [i_0] [i_0] [(signed char)1] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_10 [(signed char)8] [(signed char)8] [i_0] [i_0] [i_16] [i_16] [i_16])) && (arr_50 [(signed char)4] [(signed char)4] [i_0] [i_16] [i_16] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(arr_0 [i_0] [i_16 + 1]))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_10)))))))) : (((max((((/* implicit */unsigned long long int) arr_48 [i_0])), (13812567585131075765ULL))) << (((((/* implicit */int) (signed char)-75)) + (135)))))));
            var_25 = ((/* implicit */signed char) ((unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_0] [(_Bool)1])) ? (arr_4 [i_0] [(_Bool)1]) : (((/* implicit */int) var_4))))), (max((((/* implicit */unsigned int) arr_19 [4ULL] [i_16] [4ULL])), (var_0))))));
            arr_57 [i_16] [(signed char)12] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_0 [i_0] [i_16 - 1])))) || (((arr_17 [i_16 + 2] [i_16 + 2]) > (arr_17 [i_16 + 2] [i_16 + 2])))));
            var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) arr_9 [i_16 - 1]))))) ? (((/* implicit */int) arr_9 [i_16 - 1])) : (max((arr_46 [i_16 - 1] [i_0] [i_16 + 2]), (arr_46 [i_16 - 1] [i_0] [i_16 + 2])))));
        }
        for (signed char i_17 = 1; i_17 < 12; i_17 += 1) /* same iter space */
        {
            var_27 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((602519059), (((/* implicit */int) var_1))))) ? (((-677346196) ^ (((/* implicit */int) var_5)))) : (((/* implicit */int) (signed char)-1)))) % (max((((((/* implicit */int) (unsigned short)39533)) << (((/* implicit */int) arr_16 [i_0] [i_17])))), (((/* implicit */int) var_7))))));
            arr_60 [i_0] [i_17] [i_17] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_4 [i_17] [i_17 + 1])) ? (((/* implicit */unsigned int) arr_4 [i_17] [i_17 + 1])) : (546072014U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_17] [i_17 + 1])) ? (arr_4 [i_17] [i_17 + 1]) : (arr_4 [i_17] [i_17 + 1]))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_18 = 0; i_18 < 16; i_18 += 3) 
    {
        arr_64 [i_18] = ((((/* implicit */_Bool) 8388607)) ? (((/* implicit */int) arr_61 [14])) : (((((/* implicit */_Bool) (unsigned short)27672)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_62 [i_18])))));
        arr_65 [i_18] = ((/* implicit */signed char) ((arr_63 [i_18]) > (((/* implicit */unsigned int) ((/* implicit */int) ((-1LL) < (((/* implicit */long long int) arr_63 [i_18]))))))));
        arr_66 [i_18] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_61 [i_18])) ? (((/* implicit */int) arr_61 [i_18])) : (((/* implicit */int) arr_62 [(short)11])))));
    }
    for (int i_19 = 0; i_19 < 22; i_19 += 1) 
    {
        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [12] [i_19])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)110)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -4704823916643931270LL)))) : (((8191ULL) + (arr_67 [i_19] [i_19])))));
        /* LoopSeq 2 */
        for (unsigned int i_20 = 0; i_20 < 22; i_20 += 3) 
        {
            arr_71 [i_19] [i_20] = 472567919U;
            var_29 *= ((((((/* implicit */long long int) ((/* implicit */int) var_4))) >= (((var_10) & (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))))) && (arr_69 [i_19] [i_19]));
            var_30 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) 16777215LL)), (arr_67 [i_19] [i_20]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65530)) && (((/* implicit */_Bool) (signed char)-52)))))));
            arr_72 [(_Bool)1] [(_Bool)1] &= ((/* implicit */unsigned int) (-(((long long int) ((((/* implicit */int) (unsigned short)37872)) << (((/* implicit */int) arr_68 [i_19] [i_19])))))));
            var_31 = -4704823916643931243LL;
        }
        for (int i_21 = 0; i_21 < 22; i_21 += 1) 
        {
            var_32 &= ((/* implicit */_Bool) 16383U);
            var_33 = ((/* implicit */long long int) 14828196131129595547ULL);
            /* LoopSeq 1 */
            for (int i_22 = 1; i_22 < 19; i_22 += 2) 
            {
                var_34 *= ((/* implicit */unsigned long long int) 4704823916643931235LL);
                var_35 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned short) arr_67 [i_19] [(unsigned char)4]))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (17794662588605680814ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))) ? (max((((((/* implicit */unsigned int) var_8)) % (var_0))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_68 [i_19] [i_19]))))))) : (((((/* implicit */_Bool) arr_70 [i_19] [i_19])) ? (arr_74 [i_19] [(_Bool)0] [i_19]) : (arr_74 [i_19] [(_Bool)1] [i_22])))));
                var_36 = ((/* implicit */int) ((((/* implicit */unsigned int) min((((/* implicit */int) (signed char)57)), (arr_75 [i_22])))) == (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_76 [i_22 - 1] [i_21])) < (((/* implicit */int) (signed char)-37))))), ((~(var_0)))))));
            }
            var_37 |= (-(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1)), (arr_78 [(_Bool)1] [i_21])))) ? (((long long int) arr_78 [(signed char)20] [(signed char)20])) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65518)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_76 [i_19] [i_21]))) : (arr_74 [i_19] [(unsigned short)20] [i_19])))))));
        }
        arr_79 [i_19] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)8941)) != (((/* implicit */int) (unsigned short)25260)))) ? (((/* implicit */int) ((unsigned short) arr_77 [i_19] [i_19] [i_19]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_75 [i_19])))))))) % (min((max((((/* implicit */unsigned int) arr_75 [i_19])), (2467617180U))), (((((/* implicit */_Bool) arr_78 [(_Bool)1] [i_19])) ? (423519927U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
        var_38 *= ((/* implicit */short) max(((!(((/* implicit */_Bool) arr_75 [i_19])))), (((((unsigned int) 16072739642365905192ULL)) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-47)))))));
    }
    var_39 = ((/* implicit */unsigned long long int) var_10);
    var_40 = var_9;
}
