/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51335
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */int) ((max((((/* implicit */unsigned int) var_5)), (4196793939U))) < (((/* implicit */unsigned int) ((/* implicit */int) max((var_8), (((/* implicit */unsigned short) (unsigned char)89))))))))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((7ULL) > (var_11))))) != (var_15)))))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_11)) ? (min((18446744073709551609ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])))) : (18446744073709551609ULL))) <= (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))) : (18446744073709551615ULL))))))));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((/* implicit */int) (unsigned char)255)) : (4194303))) >> (((3001458717105824520ULL) - (3001458717105824506ULL))))) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3]))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            {
                var_20 += max(((~(((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [(unsigned short)6] [i_4])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */int) (unsigned char)1)) : (var_7)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_5] [i_4] [3ULL])))));
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (var_11)))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_6 = 4; i_6 < 10; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 2; i_7 < 10; i_7 += 3) 
                    {
                        for (signed char i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            {
                                arr_23 [i_7] [i_7] [i_6] [i_7] [i_8] [i_7] = ((/* implicit */unsigned short) ((unsigned int) arr_3 [9] [i_7 - 2] [i_5]));
                                var_22 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 18446744073709551609ULL)))) || ((!(((/* implicit */_Bool) (unsigned short)9))))));
                                var_23 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)217))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        var_24 = ((/* implicit */short) (((((~(arr_9 [i_4]))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_9)) / (4194293)))));
                        /* LoopSeq 1 */
                        for (short i_10 = 1; i_10 < 8; i_10 += 4) 
                        {
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) var_5))));
                            var_26 -= ((/* implicit */int) ((unsigned short) 2ULL));
                        }
                        var_27 += ((/* implicit */unsigned char) ((long long int) arr_1 [i_4]));
                        arr_28 [i_9] [i_6] [i_5] [i_4] = ((/* implicit */short) -927352810);
                        arr_29 [i_4] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15445285356603727096ULL)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50262)))))) == (arr_10 [i_6 - 3])));
                    }
                    for (int i_11 = 3; i_11 < 9; i_11 += 4) 
                    {
                        arr_33 [i_4] [i_11] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_6 + 1])) ? (((/* implicit */int) ((var_13) >= (3014609525U)))) : (((/* implicit */int) var_16))));
                        arr_34 [i_11] [10] [i_11] = ((/* implicit */unsigned int) ((unsigned char) 29U));
                        arr_35 [i_11] [i_5] [i_6] [i_6] = ((/* implicit */int) (-(18446744073709551613ULL)));
                    }
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        for (int i_13 = 0; i_13 < 11; i_13 += 1) 
                        {
                            {
                                arr_41 [i_4] [i_13] [i_6 - 1] [(unsigned short)1] [i_13] [i_6] = ((/* implicit */int) (-((~(var_14)))));
                                var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((1426575146) ^ (((/* implicit */int) (unsigned short)9)))))));
                                var_29 = ((/* implicit */unsigned long long int) (short)-12998);
                                var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_7)) + ((~(var_15)))));
                            }
                        } 
                    } 
                    var_31 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5975559147715362508ULL)) ? (((/* implicit */long long int) 1268763810)) : (5728569087906880986LL)))) ? ((+(var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_7))))));
                }
                /* vectorizable */
                for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        for (unsigned int i_16 = 1; i_16 < 9; i_16 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */int) min((var_32), ((~(((/* implicit */int) (short)3803))))));
                                var_33 = ((/* implicit */short) (+(((/* implicit */int) arr_27 [i_4] [i_4] [i_14] [i_15] [i_16]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (int i_18 = 0; i_18 < 11; i_18 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [(_Bool)1] [i_14] [(_Bool)1] [i_14] [i_5] [i_4])) - (((/* implicit */int) arr_17 [i_4] [i_4] [i_17] [i_14] [i_5] [i_4]))));
                                var_35 ^= ((/* implicit */unsigned int) (unsigned short)1501);
                                var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)217))) : (((((/* implicit */_Bool) 6144U)) ? (1756651042U) : (4294967280U))))))));
                                var_37 = ((/* implicit */_Bool) (short)-13846);
                            }
                        } 
                    } 
                    arr_59 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -2128001862)) ? (((/* implicit */int) var_4)) : (arr_3 [i_4] [i_4] [i_4])));
                }
                /* vectorizable */
                for (unsigned short i_19 = 0; i_19 < 11; i_19 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_20 = 4; i_20 < 10; i_20 += 4) 
                    {
                        for (unsigned long long int i_21 = 2; i_21 < 8; i_21 += 4) 
                        {
                            {
                                var_38 = ((/* implicit */_Bool) var_8);
                                arr_68 [i_4] [i_4] [0ULL] [i_20] [(_Bool)1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_21])))))));
                                var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) ^ (arr_32 [i_20 - 2] [i_21 - 2] [i_20 - 2])));
                            }
                        } 
                    } 
                    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (-4194299) : (((/* implicit */int) (short)-22099))))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) (signed char)-82))));
                }
                arr_69 [6ULL] [i_5] [i_5] |= ((/* implicit */unsigned char) var_6);
                var_41 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)3817))));
            }
        } 
    } 
    var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((992720811) & (((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) < (((/* implicit */int) var_16)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) : (((unsigned long long int) 3369091072U)))))));
}
