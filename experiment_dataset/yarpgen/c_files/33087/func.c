/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33087
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0 + 2] [1U] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (-(arr_0 [i_0])))), (min((((/* implicit */long long int) (_Bool)1)), (4343651479679282937LL)))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (~((~(arr_1 [i_0] [i_0 + 1])))));
                    var_17 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 10091869104249629775ULL))));
                    var_18 = ((/* implicit */long long int) ((((_Bool) arr_0 [i_0])) ? (((arr_0 [i_0]) * (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 + 3] [i_0] [i_0])))));
                }
                for (short i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (min((((((/* implicit */_Bool) -1LL)) ? (22LL) : (((/* implicit */long long int) ((/* implicit */int) (short)127))))), (((/* implicit */long long int) (~(arr_13 [i_0] [i_3] [i_3])))))))))));
                    var_20 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 + 2])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0 + 1]))))), (((/* implicit */unsigned int) min((((/* implicit */signed char) ((_Bool) (unsigned short)49125))), (min((((/* implicit */signed char) (_Bool)1)), ((signed char)31))))))));
                }
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) 15718948067515080922ULL))));
                    var_22 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)60913)) : (((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))) : (arr_3 [i_0 - 1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0 + 2])))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_19 [i_5] [i_1] [i_0] = (_Bool)0;
                    var_23 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)127)), (arr_3 [i_0 + 2] [i_1])))) ? ((-(arr_3 [i_0 + 2] [i_1]))) : (min((((/* implicit */unsigned long long int) 3205609311310998435LL)), (arr_3 [i_0 - 1] [i_1]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_6 = 1; i_6 < 16; i_6 += 1) 
                    {
                        var_24 = ((((/* implicit */_Bool) arr_15 [i_0] [i_5] [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_6] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_5] [i_0])) : (((/* implicit */int) (unsigned char)223)))) : (((int) -1)));
                        var_25 ^= ((/* implicit */int) (unsigned short)65535);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 3; i_7 < 16; i_7 += 3) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_29 [1] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) (+(((unsigned int) (short)26614))));
                                var_26 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_0] [i_8 - 1]))) ? (((/* implicit */int) arr_26 [i_0] [i_1] [i_0 + 1] [i_7])) : (0))));
                                arr_30 [i_5] [i_1] [i_5] [i_7 - 3] [i_0] [i_7 - 3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_21 [i_7 + 1] [i_8 - 1] [i_7 - 1] [i_7 - 3] [i_8] [i_0])) ? (((/* implicit */int) arr_21 [i_7 - 2] [i_8 - 1] [i_1] [i_0 - 1] [i_8] [i_1])) : (((/* implicit */int) arr_21 [i_7 - 3] [i_8 - 1] [i_5] [i_7] [(unsigned char)6] [i_7 + 1])))) == (((((((/* implicit */int) arr_21 [i_7 + 1] [i_8 - 1] [i_5] [i_7] [i_8] [i_7])) + (2147483647))) >> (((((/* implicit */int) arr_21 [i_7 - 2] [i_8 - 1] [i_5] [i_7] [i_8 - 1] [i_0 + 1])) + (50)))))));
                                var_27 &= ((/* implicit */short) min((min((((arr_15 [i_1] [(unsigned short)4] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) (short)32767))))), (((/* implicit */long long int) max(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1))))))), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) 6653610184235215079LL)) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_13 [i_8 - 1] [i_1] [i_0]))))))));
                                arr_31 [i_0] [i_0] [i_7 + 1] [i_7 + 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_0 + 1] [i_0 + 3] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (-367165931)))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30162))) ^ (arr_3 [i_8] [i_1]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_9 = 1; i_9 < 16; i_9 += 1) 
                    {
                        for (int i_10 = 2; i_10 < 15; i_10 += 4) 
                        {
                            {
                                var_28 = ((unsigned char) arr_17 [i_0] [i_1] [i_5]);
                                var_29 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(min((((/* implicit */int) (short)-32767)), (arr_33 [i_0 + 1] [i_10 - 1] [i_1] [i_9] [i_1])))))), (min((((/* implicit */unsigned int) (short)-7363)), (1079783210U)))));
                                arr_36 [i_1] [i_1] [i_1] [i_0] [i_0] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) arr_26 [i_5] [i_10 - 1] [i_5] [i_9])) != (((/* implicit */int) arr_26 [i_0] [i_5] [1U] [i_9]))));
                                arr_37 [i_0] [i_0] [i_0] [i_0 + 2] [(unsigned char)11] [i_0] = ((/* implicit */unsigned int) (short)30344);
                            }
                        } 
                    } 
                }
                var_30 += ((/* implicit */unsigned char) min((max((arr_15 [i_0] [i_0] [i_1]), (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (arr_32 [i_1] [i_0]) : (arr_5 [i_1] [i_1]))))), (((/* implicit */long long int) ((((/* implicit */int) arr_28 [i_0 + 3] [5LL] [i_0] [10] [i_0])) <= (((((/* implicit */int) (short)6381)) << (((((arr_23 [i_0] [(_Bool)1] [i_0] [(short)6] [i_0 - 1]) + (1445655579))) - (22))))))))));
                var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-121)), ((unsigned short)52858)))))))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((long long int) ((((/* implicit */unsigned long long int) var_8)) >= (var_5)))) : (((var_12) / (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_12)))))));
}
