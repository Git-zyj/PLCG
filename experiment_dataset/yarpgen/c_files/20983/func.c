/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20983
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
    var_14 += ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((signed char) 9223090561878065152ULL));
                arr_5 [i_1] [i_0] [i_0] = ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) / (((unsigned int) min((((/* implicit */long long int) (signed char)31)), (9223372036854775807LL)))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    arr_9 [i_0] [i_2] = 1ULL;
                    arr_10 [i_0] = ((/* implicit */unsigned int) ((signed char) min((var_5), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)120))))))));
                    arr_11 [(unsigned char)8] [i_0] [0U] |= ((/* implicit */unsigned long long int) -1353961761054526734LL);
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        arr_16 [i_0 - 2] [i_0 - 2] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_2 [i_0])) > (((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                        /* LoopSeq 4 */
                        for (signed char i_4 = 3; i_4 < 11; i_4 += 4) 
                        {
                            arr_21 [12LL] [i_1] [12LL] [i_3] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0 - 2] [i_4 + 1] [i_4 + 1])) > (8356803261000208658ULL)));
                            var_15 = var_13;
                            var_16 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4])) > (((/* implicit */int) var_0))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                        {
                            arr_24 [i_0] [(short)12] [12U] [i_2] [i_0] [13] [i_5] = ((arr_7 [i_0] [i_0 - 1] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (3549309701883212642ULL));
                            arr_25 [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)15713)) >> (((arr_3 [i_0 + 1] [i_0 - 1] [i_0 - 1]) - (3825112241U)))));
                        }
                        for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            arr_29 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_7 [i_6] [i_3] [i_0 + 2]);
                            var_17 *= ((/* implicit */signed char) arr_6 [i_2] [i_1] [i_0]);
                        }
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            arr_32 [i_3] [i_3] [i_3] [i_0] [i_3] = ((/* implicit */short) arr_14 [i_0] [i_1] [i_2] [i_0 + 2] [i_0 + 2]);
                            var_18 ^= ((/* implicit */short) ((arr_7 [i_0] [i_0] [i_0 + 2]) ? (arr_8 [i_0 - 1] [i_0] [i_0]) : (arr_2 [i_0 - 2])));
                            arr_33 [i_0] [(signed char)11] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1] [1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_6)))) : (var_1)));
                        }
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-12)) ? (var_6) : (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-111)) + (2147483647))) << (((((/* implicit */int) (signed char)15)) - (15))))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) (signed char)1);
                            var_21 = ((/* implicit */_Bool) var_4);
                        }
                        for (long long int i_10 = 0; i_10 < 14; i_10 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned int) var_7)), (1346739196U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))))))))))));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((1460391663), (((/* implicit */int) (signed char)39)))))));
                            var_24 = ((/* implicit */signed char) min((((/* implicit */int) (signed char)-56)), (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (signed char)-16))))));
                            var_25 = ((/* implicit */signed char) (~(max(((-(-527699215))), (((/* implicit */int) arr_23 [i_2] [i_8] [i_0 + 2] [i_8] [i_10] [i_1] [i_0 + 2]))))));
                        }
                        for (long long int i_11 = 0; i_11 < 14; i_11 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned long long int) ((long long int) var_12));
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_0 - 2])) : (((/* implicit */int) var_4))))))), (((((((/* implicit */int) (signed char)1)) < (((/* implicit */int) (signed char)3)))) ? (((/* implicit */unsigned long long int) ((int) var_4))) : (10739492170309660794ULL))))))));
                            arr_44 [i_1] [i_11] [i_2] [i_8] [i_2] [i_0] = 2ULL;
                            var_28 = ((/* implicit */unsigned int) (((-(((/* implicit */int) ((unsigned short) var_1))))) & ((((!(((/* implicit */_Bool) (unsigned char)12)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max(((_Bool)1), ((_Bool)0))))))));
                        }
                        for (long long int i_12 = 0; i_12 < 14; i_12 += 4) /* same iter space */
                        {
                            var_29 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_4))))) ? ((+(((/* implicit */int) (signed char)3)))) : (536346624)))) : ((-(var_8)))));
                            arr_48 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), ((~(0LL)))));
                        }
                        arr_49 [i_0] [i_0] [i_2] [i_8] = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (signed char)3))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_8] [1U] [i_2] [(signed char)0])) ? (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) var_4)))) : (((/* implicit */int) ((signed char) var_8)))))) : (((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) <= (((/* implicit */unsigned long long int) var_3))))))))));
                        var_30 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_14 [i_0] [i_0] [i_2] [(unsigned short)0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((-8394581844229475994LL) / (((/* implicit */long long int) 4095954150U))))))) < (((5400330915824213680ULL) / (14288096965007612076ULL)))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) (-((~(((/* implicit */int) var_0)))))))));
                        arr_52 [i_0] [4U] [i_1] [i_13] [i_13] [i_0 - 2] = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) >= ((-2147483647 - 1))))))))));
                        arr_53 [i_0] [7ULL] [7ULL] [i_0] = ((/* implicit */unsigned short) max((arr_45 [i_13] [(unsigned char)0] [i_0] [(_Bool)1] [i_0] [(unsigned char)0] [i_0]), (((/* implicit */unsigned long long int) 0LL))));
                        arr_54 [i_0] [i_0] [i_2] [i_13] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) max((5977580492582358304ULL), (((/* implicit */unsigned long long int) var_3))))) ? (var_1) : (((((/* implicit */_Bool) (signed char)-1)) ? (arr_39 [(signed char)3] [i_0] [i_2] [i_0] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
                    }
                    for (signed char i_14 = 4; i_14 < 12; i_14 += 4) 
                    {
                        arr_57 [i_0] [i_1] [i_0] [(_Bool)0] = ((/* implicit */unsigned short) (-(((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_9))))));
                        arr_58 [i_0] [i_2] [i_0] = ((unsigned long long int) (-(arr_26 [i_0] [(short)11] [i_2] [i_14 + 1] [i_1])));
                        arr_59 [i_0] [i_2] [i_0] = ((/* implicit */int) (+(min((((/* implicit */long long int) (unsigned char)34)), (7LL)))));
                    }
                    arr_60 [i_0] [i_1] [(unsigned short)6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) var_9)) : (0ULL)));
                }
            }
        } 
    } 
    var_32 = ((((/* implicit */int) var_4)) + (((/* implicit */int) (signed char)-48)));
}
