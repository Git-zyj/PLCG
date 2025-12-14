/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48598
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
    var_18 = ((/* implicit */int) ((unsigned long long int) max((((/* implicit */long long int) (short)32767)), (10LL))));
    var_19 = ((unsigned char) ((((long long int) (_Bool)1)) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)229)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_20 += ((/* implicit */unsigned long long int) ((var_16) > (((/* implicit */long long int) ((/* implicit */int) var_3)))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_4))));
    }
    var_22 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                {
                    arr_10 [11ULL] [i_2] [i_2] [(signed char)9] |= ((/* implicit */unsigned char) var_9);
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) min(((+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_2 [i_1] [i_2])) : (((/* implicit */int) var_3)))))), ((~(-2147483646))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_5 [i_3]))));
                        /* LoopSeq 4 */
                        for (long long int i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                        {
                            var_25 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_12)))) ? (max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) arr_6 [i_2] [i_2] [(signed char)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_3]))))), (var_15)))))));
                            arr_16 [i_5] &= ((/* implicit */unsigned long long int) min((((((/* implicit */int) var_15)) < (((/* implicit */int) (signed char)127)))), (((((/* implicit */_Bool) arr_3 [i_2])) || (((/* implicit */_Bool) arr_2 [i_1] [i_4]))))));
                        }
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
                        {
                            arr_20 [i_1] [(signed char)6] = ((/* implicit */signed char) var_6);
                            var_26 = ((/* implicit */long long int) min((var_26), (((((/* implicit */_Bool) ((unsigned short) arr_18 [(unsigned short)9] [i_2] [6LL] [i_2] [i_2]))) ? (max((arr_19 [i_1] [(short)11]), (arr_19 [i_2] [i_2]))) : (((/* implicit */long long int) max((((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_2] [i_2])), (-1710756163))))))));
                            arr_21 [(_Bool)1] [i_2] [i_3] [i_3] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)26208)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (short)-32767))));
                        }
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                        {
                            var_27 ^= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 4041653909007684249ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-21))) : (-1LL))), (((/* implicit */long long int) min((((/* implicit */unsigned char) arr_5 [i_1])), (min((((/* implicit */unsigned char) arr_5 [9ULL])), ((unsigned char)8))))))));
                            var_28 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [10LL] [i_2]), (((/* implicit */short) var_0)))))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2] [i_2]))) / (var_6)))))) >= ((+(((/* implicit */int) (unsigned char)1))))));
                        }
                        for (long long int i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
                        {
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-28679))) >= (3119516579U))))));
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) (signed char)-103))))))));
                            var_31 = ((/* implicit */signed char) ((_Bool) max((((/* implicit */int) arr_23 [(short)7])), ((+(((/* implicit */int) (_Bool)1)))))));
                        }
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] [i_9] = ((/* implicit */_Bool) arr_13 [i_1] [i_1]);
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (100663296))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_3])) <= (((/* implicit */int) var_7)))))));
                        arr_31 [i_1] [i_9] [(signed char)4] [i_9] [i_1] [(signed char)6] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_8))));
                        arr_32 [(unsigned short)5] [8U] [8U] [i_9] = ((/* implicit */unsigned int) arr_18 [i_9] [4LL] [i_2] [4LL] [4LL]);
                    }
                }
            } 
        } 
    } 
}
