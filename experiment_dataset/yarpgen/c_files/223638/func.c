/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223638
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
    var_15 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-15255))) > (var_9)))) >= ((-(((/* implicit */int) (unsigned char)0)))))))) >= ((~(var_8))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (-4292684271519015712LL)))) ? ((+(var_12))) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) + (9223372036854775807LL))) << (((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) var_3)) : (var_9))))) - (532543556U)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 23; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */int) (unsigned char)15))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41706)) ? (var_7) : (1055785210)))) ? (var_12) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_13))))))) : (((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) (signed char)27)))) != (((/* implicit */int) (unsigned char)120))))))));
                            /* LoopSeq 4 */
                            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned int) (+(((/* implicit */int) var_10)))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */long long int) var_8))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_5 = 2; i_5 < 21; i_5 += 4) 
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) >= (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) var_5)) : (var_12)))));
                                var_16 ^= ((/* implicit */unsigned long long int) (-(0U)));
                            }
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) max((((((/* implicit */_Bool) ((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)116)))))) ? ((-(var_7))) : (((/* implicit */int) (!(((/* implicit */_Bool) 0U))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) var_6)))))))))))));
                                var_18 *= ((/* implicit */unsigned char) (+(max((((/* implicit */int) var_13)), (var_3)))));
                                arr_22 [i_0] [i_1] [i_1] [i_0] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) (!(var_4)))) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-18)) ? (4292684271519015729LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)116)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */int) (!((_Bool)0))))))));
                                var_19 *= ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */int) (short)-6)))) - (((/* implicit */int) ((var_7) < (((/* implicit */int) (unsigned short)0))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) (unsigned short)19988))))))))));
                                arr_23 [i_3 - 1] = ((/* implicit */unsigned long long int) (signed char)-21);
                            }
                            /* vectorizable */
                            for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                            {
                                arr_27 [i_7] [i_3] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) var_14);
                                arr_28 [i_0] [i_1] [i_3] [i_7] = ((/* implicit */signed char) (-2147483647 - 1));
                                arr_29 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (+(-1LL)));
                                arr_30 [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)76)) == (((/* implicit */int) var_6))));
                            }
                            arr_31 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) max((max((((/* implicit */unsigned char) var_6)), ((unsigned char)0))), (((/* implicit */unsigned char) max(((signed char)121), (((/* implicit */signed char) var_4)))))))) & (((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_8))) > (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))))))));
                            var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-124)) == (((/* implicit */int) var_2)))) ? (var_3) : (((/* implicit */int) (signed char)-32))))), ((-((~(var_8)))))));
                            arr_32 [i_0] [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? ((-(2968459111U))) : (((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28))) : (var_9)))))), (max(((-(2340918087141748361LL))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = (-(max((((/* implicit */long long int) var_4)), (var_12))));
}
