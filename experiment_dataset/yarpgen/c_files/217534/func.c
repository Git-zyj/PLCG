/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217534
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
    var_11 &= ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        arr_8 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (982861768U)))) ? (((/* implicit */long long int) ((arr_4 [i_0 + 2] [(unsigned short)4]) ? (((/* implicit */int) arr_2 [i_0] [6ULL])) : (((/* implicit */int) arr_0 [i_1]))))) : (((arr_4 [i_1] [i_1]) ? (var_3) : (((/* implicit */long long int) arr_1 [i_0 + 1]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) arr_6 [(signed char)4] [i_0] [i_0 + 3] [(signed char)4])))) : (((/* implicit */int) max((arr_0 [i_0]), ((signed char)-7)))))) : (max(((((_Bool)1) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) var_10)))), (((/* implicit */int) (short)0))))));
                        var_12 = (_Bool)1;
                        /* LoopSeq 2 */
                        for (int i_4 = 2; i_4 < 23; i_4 += 3) 
                        {
                            var_13 = min((2147483639), (((/* implicit */int) (unsigned char)255)));
                            arr_12 [19U] [i_0] [19U] [i_1 - 1] [i_2] [i_0] [i_4 - 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_9)))) ? (((((/* implicit */int) (signed char)-26)) - (-688147525))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2] [i_4])) : (arr_3 [i_1] [i_4])))))) != (((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) arr_4 [i_0] [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (min((2933926351U), (((/* implicit */unsigned int) (signed char)104))))))));
                            arr_13 [i_4] [i_4] [i_3] [i_0 - 2] [22] = ((/* implicit */short) ((((/* implicit */_Bool) ((min((arr_10 [i_1 - 1] [i_3] [i_1 - 1] [i_1 - 1] [i_0]), (((/* implicit */int) arr_2 [i_2] [i_4])))) % (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)44497)) : (524287)))))) ? ((-(min((((/* implicit */int) (signed char)75)), (-834847365))))) : ((~((+(((/* implicit */int) arr_4 [i_1] [i_3]))))))));
                            var_14 = ((/* implicit */_Bool) var_9);
                        }
                        for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            arr_17 [i_5] [i_3] [i_1] [i_0 + 3] = ((/* implicit */unsigned int) var_1);
                            arr_18 [i_3] = ((max((((/* implicit */long long int) 834847364)), (2416339355720259513LL))) + (((/* implicit */long long int) ((/* implicit */int) max((var_8), (arr_15 [i_0] [i_2] [(unsigned short)5] [14] [i_1 + 2] [i_0 + 1]))))));
                        }
                    }
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        arr_22 [i_2] = ((/* implicit */unsigned short) var_0);
                        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max((min((((arr_15 [i_0 + 3] [i_0 + 3] [i_0] [i_0 + 1] [(unsigned short)2] [i_2]) ? (1163421841U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9064))))), (((/* implicit */unsigned int) (signed char)0)))), (arr_20 [(unsigned char)20] [i_1 + 1] [(signed char)2] [i_6]))))));
                        arr_23 [i_0 - 2] [i_2] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(var_1)))))) ? (((/* implicit */int) ((_Bool) var_4))) : (((/* implicit */int) ((signed char) arr_3 [i_0 + 3] [i_0 + 3])))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        arr_28 [i_0 - 1] [i_0 - 1] [i_2] [i_7] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_0] [i_0] [i_0 + 2])) ? (((((/* implicit */int) var_10)) % (((/* implicit */int) var_7)))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_0] [i_1])), (arr_27 [i_7] [i_7] [i_7] [i_7] [i_0])))))));
                        arr_29 [i_2] [(unsigned char)22] [(short)16] [i_2] = ((/* implicit */int) (((_Bool)1) ? (((((/* implicit */_Bool) arr_26 [i_0 - 2] [i_1] [i_1 + 1] [i_1])) ? (((/* implicit */long long int) 688147525)) : (arr_24 [i_0 + 3] [i_1 - 1] [i_7] [i_7]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_7] [i_7] [i_2] [i_1] [(unsigned short)16])) ? (((/* implicit */int) arr_2 [i_0 - 2] [i_1])) : (((/* implicit */int) (unsigned short)58765)))))));
                    }
                    arr_30 [i_0] = ((/* implicit */signed char) ((max(((+(((/* implicit */int) (signed char)-125)))), (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (2147483642) : (((/* implicit */int) (_Bool)1)))) >= (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2])))))))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)100)) << (((4928906208411285584ULL) - (4928906208411285569ULL)))));
                    var_17 ^= ((/* implicit */unsigned long long int) max((min((((/* implicit */int) ((unsigned char) var_4))), ((~(((/* implicit */int) arr_25 [18ULL] [i_1] [i_0] [i_0 + 1] [i_0])))))), (((/* implicit */int) max(((unsigned char)99), (((/* implicit */unsigned char) (_Bool)1)))))));
                }
                /* vectorizable */
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        var_18 = ((/* implicit */long long int) ((((int) arr_2 [i_0] [i_0 - 1])) - (((/* implicit */int) ((unsigned short) var_3)))));
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_19 = ((/* implicit */short) ((arr_4 [i_1] [i_1]) ? (arr_24 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)51)))));
                            var_20 = ((/* implicit */unsigned char) -1151854042);
                            var_21 += ((/* implicit */_Bool) var_10);
                        }
                        arr_40 [i_0] [i_1 + 3] [i_8] [i_8] [(unsigned short)15] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-95)) ? (((((/* implicit */_Bool) arr_37 [i_8] [i_1 + 1] [i_8])) ? (arr_35 [i_0] [i_1] [i_8] [i_0] [i_9]) : (((/* implicit */int) arr_11 [(unsigned char)5] [(unsigned char)5] [i_8] [i_1] [(_Bool)1])))) : (((var_8) ? (((/* implicit */int) arr_15 [i_0] [i_1 + 3] [i_8] [9] [i_9] [1LL])) : (((/* implicit */int) arr_0 [i_9]))))));
                        var_22 = ((((/* implicit */_Bool) arr_25 [11] [(_Bool)1] [i_0] [i_0 + 2] [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_0] [i_1] [i_8] [i_1]))) : (((var_2) & (((/* implicit */long long int) arr_20 [i_0] [i_0] [i_8] [i_0])))));
                    }
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))));
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 1; i_11 < 21; i_11 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_12 = 1; i_12 < 23; i_12 += 3) 
                        {
                            var_24 = arr_10 [i_12] [i_11 + 3] [i_8] [i_0] [i_0];
                            var_25 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_44 [i_12] [i_8])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-41))))));
                        }
                        var_26 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_1] [i_1 + 1])) & (arr_10 [i_0] [i_1] [i_0] [i_0] [i_11 + 3]))) * (((/* implicit */int) (signed char)104))));
                    }
                }
                arr_47 [i_0] [i_1 - 1] = ((/* implicit */signed char) ((unsigned int) (~(((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) (signed char)62)))))));
                var_27 = ((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_0] [i_1] [i_1]);
                /* LoopSeq 2 */
                for (signed char i_13 = 1; i_13 < 23; i_13 += 3) 
                {
                    var_28 = (-((-((-(((/* implicit */int) arr_46 [(signed char)19] [i_1] [(unsigned char)6] [i_1] [i_1] [i_0] [i_0])))))));
                    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) arr_38 [(_Bool)0] [(_Bool)0] [(_Bool)0] [(signed char)21] [(_Bool)0] [(signed char)21]))));
                }
                for (unsigned int i_14 = 4; i_14 < 22; i_14 += 2) 
                {
                    var_30 = ((/* implicit */_Bool) arr_27 [i_14] [i_14] [i_14] [i_14] [i_14]);
                    arr_52 [i_14 - 4] [i_1] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_1] [i_0] [i_14])))) | ((+(((/* implicit */int) arr_48 [i_0]))))));
                    arr_53 [i_14 + 1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) arr_24 [i_14 - 4] [i_14 - 4] [i_14 - 3] [i_14 - 2]);
                }
            }
        } 
    } 
}
