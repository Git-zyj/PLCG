/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40827
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
    var_19 = ((/* implicit */int) var_16);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) 4294967295U);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_2 [i_1] [i_0]) * (arr_2 [i_0] [i_1])))) ? (arr_2 [i_1] [i_0]) : ((+(arr_2 [i_0] [i_1])))));
            /* LoopSeq 2 */
            for (int i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [1U] [i_1] [i_1] [i_1])))))) == (arr_2 [i_2 - 2] [i_2 - 3])));
                /* LoopSeq 2 */
                for (signed char i_3 = 2; i_3 < 11; i_3 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_4 = 2; i_4 < 10; i_4 += 3) 
                    {
                        arr_17 [i_0] [i_3] [i_2 - 2] [i_3] [(short)0] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_1] [i_1])) - (((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)-12)) : (((/* implicit */int) (short)24674)))) * (((/* implicit */int) (unsigned short)12))))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-24675)) ^ (((/* implicit */int) (short)-23958))));
                    }
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((9223372036854775807LL) == (((/* implicit */long long int) arr_2 [i_0] [0U]))));
                        var_24 = ((/* implicit */signed char) (short)-24675);
                        arr_21 [i_3] [(unsigned char)11] = max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) / (3617473608U))), (max((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) * (arr_20 [i_0] [i_0] [i_3] [i_0] [i_0]))), (arr_8 [i_5 + 1] [i_3 - 2] [i_2 - 1]))));
                        arr_22 [i_5] [i_3] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)126)) <= (586664282))) && (((/* implicit */_Bool) arr_1 [i_2 - 3]))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_3] [i_3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) min(((short)-1), ((short)24673)))) ? (arr_19 [i_0] [i_3 - 1] [i_0] [i_3] [i_1]) : (((/* implicit */unsigned long long int) ((var_9) ^ (arr_10 [i_2 - 1] [i_1] [i_2] [i_3 + 1] [i_3])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3617473599U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_3] [i_6]))) : (arr_15 [i_2 - 1] [i_3] [i_3] [i_3 - 1] [i_3] [i_2 - 1]))))));
                        arr_28 [i_6] [i_3] [i_0] [i_0] [i_1] [i_0] &= ((/* implicit */unsigned int) (signed char)126);
                    }
                    var_25 = ((/* implicit */unsigned char) (~(3617473599U)));
                }
                for (unsigned char i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    var_26 -= ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)24680)) ^ (((/* implicit */int) arr_13 [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2]))))) : (((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2 - 2] [i_2 + 1] [i_7] [i_7]))))));
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_0] [i_2 - 2]))))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-1988723993450923689LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_2 - 2]))))))));
                }
                arr_31 [(_Bool)1] [i_1] [(_Bool)1] = ((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [10] [i_2 + 1] [(short)2] [i_2] [i_2 - 2] [10U]))) * (2570641257U)))));
                arr_32 [i_2] [i_1] = ((/* implicit */signed char) (unsigned short)65525);
            }
            for (short i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                arr_36 [i_0] [i_1] [(_Bool)1] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_33 [i_0] [i_1] [i_8]), (2159004088U))))));
                /* LoopSeq 1 */
                for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    arr_39 [i_9] [i_9] [i_8] [i_9] = ((/* implicit */signed char) max((max((max((var_16), (arr_33 [i_0] [i_1] [i_1]))), (((/* implicit */unsigned int) arr_0 [i_0])))), (((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_23 [i_1])))) ? ((-(((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_38 [i_1])) : (((/* implicit */int) (short)-1)))))))));
                    var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_8] [i_9])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)68))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_1] [i_1] [i_9] [i_1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_9] [i_8] [i_0] [i_0]))) ^ (2493278862U))))))));
                    arr_40 [i_0] [i_8] [i_8] = ((/* implicit */int) arr_11 [i_0] [i_0] [i_9]);
                }
            }
            var_29 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((6715873241463718628ULL), (((/* implicit */unsigned long long int) (short)24674))))) ? (((/* implicit */int) (short)24657)) : (((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) (short)-32751)) : (((/* implicit */int) (signed char)-117)))))) ^ ((-(((/* implicit */int) (_Bool)1))))));
            arr_41 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((2135963208U), (((/* implicit */unsigned int) (unsigned char)117))));
        }
        for (short i_10 = 0; i_10 < 12; i_10 += 2) 
        {
            arr_44 [i_0] [i_0] = arr_10 [i_0] [(unsigned short)6] [i_10] [(unsigned short)6] [i_10];
            arr_45 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_0] [i_10])) * ((~(((/* implicit */int) arr_38 [i_10]))))));
        }
        arr_46 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((arr_38 [i_0]), (((/* implicit */short) (signed char)104))))) ? (arr_29 [(unsigned short)11] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-1), (((/* implicit */short) (signed char)(-127 - 1))))))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0])))));
        arr_47 [i_0] = ((/* implicit */int) (short)1);
        var_30 = ((/* implicit */unsigned int) max(((short)1), (arr_5 [i_0] [i_0])));
    }
    for (int i_11 = 1; i_11 < 12; i_11 += 3) 
    {
        var_31 ^= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned char)138)) ? (((((/* implicit */_Bool) (short)-2491)) ? (((/* implicit */int) (short)-23672)) : (((/* implicit */int) (short)-24687)))) : (((/* implicit */int) (short)-24673))))));
        arr_50 [i_11] = ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_48 [i_11] [i_11]) == (arr_49 [i_11 + 1]))))))) ^ (((((/* implicit */_Bool) 14122999318767412296ULL)) ? (((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_48 [i_11] [i_11 + 4]))) : (var_9)))));
        arr_51 [i_11] = max((max((arr_48 [i_11 - 1] [i_11 + 3]), (arr_48 [i_11 + 3] [i_11 + 2]))), (arr_48 [i_11 - 1] [i_11 - 1]));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_32 = ((/* implicit */unsigned int) arr_52 [i_12]);
        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */int) (signed char)52)), (((((/* implicit */int) (short)-32758)) ^ (((/* implicit */int) (short)-24674)))))) : (((/* implicit */int) (unsigned short)57786))));
        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) max(((short)15006), (((short) 288212783965667328ULL)))))));
        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_52 [i_12]), (max((((/* implicit */unsigned short) (short)-24020)), (arr_52 [i_12])))))) ? (((((/* implicit */_Bool) (unsigned char)117)) ? ((~(((/* implicit */int) (short)32070)))) : (((/* implicit */int) arr_52 [i_12])))) : (((/* implicit */int) arr_52 [5ULL]))));
        arr_54 [i_12] = ((/* implicit */unsigned char) 4323744754942139299ULL);
    }
    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)(-32767 - 1)))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40840))) : (14122999318767412296ULL))))))));
    var_37 = ((/* implicit */unsigned long long int) ((signed char) var_3));
}
