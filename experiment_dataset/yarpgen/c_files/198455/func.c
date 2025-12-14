/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198455
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            var_18 &= ((/* implicit */_Bool) max((max((arr_2 [i_1 - 1] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [(short)9] [i_1 + 3])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) (signed char)127))))))), (((/* implicit */unsigned int) var_16))));
            var_19 = ((/* implicit */unsigned char) max((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_0]))))));
            var_20 = ((/* implicit */short) max((((/* implicit */long long int) (signed char)127)), (1348172943709165511LL)));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 4; i_4 < 10; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) max((((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned char) var_16)))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_0]))) || (((/* implicit */_Bool) max((((/* implicit */long long int) max((arr_3 [i_0] [i_0]), (arr_0 [i_3])))), (((var_14) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                            var_23 ^= ((/* implicit */short) max((min((((var_14) ^ (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) ((((/* implicit */int) var_16)) << (((((/* implicit */int) arr_5 [i_1])) - (209)))))))), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1])) * (((/* implicit */int) var_5)))))));
                            var_24 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) & ((-(18446744073709551615ULL)))))));
                            arr_13 [i_0] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */unsigned int) ((long long int) (-((-(((/* implicit */int) (signed char)-116)))))));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            arr_18 [i_0 - 1] [i_1] [4ULL] [(unsigned short)10] [i_0] [i_3] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)4058))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_4 [i_1 - 2] [i_0] [i_0] [i_0 - 1]))));
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (+(((unsigned long long int) (signed char)-122)))))));
                        }
                        arr_19 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 4294967295U)))) * (max((((/* implicit */unsigned int) var_15)), (0U))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))) >= (((var_12) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */signed char) max((4294967295U), (((/* implicit */unsigned int) (_Bool)1))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            var_27 = ((/* implicit */_Bool) arr_5 [i_0]);
            var_28 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0])) ^ (((/* implicit */int) arr_6 [i_0] [i_6] [i_6] [i_6]))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)23)), ((unsigned short)65535))))))));
        }
        var_29 = min((max((4294967295U), (((/* implicit */unsigned int) (short)-21138)))), (((/* implicit */unsigned int) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192)))))));
        var_30 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 70368744144896LL)) ? (2119460338U) : (19U)))) - (((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (18446744073709551597ULL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((_Bool) 4294967295U)) || (((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned long long int) var_16)))))))))));
    }
    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((var_14) + (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? ((-(((/* implicit */int) arr_23 [i_7])))) : (((/* implicit */int) min((arr_23 [i_7]), ((_Bool)0)))))) >= (((((/* implicit */int) max((((/* implicit */short) arr_24 [i_7] [i_7])), ((short)14)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (short)-5263))))))))))));
        var_32 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_7])) || (((/* implicit */_Bool) arr_25 [i_7])))))));
    }
    var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-5291)))) ^ (((/* implicit */int) ((signed char) var_9))))))));
    var_34 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((short) (-(var_9))))) : (((/* implicit */int) var_10))));
}
