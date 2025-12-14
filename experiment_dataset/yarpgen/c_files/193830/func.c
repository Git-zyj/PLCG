/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193830
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
    for (long long int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (max((var_7), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((((/* implicit */int) var_9)) >> (((/* implicit */int) var_8)))))))) || (((/* implicit */_Bool) var_0))));
                    arr_8 [10LL] [1LL] [i_1] [1LL] = ((/* implicit */signed char) min((var_7), (((/* implicit */long long int) ((short) var_5)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 3; i_3 < 11; i_3 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (+(((long long int) var_6)))))));
                        var_19 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */int) (unsigned char)231)) - (((/* implicit */int) var_5)))) : ((+(var_0)))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)184)) % (((/* implicit */int) (unsigned short)22710))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42825))))), (max((var_4), (((/* implicit */unsigned long long int) var_5))))));
                            var_21 *= ((/* implicit */_Bool) ((((min((((/* implicit */unsigned long long int) var_5)), (var_13))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) ? (var_10) : (((/* implicit */unsigned int) var_0))));
                            var_22 *= ((/* implicit */unsigned int) min((((/* implicit */long long int) (unsigned short)22710)), (12LL)));
                            arr_14 [i_0] [(short)10] [i_0] [(signed char)9] [i_1] [i_0] = ((/* implicit */unsigned char) var_2);
                        }
                        for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(min((((/* implicit */int) var_16)), (var_6)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */int) var_12))))) && (((/* implicit */_Bool) var_4))))) : (((((/* implicit */_Bool) var_16)) ? (var_0) : (((/* implicit */int) var_2))))));
                            var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_2)))) >> (((/* implicit */int) ((_Bool) var_2)))));
                        }
                        arr_18 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */signed char) 5211853417524386277LL);
                    }
                    for (unsigned char i_6 = 3; i_6 < 11; i_6 += 4) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_7 = 1; i_7 < 10; i_7 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_10)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))));
                            arr_25 [i_1] [i_1] = ((/* implicit */_Bool) ((((min((((/* implicit */int) var_3)), (var_11))) + (2147483647))) >> ((((-(var_11))) - (1586464053)))));
                            arr_26 [i_0 - 3] [i_1] [(short)5] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned short) var_9))))) ? ((+(((/* implicit */int) var_16)))) : (min((var_0), (var_6)))))) ? ((+(var_6))) : ((~(((/* implicit */int) var_16))))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))));
                            arr_29 [i_8] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) var_16)) == (var_0)))), (var_1)))) * (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) ((var_11) % (var_0)))))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_34 [i_1] = ((/* implicit */_Bool) var_9);
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_15))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */int) var_8))))) : (var_13)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) - (var_0)))) : (var_7)));
                        }
                        for (int i_10 = 1; i_10 < 10; i_10 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_6) : (var_6)))) / (((long long int) var_3))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) | (-13LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_14))))));
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)65511))))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) != (var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)184)))))))))));
                        }
                        var_30 = ((/* implicit */int) (-(var_13)));
                        var_31 = ((/* implicit */signed char) ((long long int) min((var_0), (min((((/* implicit */int) var_1)), (var_0))))));
                        arr_39 [i_0] [i_0 + 1] [i_0] [i_0] [i_1] = (-(var_11));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        for (long long int i_12 = 3; i_12 < 12; i_12 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */long long int) min(((signed char)91), (((/* implicit */signed char) (_Bool)1))));
                                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (max(((+(((/* implicit */int) var_1)))), (((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_1))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_16)) >> (((((/* implicit */int) var_3)) - (10673)))))) ? (max((((/* implicit */unsigned long long int) var_2)), (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_11) / (var_0)))) == (min((var_13), (((/* implicit */unsigned long long int) var_16))))))))));
    /* LoopNest 3 */
    for (signed char i_13 = 3; i_13 < 19; i_13 += 1) 
    {
        for (unsigned short i_14 = 0; i_14 < 21; i_14 += 2) 
        {
            for (signed char i_15 = 0; i_15 < 21; i_15 += 1) 
            {
                {
                    var_35 = ((/* implicit */_Bool) ((((((/* implicit */int) var_16)) >= (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_13)));
                    var_36 = ((/* implicit */_Bool) var_10);
                    /* LoopNest 2 */
                    for (short i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        for (int i_17 = 1; i_17 < 20; i_17 += 4) 
                        {
                            {
                                arr_59 [i_13 + 1] [i_13 + 1] [i_14] [i_15] [i_16] [i_17 - 1] [i_13] = ((/* implicit */unsigned long long int) var_10);
                                var_37 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((signed char) var_15)), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_15)))))))), ((+(min((var_13), (((/* implicit */unsigned long long int) var_0))))))));
                                var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
