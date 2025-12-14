/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227953
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
    var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)21467)), (((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (unsigned short)20922)) : (((/* implicit */int) var_9))))))), (((((/* implicit */_Bool) ((unsigned char) var_7))) ? (min((4294967295U), (((/* implicit */unsigned int) (unsigned short)2047)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1322112082)) ? (((/* implicit */int) (unsigned short)63489)) : (((/* implicit */int) (unsigned char)150)))))))));
    var_14 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    var_15 += ((/* implicit */unsigned char) var_8);
                    arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_6);
                }
                /* LoopSeq 4 */
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        var_16 &= ((/* implicit */unsigned long long int) arr_1 [i_0] [i_4]);
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((var_0) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_9 [i_1] [i_1] [i_3])))))))));
                        var_18 *= ((unsigned char) ((((/* implicit */_Bool) (unsigned short)2047)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63489)))))) : (min((var_3), (((/* implicit */unsigned int) (unsigned short)63482))))));
                    }
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        var_19 += ((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)38205));
                        var_20 &= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_0 - 1])) < (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)29371)))))))), (((long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_11 [i_0] [i_1] [i_5] [i_5]) : (var_0))))));
                        var_21 ^= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_4 [i_3] [i_0 - 2] [i_3] [i_5]))))));
                    }
                    for (unsigned short i_6 = 2; i_6 < 15; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned int) min(((unsigned short)63489), (((/* implicit */unsigned short) arr_12 [i_1] [i_3]))));
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_13 [i_1] [i_3] [i_1] [i_0])), (var_2))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0 - 2] [i_1])))))))) ? ((-(((/* implicit */int) min(((unsigned short)0), ((unsigned short)2047)))))) : (((/* implicit */int) ((((arr_8 [i_6] [i_1] [i_3]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1]))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_6] [i_3] [i_1] [i_0]))) >= (arr_16 [i_0] [i_1] [i_3])))))))))))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        arr_19 [i_1] [i_1] [i_3] [i_7] = ((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned short) (unsigned char)109))), (-4192194929219464227LL)));
                        /* LoopSeq 1 */
                        for (int i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) (-((-(((unsigned int) (unsigned char)255))))));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_3] [i_1] [i_1] [i_1])) > (((/* implicit */int) min(((unsigned short)2036), ((unsigned short)0)))))))));
                            var_26 ^= ((/* implicit */short) (-(((((-436721534) + (2147483647))) << ((((((+(var_8))) + (1359348726))) - (19)))))));
                            var_27 *= var_0;
                        }
                    }
                    arr_22 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)12720)) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) (unsigned short)65518))));
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 1; i_9 < 15; i_9 += 4) 
                    {
                        var_28 |= ((/* implicit */unsigned char) max((((/* implicit */int) ((((2732083112280089916ULL) << (((-901352820) + (901352822))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) << (((arr_0 [i_9]) - (2235300471U))))))))), (((((/* implicit */int) (unsigned char)44)) * (((/* implicit */int) (signed char)-58))))));
                        arr_25 [i_0] [i_0] [i_3] [i_9 - 1] |= ((/* implicit */short) ((max((arr_23 [i_0 - 2] [i_0] [i_0] [i_0 + 1] [i_0]), (((/* implicit */long long int) var_3)))) > (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_18 [i_0 + 1] [i_9 + 1] [i_0] [i_9])), (var_5)))))));
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) arr_24 [i_0 + 1] [(signed char)3] [i_9 - 1] [i_9 + 4]))));
                        var_30 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)63489)) >= ((-2147483647 - 1)))) ? (((/* implicit */int) arr_21 [i_3] [i_1] [i_1] [i_1])) : (((((/* implicit */_Bool) (unsigned short)51171)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_21 [i_3] [i_1] [i_3] [i_3]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-18324)), ((unsigned short)65517))))) : (2732083112280089916ULL)));
                        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (unsigned short)45653))));
                    }
                    var_32 = ((/* implicit */short) ((unsigned short) (unsigned char)212));
                }
                for (unsigned short i_10 = 2; i_10 < 17; i_10 += 4) /* same iter space */
                {
                    var_33 = ((/* implicit */unsigned short) min((var_33), ((unsigned short)508)));
                    /* LoopNest 2 */
                    for (signed char i_11 = 3; i_11 < 18; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 2; i_12 < 18; i_12 += 1) 
                        {
                            {
                                arr_32 [i_12 - 2] [i_11] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_13 [(unsigned short)14] [i_10 + 2] [i_11 - 2] [i_12 - 2])) : ((+(((/* implicit */int) arr_10 [i_0] [(unsigned char)4] [i_10] [i_12] [i_0]))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_12 - 2] [i_11] [i_1]))) : (-7460415280167105279LL))), (((/* implicit */long long int) min((var_8), (var_8))))))) : (((((/* implicit */_Bool) min((3604788351U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((unsigned long long int) arr_4 [i_0] [i_10] [i_11] [i_12])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1))))))));
                                var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) ((signed char) (short)-1))))))) >= (max((((/* implicit */unsigned int) arr_9 [(signed char)16] [i_10] [(short)4])), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_10] [i_10] [i_12]))) : (arr_0 [i_11]))))))))));
                                var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1] [i_11 - 1]))))) ? (((((-1073741824) + (2147483647))) << (((((/* implicit */int) (unsigned short)59734)) - (59734))))) : (((-901352820) / (((/* implicit */int) (signed char)-93))))));
                                var_36 = max((((unsigned short) ((unsigned short) (unsigned short)8997))), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14365))) >= (12569347715540436839ULL)))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_13 = 2; i_13 < 17; i_13 += 4) /* same iter space */
                {
                    var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_29 [i_0] [i_1] [i_1] [i_13] [i_13]), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_9)))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_0] [4ULL] [8] [i_0 + 1]))));
                    var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((int) (_Bool)1))), (arr_0 [i_0 - 2])))) ? (((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_13 + 1])) >= (((/* implicit */int) arr_21 [i_13] [i_1] [i_13] [i_13]))))) : (((268435455) + (((/* implicit */int) (unsigned short)43367)))))))));
                    var_39 = ((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1959))) >= (arr_30 [i_0 + 1] [i_1] [i_0 + 1])))), ((short)5920)));
                }
                /* vectorizable */
                for (unsigned short i_14 = 2; i_14 < 18; i_14 += 1) 
                {
                    arr_38 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((int) ((long long int) var_1)));
                    /* LoopNest 2 */
                    for (short i_15 = 2; i_15 < 16; i_15 += 1) 
                    {
                        for (unsigned int i_16 = 1; i_16 < 18; i_16 += 1) 
                        {
                            {
                                var_40 = ((/* implicit */unsigned short) ((int) (-(((/* implicit */int) (unsigned short)33372)))));
                                var_41 = ((/* implicit */signed char) ((unsigned short) (unsigned short)12935));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 19; i_18 += 1) 
                        {
                            {
                                var_42 &= ((/* implicit */signed char) (unsigned char)238);
                                arr_49 [i_1] [i_14] = ((/* implicit */short) (+(((/* implicit */int) (signed char)111))));
                                var_43 = ((/* implicit */unsigned int) max((var_43), (((unsigned int) ((unsigned short) arr_15 [i_0] [i_1])))));
                            }
                        } 
                    } 
                }
                arr_50 [i_0] [i_0] [i_0] &= ((/* implicit */short) (-((+(((/* implicit */int) (unsigned char)238))))));
                arr_51 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) max(((((-(((/* implicit */int) (unsigned short)19650)))) * (((/* implicit */int) ((unsigned char) (short)-15774))))), (max(((-(((/* implicit */int) arr_39 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))), (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) (signed char)77)))))))));
            }
        } 
    } 
    var_44 += ((/* implicit */unsigned int) ((((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) (unsigned short)54807)))))) + (2147483647))) << (((393216LL) - (393216LL)))));
}
