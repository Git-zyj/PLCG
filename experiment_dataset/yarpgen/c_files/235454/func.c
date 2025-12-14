/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235454
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (min((((unsigned int) var_3)), (((/* implicit */unsigned int) var_4)))) : (max((var_2), (((/* implicit */unsigned int) ((_Bool) 4060041250U)))))));
    var_11 += ((/* implicit */unsigned int) (_Bool)1);
    var_12 = ((/* implicit */unsigned int) ((var_0) << (((((/* implicit */int) (short)-24373)) + (24395)))));
    var_13 = ((/* implicit */int) max((max((var_8), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((var_4) << (((var_5) - (14250996809538517172ULL))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 1; i_2 < 11; i_2 += 1) 
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0 - 1] [i_2 + 2])) << (((/* implicit */int) arr_3 [i_0 + 1] [i_2 + 2]))));
                    var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13481)) ? (((/* implicit */int) (_Bool)1)) : (-1340253652)))) ? (((/* implicit */unsigned long long int) var_6)) : (arr_0 [i_0] [9ULL])));
                }
                for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_1 [i_0 + 1])), (((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_1)), (var_3)))) ^ (min((arr_0 [i_0] [i_1]), (((/* implicit */unsigned long long int) (short)32766))))))));
                    /* LoopSeq 2 */
                    for (signed char i_4 = 1; i_4 < 11; i_4 += 4) 
                    {
                        arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) var_4);
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)35842), (((/* implicit */unsigned short) (unsigned char)101)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_3] [i_3] [8LL] [i_4]))) + (arr_13 [i_0] [i_1] [i_3] [i_4] [i_3])))))))));
                    }
                    for (unsigned short i_5 = 3; i_5 < 11; i_5 += 1) 
                    {
                        var_17 -= ((/* implicit */short) (signed char)-1);
                        /* LoopSeq 3 */
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            arr_22 [i_3] [i_1] [(unsigned char)6] [i_1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)52032)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47838))) - (4060041251U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            arr_23 [i_0] [i_1] [i_3] [i_0] [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1]))) * (var_0));
                        }
                        for (unsigned char i_7 = 1; i_7 < 11; i_7 += 1) 
                        {
                            arr_27 [i_1] [i_1] [i_1] [i_1] [i_5] [i_1] = ((/* implicit */int) ((max((arr_0 [i_7 + 1] [i_7 + 2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (8843714227490604076LL)))))) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) var_9))))) ^ (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) 234926022U)))))))));
                            var_18 = ((/* implicit */long long int) ((var_5) + (((/* implicit */unsigned long long int) 4060041273U))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            var_19 ^= ((((((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_1] [i_5] [i_1] [i_3])) && (((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-25011)) ^ (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */long long int) var_2)), (arr_2 [i_0]))))) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                            var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) arr_3 [i_0 - 2] [i_5 + 2]))))) ? (-1485582835) : (var_4)));
                        }
                    }
                    arr_30 [i_3] &= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((-1485582835) == (((/* implicit */int) (signed char)13))))), (((var_5) - (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */int) arr_1 [i_3])))))))));
                    arr_31 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_4 [i_0])) + (((unsigned long long int) max((((/* implicit */unsigned long long int) var_1)), (var_5))))));
                    arr_32 [i_0] [i_0] [i_1] = ((/* implicit */short) min((((((/* implicit */unsigned long long int) 1152921504573292544LL)) - (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */unsigned long long int) 63)) : (281474976710652ULL))))), (min((arr_21 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3] [i_3]), ((~(var_0)))))));
                }
                for (int i_9 = 1; i_9 < 12; i_9 += 4) 
                {
                    arr_36 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((arr_29 [i_9 + 1] [i_1] [i_1] [i_1] [i_0 - 2] [i_0 + 1] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28)))))) ^ (var_0)));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 2; i_10 < 12; i_10 += 3) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) (unsigned short)1008);
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min((((((/* implicit */int) arr_37 [i_10 + 1] [i_0] [i_10 - 2] [i_10] [i_0] [i_0])) ^ (((/* implicit */int) (signed char)-1)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_37 [i_11] [i_0] [i_10 - 2] [i_10] [i_0] [i_9])) : (((/* implicit */int) arr_37 [0U] [i_0] [i_10 + 1] [i_0] [i_0] [i_1])))))))));
                            }
                        } 
                    } 
                    var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 597549898)) ? (max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_9 - 1])), (arr_13 [i_0] [i_0] [i_9 - 1] [i_0 + 1] [i_0]))) : (((/* implicit */unsigned long long int) (((((_Bool)1) ? (var_4) : (((/* implicit */int) arr_42 [i_0 - 2] [i_1] [7U] [i_0] [i_1] [i_0])))) - (((((/* implicit */_Bool) 4060041247U)) ? (2147483623) : (((/* implicit */int) (unsigned char)193)))))))));
                }
                var_24 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) 7795213804022176437LL)), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (var_0)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_1] [i_0] [i_0] [i_0]))) % (var_5))) : (((/* implicit */unsigned long long int) ((var_2) << (((var_2) - (714908277U))))))))));
            }
        } 
    } 
}
