/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26356
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
    var_15 = ((/* implicit */unsigned int) var_10);
    var_16 = ((/* implicit */unsigned int) ((short) ((unsigned long long int) var_9)));
    var_17 = ((/* implicit */short) (+(((/* implicit */int) var_6))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [(unsigned char)8] [i_0])))))));
        var_19 = ((/* implicit */unsigned int) var_14);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        var_20 = ((((((/* implicit */int) arr_3 [8] [i_1 - 1])) + (2147483647))) >> (((int) (unsigned char)7)));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) | (((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_1)));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            var_22 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (3472769677U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) arr_14 [i_2])) : (((((/* implicit */_Bool) 1073709056)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) (_Bool)1))))));
                            arr_17 [i_3] [i_4] = ((int) (short)32767);
                        }
                        var_23 = ((/* implicit */unsigned int) var_14);
                        arr_18 [i_1 - 1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((_Bool) var_4));
                        var_24 = ((/* implicit */unsigned char) var_1);
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
            /* LoopSeq 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                var_26 ^= (!(((/* implicit */_Bool) (unsigned char)255)));
                var_27 -= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_20 [i_7])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9460077642212767575ULL))))) : ((+(((/* implicit */int) (signed char)-113))))));
                /* LoopSeq 1 */
                for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    var_28 ^= ((/* implicit */unsigned long long int) arr_13 [i_1 - 1] [i_1] [i_1 - 1]);
                    var_29 ^= ((((/* implicit */int) var_3)) / (((/* implicit */int) arr_5 [i_1 - 1])));
                }
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                arr_30 [i_1] [1LL] [i_9] = ((/* implicit */_Bool) arr_0 [i_1 - 1] [(short)8]);
                var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))))));
                var_31 = ((/* implicit */long long int) (-(18446744073709551614ULL)));
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) & (-2147483637)))) + (((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
            }
            for (int i_10 = 2; i_10 < 13; i_10 += 3) 
            {
                /* LoopSeq 4 */
                for (short i_11 = 3; i_11 < 13; i_11 += 3) 
                {
                    var_33 = ((/* implicit */_Bool) 15872LL);
                    var_34 ^= ((/* implicit */unsigned long long int) arr_34 [i_10] [2U]);
                }
                for (short i_12 = 2; i_12 < 13; i_12 += 3) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((-861228871) ^ (((/* implicit */int) (unsigned char)255)))))));
                        var_36 ^= ((((22U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))) && ((!(((/* implicit */_Bool) (unsigned char)109)))));
                    }
                    for (int i_14 = 0; i_14 < 15; i_14 += 3) 
                    {
                        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_15 [i_12 + 2] [i_12 - 1] [i_10] [(short)0] [i_12 - 1])) : (var_11)));
                        var_38 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_1] [i_6] [i_10] [i_10]))))) ? (((/* implicit */int) arr_3 [i_10] [i_6])) : (((int) var_10)));
                        var_39 = ((/* implicit */signed char) (-(arr_2 [i_10] [i_1 - 1])));
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) 4294967295U)))))) / (((((/* implicit */_Bool) (unsigned char)255)) ? (2857763583U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_1 - 1] [i_6] [i_6] [i_14] [(signed char)11] [i_12])))))));
                    }
                    for (short i_15 = 2; i_15 < 12; i_15 += 3) 
                    {
                        var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_0) + (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((4294967295U) == (11U)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                        var_42 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) != (arr_21 [6U] [i_10] [i_6] [i_1 + 1]))));
                    }
                    for (short i_16 = 0; i_16 < 15; i_16 += 3) 
                    {
                        var_43 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (((((/* implicit */_Bool) (signed char)127)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_10])))))));
                        var_44 |= ((/* implicit */short) ((arr_2 [8U] [8U]) << (((/* implicit */int) arr_12 [i_1 - 1] [i_6] [(unsigned char)8] [i_16]))));
                    }
                    var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1045322196)) ? (4294967257U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)48)))));
                    var_46 = ((/* implicit */unsigned char) ((_Bool) (unsigned char)243));
                    arr_51 [i_1 + 1] [i_1] [i_1] [i_10] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)117))));
                }
                for (unsigned char i_17 = 3; i_17 < 11; i_17 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_18 = 1; i_18 < 14; i_18 += 3) 
                    {
                        var_47 *= ((/* implicit */unsigned char) ((var_9) | (arr_24 [i_18] [i_17 + 4] [i_1 - 1] [i_1 - 1])));
                        var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((2147483623) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                    }
                    for (unsigned short i_19 = 2; i_19 < 12; i_19 += 3) 
                    {
                        var_49 = ((/* implicit */unsigned char) ((_Bool) arr_0 [i_1 + 1] [i_10]));
                        var_50 *= ((_Bool) 3958591759281838867LL);
                        var_51 ^= ((/* implicit */long long int) (-(arr_8 [i_6])));
                    }
                    for (unsigned short i_20 = 0; i_20 < 15; i_20 += 3) 
                    {
                        var_52 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_13)))))));
                        var_53 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_3))));
                    }
                    arr_64 [(short)3] [i_10] [i_10] = ((/* implicit */unsigned char) ((long long int) 27U));
                }
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_11)));
                    var_55 -= ((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (_Bool)0))))));
                }
                var_56 = ((/* implicit */_Bool) max((var_56), (((/* implicit */_Bool) ((signed char) ((((/* implicit */int) var_13)) / (((/* implicit */int) (unsigned short)65534))))))));
            }
            var_57 += ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)128)) ^ (((/* implicit */int) (unsigned char)129))));
            var_58 = arr_14 [i_1];
        }
        for (signed char i_22 = 0; i_22 < 15; i_22 += 3) 
        {
            var_59 = ((/* implicit */long long int) ((unsigned int) arr_6 [i_1 + 1] [(unsigned char)6]));
            var_60 = ((/* implicit */_Bool) max((var_60), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [i_22])) ? (arr_43 [i_1] [i_1] [(_Bool)1] [(signed char)2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) << (((((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))) - (10510023668906452794ULL))))))));
            var_61 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_1) ^ (((/* implicit */long long int) arr_56 [i_1] [(unsigned short)14]))))) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_11)))));
        }
        for (short i_23 = 1; i_23 < 14; i_23 += 3) 
        {
            arr_75 [i_1] |= ((/* implicit */unsigned char) ((134217727U) ^ (506338530U)));
            var_62 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_11 [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 1])));
            var_63 += ((/* implicit */_Bool) arr_45 [i_1 - 1] [i_1 - 1] [2] [12] [i_1] [i_1] [i_1 - 1]);
        }
    }
}
