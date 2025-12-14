/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50018
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
    var_18 = ((((/* implicit */_Bool) max((((int) var_0)), (((/* implicit */int) ((_Bool) (unsigned short)46126)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64512))) : (((((((/* implicit */_Bool) (unsigned short)5)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-75))))) / (((/* implicit */long long int) 1703904951)))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19392)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)19417))))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [(unsigned short)4])) ? (11) : (((/* implicit */int) var_5))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            var_19 = ((/* implicit */long long int) (unsigned short)7534);
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        {
                            arr_17 [i_0] = ((/* implicit */_Bool) (signed char)0);
                            var_20 += ((/* implicit */unsigned int) ((((_Bool) arr_6 [i_0 - 1])) || (((arr_6 [i_2]) <= (arr_6 [i_3])))));
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */unsigned int) 2113929216)) : (25U))))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned char) (unsigned short)46119);
        }
        for (long long int i_5 = 2; i_5 < 9; i_5 += 2) 
        {
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_1))));
            arr_22 [i_5 + 2] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_14))))) : (((var_1) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_5 + 1] [i_0]))))))));
            arr_23 [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_5 + 1])) ? (arr_10 [i_0 + 1] [i_5 + 3]) : (arr_10 [i_0 + 1] [i_5 + 2]))), (min((((/* implicit */long long int) (_Bool)1)), (arr_10 [i_0 + 1] [i_5 + 1])))));
        }
        var_24 = ((/* implicit */unsigned int) 18446744073709551615ULL);
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_6 = 3; i_6 < 15; i_6 += 3) 
    {
        var_25 = ((/* implicit */unsigned int) ((long long int) arr_26 [i_6]));
        arr_27 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (~(arr_26 [i_6]))))) >> (min((((/* implicit */long long int) (unsigned short)19410)), (0LL)))));
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 17; i_7 += 2) 
        {
            for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        for (short i_10 = 3; i_10 < 14; i_10 += 3) 
                        {
                            {
                                var_26 ^= ((/* implicit */int) var_14);
                                var_27 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (short)-17846)) ? (((((-21) + (2147483647))) << (((18446744073709551599ULL) - (18446744073709551599ULL))))) : (((/* implicit */int) (unsigned short)19409)))));
                                arr_37 [i_6] [i_7 - 2] [i_6] [(_Bool)1] [i_6] = ((/* implicit */_Bool) (unsigned short)5969);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        arr_40 [i_11] [i_7] [i_8] [(unsigned char)2] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -159367645)) ? (((((/* implicit */_Bool) arr_30 [i_7 - 1] [i_7 - 1] [i_7 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)3))) : (arr_26 [i_8]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)97)))));
                        arr_41 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((unsigned short) ((unsigned int) arr_32 [i_6 - 2] [i_7 + 1] [i_7 + 1])));
                        arr_42 [(unsigned short)12] [(unsigned short)12] [(unsigned short)12] [(unsigned short)12] [i_6] = ((/* implicit */unsigned short) ((int) arr_24 [i_7]));
                    }
                    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_13 = 0; i_13 < 18; i_13 += 2) 
                        {
                            arr_48 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) (-(0U)));
                            arr_49 [i_6] [i_7] [i_6] [i_7] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)1023))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (1023852484) : (((/* implicit */int) (_Bool)1)))))))));
                            arr_50 [i_6] [i_7] [i_6] [i_6] [i_6] [i_13] [i_13] = ((/* implicit */long long int) (unsigned short)5969);
                        }
                        arr_51 [i_12] [i_12] [i_6] [i_6] [i_7] [i_6] = ((/* implicit */unsigned char) ((signed char) (short)4032));
                    }
                    for (unsigned char i_14 = 0; i_14 < 18; i_14 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) arr_26 [i_14]))));
                        arr_55 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) arr_34 [i_6] [i_6] [i_6] [(unsigned char)15]);
                        var_29 = ((unsigned char) max((((/* implicit */unsigned short) min((((/* implicit */unsigned char) (signed char)-1)), (var_13)))), (min(((unsigned short)19410), (((/* implicit */unsigned short) (unsigned char)111))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_15 = 3; i_15 < 14; i_15 += 3) 
                    {
                        arr_59 [i_6] [i_7] = ((/* implicit */unsigned short) (unsigned char)26);
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (unsigned short)12))));
                    }
                }
            } 
        } 
    }
    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) var_14))));
}
