/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246766
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
    for (unsigned long long int i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned char) (~((~(2655070299U)))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 1]))) ^ (var_12)));
                        arr_12 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((signed char) arr_11 [i_0 + 1] [i_0 + 1] [i_0 - 2]));
                        var_17 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) var_8)) : (var_3)));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned char) (((((~(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))) + (2147483647))) >> (((((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) 2701155156083480535ULL)) ? (((/* implicit */unsigned long long int) 33554431LL)) : (16106127360ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 15745588917626071080ULL)) || (((/* implicit */_Bool) 606825U)))))))) - (33554413ULL)))));
                        var_19 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_1)) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (2701155156083480535ULL)))))))));
                        arr_16 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_0 [i_1] [i_4]), (arr_0 [i_1] [i_4]))))));
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            arr_20 [i_1] [i_1] [i_2] [i_4] [i_1] [i_0 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_5])) ^ (((/* implicit */int) ((((/* implicit */long long int) var_13)) <= (arr_7 [i_0 - 4] [i_1] [i_4] [i_1]))))));
                            var_20 = ((/* implicit */signed char) (unsigned char)102);
                        }
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
                    {
                        var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [(unsigned char)2])), (arr_11 [i_0] [i_2] [i_2])))) ? ((-(arr_11 [i_0 + 1] [i_0 + 1] [i_2]))) : (max((((/* implicit */long long int) arr_2 [(_Bool)1])), (arr_11 [i_1] [i_1] [i_2])))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            arr_26 [i_0] [i_0] [i_1] [i_0 - 3] [i_0] [i_0] [i_1] = ((/* implicit */int) arr_18 [i_0] [i_0] [i_2] [i_0 - 3] [i_2]);
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((long long int) (((!(((/* implicit */_Bool) 2701155156083480548ULL)))) ? (((/* implicit */int) arr_10 [i_6] [i_6] [i_1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_1] [i_1] [i_0])))))))))));
                            var_23 = ((/* implicit */unsigned char) arr_9 [i_2]);
                            arr_27 [i_1] = ((/* implicit */unsigned char) var_14);
                            arr_28 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned long long int) ((long long int) 919149915U))) / (((((/* implicit */_Bool) (unsigned short)511)) ? (arr_22 [i_7] [i_1] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) arr_23 [i_0] [i_1] [i_2] [i_6] [i_7])))))));
                        }
                        var_24 ^= ((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0 - 2] [i_1] [4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_6] [i_0] [i_1] [i_2]))))) : (((/* implicit */int) (_Bool)1)));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((-(9ULL)))))) ? (((var_12) / (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) -1212452675978352470LL)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_1] [i_0] [i_2] [i_6])) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (signed char)-2)))))))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_2] [i_6])) ? (var_9) : (((/* implicit */unsigned long long int) var_6)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3233)) ? (arr_21 [i_0] [i_1] [i_0] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (4286834819U) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_13 [i_0 - 4] [i_0 - 4])))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
                    {
                        arr_31 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_8]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_0 - 1] [i_0] [i_0 - 1] [i_2] [i_1] [i_8])) ^ (((/* implicit */int) var_1))))) : ((~(var_12)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)22393)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) var_3)) : ((+(arr_14 [i_1] [i_1] [i_1])))))));
                        var_27 ^= ((/* implicit */_Bool) arr_13 [i_0 - 1] [i_1]);
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) var_8);
}
