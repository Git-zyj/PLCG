/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214272
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((long long int) var_5))) : (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) > (((/* implicit */int) (short)32767))))))))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((var_10), (((/* implicit */unsigned int) var_8))))))) > (((((/* implicit */_Bool) min((var_7), (var_1)))) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) var_0)) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 194888668U))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = arr_0 [i_0];
        var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_2))))) < (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32744))) : (var_3)))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 4; i_1 < 7; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 7; i_2 += 1) 
            {
                for (short i_3 = 2; i_3 < 6; i_3 += 3) 
                {
                    {
                        var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-32747))));
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            arr_10 [i_0] [i_3 - 2] [i_3] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_2] [i_2 + 1] [i_2 + 3] [i_2 + 2])) ? (((/* implicit */int) arr_7 [i_2] [i_2 + 1] [i_2 + 3] [i_2])) : (((/* implicit */int) (unsigned char)255))));
                            var_16 = var_0;
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) (short)-32753)) : (arr_2 [i_0 - 1])));
                            arr_11 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_3] [i_0] = ((/* implicit */unsigned char) ((unsigned int) arr_9 [i_0 - 1] [i_1 + 3] [i_2 + 3]));
                            var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) ((short) 2147483647))) ? (((/* implicit */int) ((_Bool) 305751034U))) : (((var_1) / (((/* implicit */int) (unsigned char)4))))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_19 = (!(((/* implicit */_Bool) (short)24711)));
                            var_20 = ((/* implicit */signed char) arr_14 [i_0] [i_1 + 2] [i_2] [i_3] [i_5]);
                            var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))));
                            var_22 ^= ((/* implicit */short) ((((/* implicit */int) (unsigned char)1)) > (((/* implicit */int) (short)-8872))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */_Bool) (((!(arr_5 [i_2]))) ? (((/* implicit */int) (unsigned char)254)) : (((((/* implicit */_Bool) (short)-32738)) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 - 1]))))));
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551606ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)255))))))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            arr_20 [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_3] [i_3])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))))))));
                            var_25 = ((/* implicit */short) (-(((/* implicit */int) (short)-32740))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_8 = 3; i_8 < 6; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 3; i_11 < 7; i_11 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (arr_17 [i_9] [i_9] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_0 - 1] [i_0]))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (unsigned char)9)) : (var_1))))));
                                arr_34 [i_8] [i_11] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)37)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned int i_12 = 0; i_12 < 10; i_12 += 1) 
                    {
                        arr_38 [i_0] [i_12] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_10)) / (((((/* implicit */_Bool) (short)-32750)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19095))) : (var_9)))));
                        var_27 = ((/* implicit */int) arr_21 [i_8 - 1] [i_0 - 1]);
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_12] [i_8 - 2] [i_12])) ? (var_0) : (arr_17 [i_12] [i_8 + 3] [i_12])));
                        var_29 = ((/* implicit */int) min((var_29), (((((/* implicit */_Bool) arr_12 [i_0] [i_8] [i_0 - 1] [i_0] [(_Bool)1] [i_8] [i_0 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)25))))));
                        var_30 = ((/* implicit */long long int) (-(var_9)));
                    }
                    for (signed char i_13 = 3; i_13 < 9; i_13 += 4) 
                    {
                        var_31 = ((/* implicit */int) var_3);
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((arr_17 [i_0] [i_8 + 2] [i_9]) % (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((/* implicit */int) ((130812658U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_9] [i_9])))))))));
                    }
                    for (long long int i_14 = 0; i_14 < 10; i_14 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)0) ? (arr_16 [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */int) arr_4 [i_8 + 4]))))) ? (3973658273279170195ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_40 [i_9] [i_9] [i_9] [7]))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 4) /* same iter space */
                        {
                            var_34 = ((/* implicit */_Bool) (short)-24712);
                            arr_46 [i_15] [i_15] [i_9] [i_8 + 3] [i_15] = ((/* implicit */_Bool) var_7);
                            var_35 |= ((/* implicit */_Bool) var_2);
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 4) /* same iter space */
                        {
                            arr_49 [i_0] [i_8 + 3] [i_9] [(unsigned char)3] [(unsigned char)3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_7)))))));
                            var_36 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3987626049552788249ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)35))))) || (((/* implicit */_Bool) (-(var_10)))));
                            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_8 - 2] [i_0] [i_0 - 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_9 [i_8 + 4] [i_8] [i_0 - 1]))));
                        }
                        var_38 = 0U;
                        var_39 = ((/* implicit */unsigned long long int) var_5);
                    }
                    arr_50 [i_0] [i_8] = ((/* implicit */int) var_0);
                }
            } 
        } 
    }
    for (unsigned int i_17 = 2; i_17 < 21; i_17 += 4) 
    {
        arr_54 [i_17] [i_17] = ((/* implicit */short) (((_Bool)1) ? (((((/* implicit */unsigned int) ((int) arr_51 [i_17 + 2]))) / (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)37))))) < (((/* implicit */unsigned int) min((arr_52 [i_17] [i_17]), (((/* implicit */int) arr_53 [i_17])))))))))));
        arr_55 [i_17] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) ((var_10) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9)))))))));
        var_40 = ((/* implicit */unsigned short) arr_53 [i_17]);
    }
}
