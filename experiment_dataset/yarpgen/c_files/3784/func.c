/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3784
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
    var_10 = ((/* implicit */unsigned char) (~(((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_6))))) << (((661294485507874078LL) - (661294485507874070LL)))))));
    var_11 = ((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */unsigned int) (unsigned char)213)), (var_9))) != (var_6))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (524977462U))))))));
                            arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */long long int) arr_11 [i_1] [i_0] [i_3 - 1]);
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned int) (((((-(min((((/* implicit */int) arr_4 [i_0])), (arr_9 [i_0 - 1] [i_1] [i_1]))))) + (2147483647))) << (((((/* implicit */int) ((max(((_Bool)1), ((_Bool)1))) || (((((/* implicit */_Bool) 3769989833U)) && (((/* implicit */_Bool) 387197038))))))) - (1)))));
                /* LoopSeq 2 */
                for (signed char i_4 = 4; i_4 < 13; i_4 += 4) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_0] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1305226694U)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (signed char)-61))));
                        var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) << (((arr_10 [i_4 - 4] [i_0 - 3] [i_0 - 1] [i_0 - 3]) - (3113980963667415552ULL)))));
                        arr_18 [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */_Bool) arr_14 [i_1]);
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)69)) ? (4153885324U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)213)))))) ^ (((((/* implicit */_Bool) (short)32448)) ? (((/* implicit */long long int) 70667102U)) : (-2556938810771809391LL)))));
                        arr_19 [i_1] [i_1] [i_0] [i_5] = ((/* implicit */long long int) ((arr_16 [i_0] [i_0 + 1] [i_5] [i_5]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
                    }
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        var_16 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (var_2));
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_13 [i_0] [i_0] [i_0] [i_0]))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        var_18 = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) max((((/* implicit */long long int) max((arr_6 [i_0] [i_0 - 1]), (arr_6 [i_0] [i_0 - 3])))), (((((((/* implicit */_Bool) 575182401U)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_8 [i_0] [i_1]))) / (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_4 [i_0])) - (28))))))))))) : (((/* implicit */unsigned int) max((((/* implicit */long long int) max((arr_6 [i_0] [i_0 - 1]), (arr_6 [i_0] [i_0 - 3])))), (((((((/* implicit */_Bool) 575182401U)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_8 [i_0] [i_1]))) / (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */int) arr_4 [i_0])) - (28))) + (36)))))))))));
                        arr_24 [i_0 - 1] [(signed char)0] [i_0] [i_0 - 1] = ((/* implicit */long long int) max((((min((1048621066), (((/* implicit */int) (unsigned char)0)))) & (((/* implicit */int) (unsigned short)32549)))), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_8))) && (((((/* implicit */unsigned int) ((/* implicit */int) (short)3584))) >= (var_9))))))));
                    }
                    arr_25 [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3769989834U)) % (4558161499190442623ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [(_Bool)1] [i_1] [(short)0]))) : (3473092484U)))))) || (((/* implicit */_Bool) arr_2 [i_0 - 3]))));
                    var_19 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_6 [i_0] [13U])) ? (((/* implicit */unsigned long long int) 1676000303U)) : (arr_11 [(short)9] [i_0] [i_4 - 3]))) - (((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_4] [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))))) / (((/* implicit */unsigned long long int) -4923927859335364636LL))));
                }
                for (long long int i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0 + 2] [i_0] [i_0 + 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24763)) ? (((/* implicit */int) (short)7870)) : ((-2147483647 - 1)))))));
                    var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_27 [i_0] [i_0] [i_0]))));
                }
            }
        } 
    } 
}
