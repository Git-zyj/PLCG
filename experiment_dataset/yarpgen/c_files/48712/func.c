/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48712
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
    var_10 = ((/* implicit */unsigned long long int) max((var_10), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max((var_8), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) ((unsigned short) var_1)))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_1))))) + (((unsigned long long int) var_0))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] |= ((/* implicit */short) ((var_2) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_0]))) < (arr_0 [i_1]))))));
                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))) + (((arr_1 [i_0]) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0])))))))) ? (arr_0 [i_0]) : (((((/* implicit */_Bool) (~(9007199250546688ULL)))) ? (((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))) : ((((_Bool)1) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)2])))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((/* implicit */unsigned int) ((((arr_0 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)27))))) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46410)))))))))));
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) arr_11 [i_3] [i_2] [20ULL])))))) | (((arr_9 [i_3] [i_3 + 2] [i_3 + 3]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_5 = 3; i_5 < 14; i_5 += 2) 
    {
        arr_15 [i_5] [i_5] = ((/* implicit */_Bool) (~((~(((/* implicit */int) max((var_4), ((_Bool)1))))))));
        arr_16 [i_5] [i_5 - 3] |= ((/* implicit */unsigned long long int) (_Bool)1);
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 4; i_9 < 14; i_9 += 2) 
                        {
                            arr_27 [i_5 - 2] [i_6] [i_7] [(unsigned short)8] [i_9 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_5 - 2] [i_9 - 3])) % (((/* implicit */int) arr_2 [i_5 - 2] [i_9 - 2]))))) || (((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_5] [i_6] [i_9 + 1])))))))));
                            var_14 ^= (+(((((arr_9 [i_8] [i_5 - 3] [i_5 - 3]) == (arr_21 [i_5] [i_6] [i_7]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_23 [i_5] [(_Bool)0] [i_7] [(_Bool)1]))))) : ((+(1096933881456077944ULL))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_10 = 0; i_10 < 15; i_10 += 4) 
                        {
                            arr_32 [i_5] [i_5] [i_5] [(signed char)0] [i_5] = ((/* implicit */_Bool) var_0);
                            arr_33 [i_5] [i_6] [i_7] [i_8] [i_6] = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_5 - 2] [i_5 - 2] [i_5 - 2])) == (((((/* implicit */_Bool) 1096933881456077944ULL)) ? (((/* implicit */int) arr_29 [i_10] [i_6] [i_7] [i_6] [i_5])) : (((/* implicit */int) var_9))))));
                            var_15 &= ((/* implicit */short) arr_30 [i_5 - 2] [i_5 - 2]);
                        }
                        arr_34 [i_8] = ((/* implicit */unsigned long long int) arr_31 [0ULL] [i_6] [i_7] [i_7] [i_8] [i_8] [i_8]);
                        arr_35 [i_5] [i_5] [i_5] [i_5] [i_5 + 1] [i_5 - 3] = ((/* implicit */unsigned char) var_0);
                        var_16 &= ((/* implicit */unsigned int) ((max((arr_13 [i_5] [i_5]), (arr_31 [(signed char)5] [(signed char)5] [i_5 - 3] [i_5 + 1] [i_5] [(signed char)5] [(signed char)5]))) && (((/* implicit */_Bool) ((unsigned char) arr_6 [i_5 - 2] [i_5 - 2])))));
                        var_17 *= (_Bool)1;
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_18 = ((((max((arr_0 [23ULL]), (((/* implicit */unsigned int) (unsigned short)65530)))) < (((/* implicit */unsigned int) ((/* implicit */int) (short)20536))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) min((arr_36 [i_5 - 2] [i_6] [i_7] [i_11]), ((_Bool)1))))))) : (arr_19 [i_5] [i_5]));
                        arr_38 [i_5] [i_6] [i_6] [i_11] [i_7] = ((((((/* implicit */_Bool) arr_6 [i_5 - 3] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5 - 1]))) : (((((/* implicit */_Bool) arr_0 [i_5])) ? (arr_18 [i_5 - 3] [(unsigned char)11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
                    }
                    for (signed char i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        arr_41 [i_12] = ((/* implicit */_Bool) (~(max((((((/* implicit */int) (unsigned short)46410)) / (((/* implicit */int) arr_2 [i_6] [i_12])))), (((/* implicit */int) ((((/* implicit */int) (short)-20548)) == (((/* implicit */int) (unsigned char)255)))))))));
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((min((((/* implicit */short) (unsigned char)235)), ((short)32767))), (((/* implicit */short) (unsigned char)6)))))) ^ (((arr_6 [i_5 - 2] [i_5 - 3]) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_5])) >> (((((/* implicit */int) (unsigned char)208)) - (197))))))))));
                    }
                    var_20 &= ((/* implicit */unsigned int) ((((arr_18 [i_5] [i_5]) & (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)127), (var_7))))))) == (((arr_28 [i_5] [(signed char)9] [i_5 - 1] [i_5] [i_6] [i_5]) >> ((((~(((/* implicit */int) var_1)))) + (58)))))));
                    var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_5 - 1] [i_6])) ? (((arr_18 [i_5] [i_6]) >> (((min((arr_21 [i_5 + 1] [i_5 + 1] [i_7]), (((/* implicit */unsigned long long int) arr_40 [i_5] [10ULL] [i_7])))) - (55903ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_5] [i_5] [i_5] [i_5 - 3])))));
                }
            } 
        } 
    }
}
