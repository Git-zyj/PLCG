/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228688
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
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        var_16 = ((/* implicit */int) min((var_16), ((-((+(((/* implicit */int) arr_1 [i_0 + 2]))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_3 = 4; i_3 < 14; i_3 += 1) 
                {
                    arr_10 [i_3] [i_2] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)1)) * (((/* implicit */int) arr_1 [i_1]))));
                    arr_11 [i_3] [i_1] [i_2 + 1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_8 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23781)))))) ? (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)41754)))) : ((~(((/* implicit */int) (unsigned char)115))))));
                    arr_12 [i_0] [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)23791)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) var_13)))) % (-1607621252)));
                }
                /* vectorizable */
                for (signed char i_4 = 2; i_4 < 14; i_4 += 4) 
                {
                    var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned short)41762))));
                    /* LoopSeq 4 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) var_5)))));
                        arr_18 [i_5 + 1] [i_4 - 2] [i_0] [i_1] [i_0] |= ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2 + 3] [i_4]);
                    }
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */short) ((((/* implicit */int) (signed char)65)) > (((/* implicit */int) var_11))));
                        arr_22 [i_6 + 1] [i_4 + 1] [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) arr_14 [i_2 - 1] [i_6 + 1] [i_2 + 3] [i_4 - 2] [i_0 + 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65535))))) : (var_2));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [i_0 + 2] [i_1] [i_2] [i_4] [i_1] [i_6]))));
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_19 [i_0 + 2] [i_1] [13ULL] [i_4] [i_4] [i_4]))));
                        arr_23 [(unsigned short)7] [i_4] [i_2 + 2] [i_1 - 4] [i_0] = ((/* implicit */long long int) (~(arr_8 [i_0])));
                    }
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
                    {
                        var_22 = arr_9 [i_4] [i_4 + 3] [i_7] [i_7 + 1] [i_4] [i_7];
                        arr_26 [i_0] [i_0 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_24 [i_0] [i_0] [i_2] [i_1 + 2] [i_1])))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) arr_7 [i_1] [i_2] [i_4 + 1])) + (((/* implicit */int) var_5))))));
                        arr_27 [i_7 + 1] [i_4 + 3] [i_4] [i_2 + 3] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))));
                        arr_28 [i_0 - 1] [i_0 - 1] [i_0 - 1] [9U] [i_7 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_0 - 2] [i_1] [i_2] [i_1 + 1] [i_7 + 1] [i_0 - 2])) ? ((+(0U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)41746)))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
                    {
                        var_23 &= ((/* implicit */unsigned char) (+(-1607621262)));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_2 + 2] [i_4] [i_8] [i_0])) ? (((/* implicit */int) ((unsigned char) (unsigned short)41754))) : (((((/* implicit */int) var_8)) & (((/* implicit */int) (unsigned short)23798))))));
                        var_25 = ((/* implicit */unsigned char) ((int) arr_30 [i_4 - 1] [i_4 - 1] [i_8 + 1] [i_8] [i_8 + 1]));
                    }
                    arr_32 [i_0] [i_1 + 1] [i_2 - 1] [i_0] = ((/* implicit */signed char) (_Bool)1);
                    /* LoopSeq 2 */
                    for (int i_9 = 1; i_9 < 14; i_9 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_4 + 3] [i_9] [i_9])) + (((/* implicit */int) (unsigned short)33086))))) ? (((/* implicit */int) (unsigned char)12)) : (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))));
                        arr_35 [(_Bool)1] [i_1] [i_1] [i_1] [i_9] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 3])) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) var_14))));
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_6 [i_4 + 3] [i_4 + 3] [i_1] [i_1]))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)32455)) : (((/* implicit */int) var_4)))) : (arr_3 [i_1 - 4] [i_2 + 3]))))));
                        var_28 ^= ((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_2] [i_0] [i_4] [(unsigned short)9] [i_9 + 2]);
                    }
                    for (unsigned char i_10 = 1; i_10 < 16; i_10 += 4) 
                    {
                        arr_40 [i_10] [i_10] [i_2] [i_1] [i_10] = ((/* implicit */unsigned short) ((arr_4 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((8810477949420277946ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63488)))))))));
                        var_29 = ((/* implicit */short) ((_Bool) arr_7 [i_0] [i_4] [i_4]));
                        arr_41 [i_0] [i_4] [i_2] [i_10] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_10])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 2])))));
                        var_30 = ((/* implicit */unsigned char) max((var_30), (arr_16 [i_0])));
                    }
                }
                for (int i_11 = 4; i_11 < 14; i_11 += 2) 
                {
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((arr_9 [i_11] [i_11 - 1] [i_11] [i_11] [i_11] [i_11 - 1]), (((/* implicit */short) arr_16 [i_1 - 2])))), (((/* implicit */short) (!(((/* implicit */_Bool) arr_15 [i_0] [i_1 + 1] [i_0] [i_1 + 2] [i_1] [i_2] [i_1 + 3])))))))) ? (7839289868435807164LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)13977)) ? (((/* implicit */int) ((unsigned short) (signed char)-115))) : (((/* implicit */int) (signed char)-13)))))));
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) <= (((/* implicit */int) var_13)))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_1] [i_1] [i_2 + 1] [i_11] [i_0 - 2])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (max((((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (var_15)))));
                    var_33 = ((/* implicit */unsigned long long int) (+(min((((unsigned int) var_1)), (((/* implicit */unsigned int) arr_9 [i_0] [i_2 + 1] [i_0 + 1] [i_11] [i_1] [i_11 - 1]))))));
                }
                arr_45 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_0 + 2] [i_0]))))) ? (((/* implicit */int) ((short) var_6))) : (((/* implicit */int) (_Bool)1)))))));
                var_34 = ((/* implicit */_Bool) min(((unsigned char)7), (((/* implicit */unsigned char) ((15959166918422256836ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))))))));
                arr_46 [i_0 + 2] [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) arr_15 [i_0 - 1] [i_0] [i_1] [8ULL] [i_2 - 1] [i_2 + 3] [i_2 + 3])))));
            }
            for (signed char i_12 = 2; i_12 < 14; i_12 += 2) 
            {
                arr_49 [i_12] [i_1] = ((signed char) (~(((/* implicit */int) var_7))));
                var_35 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_0))))))));
                var_36 = ((/* implicit */short) max((((/* implicit */unsigned short) (((+(18446744073709551615ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_12 + 2] [i_12 - 2] [i_12])) : (((/* implicit */int) arr_43 [i_1])))))))), (arr_19 [i_0] [i_0 - 2] [i_0 + 1] [i_0] [i_12] [i_12])));
            }
            var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) (short)7716))));
        }
        for (unsigned long long int i_13 = 4; i_13 < 14; i_13 += 4) /* same iter space */
        {
            var_38 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14296369215769926849ULL)) ? (2487577155287294779ULL) : (2487577155287294779ULL)))) ? ((~(((/* implicit */int) arr_25 [i_0 - 2] [i_0 + 2] [i_13 + 2])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_25 [i_0 - 2] [i_0 + 2] [i_13 + 2])) : (((/* implicit */int) arr_25 [i_0 - 2] [i_0 + 2] [i_13 + 2]))))));
            arr_54 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [5] [i_0 + 2] [i_0 + 2])) || (((/* implicit */_Bool) (short)4)))) ? (15959166918422256847ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)114)))));
        }
    }
    for (signed char i_14 = 1; i_14 < 19; i_14 += 4) 
    {
        arr_57 [(signed char)18] [(short)8] |= ((/* implicit */short) ((unsigned short) arr_55 [i_14] [i_14 - 1]));
        var_39 = ((short) ((((/* implicit */_Bool) ((1607621266) - (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_56 [i_14 + 1])) : (((/* implicit */int) (unsigned short)1023))))) : (((var_14) ? (var_2) : (((/* implicit */unsigned long long int) 1607621261))))));
    }
    for (int i_15 = 2; i_15 < 14; i_15 += 1) 
    {
        var_40 = ((/* implicit */unsigned short) ((_Bool) ((unsigned long long int) arr_55 [i_15 - 2] [i_15])));
        arr_61 [(signed char)2] &= ((/* implicit */long long int) min((min((((((/* implicit */_Bool) arr_55 [i_15] [i_15])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) 2072718901U)))), (((/* implicit */unsigned long long int) arr_56 [i_15]))));
    }
    var_41 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (var_1)))) ? (((/* implicit */int) max((var_13), (((/* implicit */unsigned char) (signed char)123))))) : (((/* implicit */int) ((var_14) || (((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (1607621297)))))))));
    var_42 = ((/* implicit */long long int) var_1);
    var_43 = ((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */short) var_14)), (var_5))));
    var_44 = ((/* implicit */int) var_11);
}
