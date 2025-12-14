/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216082
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_18 = arr_0 [i_0];
        var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_1 [5LL]))));
        arr_2 [i_0] = ((/* implicit */int) arr_1 [i_0]);
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) ((int) arr_0 [i_0])))));
                        var_21 &= ((16383U) / (((/* implicit */unsigned int) 1416425675)));
                        var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_5 [(_Bool)1] [i_2] [i_0])) : (((/* implicit */int) var_7))))));
                        arr_12 [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0]))));
                    }
                } 
            } 
            var_23 = ((/* implicit */_Bool) (+(arr_4 [i_0])));
        }
        for (short i_4 = 3; i_4 < 9; i_4 += 2) 
        {
            var_24 += ((/* implicit */unsigned long long int) arr_7 [i_0] [i_4]);
            var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1046528U)) ? (-5925982667705687629LL) : (((/* implicit */long long int) 4293920758U))));
            var_26 = ((long long int) (unsigned char)31);
        }
        for (short i_5 = 4; i_5 < 10; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                for (unsigned short i_7 = 4; i_7 < 10; i_7 += 3) 
                {
                    {
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) (signed char)6))))) : (arr_7 [i_7 - 3] [i_7 - 2]))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            var_28 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_5 - 1] [i_5 - 1])) ? (((/* implicit */long long int) var_0)) : (arr_23 [i_5] [i_5] [i_5 - 1] [10U])));
                            arr_28 [i_0] [(short)1] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)122)) << (((1152921504338411520ULL) - (1152921504338411499ULL)))))) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)0))));
                            arr_29 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1] [i_8] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-125)) + (2147483647))) << (((((-7) + (35))) - (28)))));
                            var_29 = ((/* implicit */long long int) var_10);
                        }
                    }
                } 
            } 
            arr_30 [i_0] [(short)10] = ((/* implicit */unsigned int) ((var_3) != (((/* implicit */unsigned long long int) 412058937))));
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            for (int i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                for (unsigned int i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_12 = 1; i_12 < 10; i_12 += 2) 
                        {
                            var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)-121)))) / (var_11)));
                            arr_40 [(short)0] [7LL] [(_Bool)1] [i_11] [i_11] = ((/* implicit */unsigned int) ((((arr_39 [i_0] [i_12 + 1] [i_0] [i_11] [i_12] [i_11] [3U]) + (9223372036854775807LL))) << (((31U) - (31U)))));
                            arr_41 [4] [i_11] = ((unsigned int) (signed char)-109);
                        }
                        for (unsigned int i_13 = 1; i_13 < 9; i_13 += 2) 
                        {
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1230088310)) ? (-928680662) : (-2147483626)));
                            var_32 = ((/* implicit */int) min((var_32), (((((/* implicit */_Bool) arr_21 [i_13 - 1] [i_11] [i_10] [i_0])) ? (((/* implicit */int) arr_16 [i_11])) : (((/* implicit */int) arr_16 [i_0]))))));
                            arr_45 [i_0] [i_9] [i_10] [i_9] [i_13 + 2] [i_13] = ((/* implicit */signed char) ((var_2) << (((arr_43 [i_13] [i_13 + 1] [i_13 + 2] [i_13 + 1] [i_13 - 1] [i_13] [i_13 + 2]) - (3552848178441370958ULL)))));
                            var_33 += ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_43 [i_13 + 2] [i_13 + 1] [i_13 + 1] [(signed char)3] [i_13 + 1] [i_13 + 2] [i_13]))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 1) 
                        {
                            arr_48 [i_0] [0LL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 127)) ? (-6523000957143348928LL) : (6523000957143348947LL)));
                            arr_49 [i_14] [(short)1] [i_10] [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */long long int) arr_22 [i_0] [i_9] [i_0] [i_0])) : (arr_23 [i_0] [i_0] [i_0] [i_0])))));
                            arr_50 [i_0] [i_0] [(_Bool)1] [(unsigned short)6] [i_0] [i_0] = ((/* implicit */int) (+(1046548U)));
                            var_34 = ((/* implicit */signed char) (+(15LL)));
                            var_35 = (((_Bool)0) ? (((/* implicit */int) arr_1 [i_10])) : (((/* implicit */int) arr_1 [i_11])));
                        }
                        arr_51 [i_11] [i_10] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) != (-1230088310)));
                        arr_52 [i_0] [i_0] = ((/* implicit */unsigned char) arr_14 [i_11] [i_9] [i_0]);
                    }
                } 
            } 
        } 
    }
    for (long long int i_15 = 2; i_15 < 18; i_15 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_16 = 1; i_16 < 18; i_16 += 3) 
        {
            for (signed char i_17 = 0; i_17 < 21; i_17 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_18 = 0; i_18 < 21; i_18 += 1) 
                    {
                        for (unsigned int i_19 = 2; i_19 < 20; i_19 += 2) 
                        {
                            {
                                var_36 *= ((/* implicit */unsigned int) min(((-((-(arr_53 [i_19]))))), (((/* implicit */long long int) var_14))));
                                var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_19 + 1])) ? (arr_60 [i_19 - 1] [i_16 + 1] [i_15 + 3] [i_16 + 1]) : (arr_62 [i_19 - 2])))) ? (max((arr_60 [i_19 - 1] [i_16 + 3] [i_15 + 3] [i_18]), (((/* implicit */unsigned long long int) -1249741003)))) : (((/* implicit */unsigned long long int) 194959154U)))))));
                                var_38 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-109))));
                                var_39 += (short)-24907;
                            }
                        } 
                    } 
                    var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60550))) - (arr_62 [i_15 + 3]))) + (((/* implicit */unsigned long long int) var_11)))))));
                }
            } 
        } 
        arr_66 [(short)15] = ((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) max((((/* implicit */int) var_14)), (33546240))))), (((((/* implicit */int) max((arr_55 [i_15] [i_15]), (var_13)))) - (((((/* implicit */_Bool) arr_61 [i_15] [i_15] [13] [i_15])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_64 [i_15 + 1] [i_15 - 2] [i_15 - 2]))))))));
        /* LoopSeq 1 */
        for (short i_20 = 0; i_20 < 21; i_20 += 1) 
        {
            var_41 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) (signed char)-22))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_53 [i_15 + 1]) != (((/* implicit */long long int) ((/* implicit */int) var_15))))))) : (((long long int) arr_62 [i_15 + 3]))));
            var_42 = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_54 [i_15]))))), (((unsigned int) arr_54 [i_15 - 1])));
        }
        var_43 *= ((/* implicit */unsigned char) max(((~(arr_67 [i_15] [i_15]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4293920762U)) ? (((/* implicit */unsigned int) var_6)) : (var_16)))) ? (((/* implicit */long long int) ((int) var_12))) : (((long long int) 1046521U)))))));
    }
    var_44 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 4294967271U))) || (((/* implicit */_Bool) var_9)))))) / (var_3)));
    var_45 = ((min((((unsigned int) -1163924131)), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)121))))))) / (((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))));
    var_46 -= min((((/* implicit */unsigned int) var_7)), (4069102237U));
}
