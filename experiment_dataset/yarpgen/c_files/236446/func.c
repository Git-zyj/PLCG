/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236446
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_11 ^= ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (7987400398923851962ULL)));
        arr_3 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
        arr_4 [i_0] = ((/* implicit */signed char) var_3);
    }
    var_12 &= ((/* implicit */unsigned char) var_5);
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65521)) && (((/* implicit */_Bool) -4895584791388984589LL)))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            {
                                arr_19 [i_1] [i_1] [i_2] [i_3] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) min((arr_7 [i_4]), ((~(((long long int) 9223372036854775807LL))))));
                                var_13 += ((/* implicit */int) arr_1 [i_1] [0U]);
                                arr_20 [i_3] = ((/* implicit */unsigned char) var_4);
                            }
                        } 
                    } 
                    var_14 = arr_5 [i_2] [i_2];
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    {
                        var_15 = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                        /* LoopSeq 4 */
                        for (unsigned char i_9 = 1; i_9 < 13; i_9 += 3) 
                        {
                            arr_32 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [5] = ((/* implicit */unsigned int) arr_2 [i_1]);
                            var_16 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_17 [i_6] [(signed char)9] [i_9 - 1] [i_9 - 1] [i_9] [i_9 + 1] [i_9])) & (((/* implicit */int) var_1)))) >> (((((/* implicit */int) (signed char)14)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                            var_17 = (-((((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((/* implicit */int) arr_30 [i_1] [i_7])) - (90))))));
                            var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) arr_18 [i_7] [i_9 + 1] [i_9 + 1] [i_9] [i_9])))));
                        }
                        /* vectorizable */
                        for (long long int i_10 = 0; i_10 < 14; i_10 += 2) 
                        {
                            arr_35 [i_7] [i_6] [i_7] [i_8] = ((/* implicit */unsigned int) 9223372036854775807LL);
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_1 [i_1] [i_1]))));
                        }
                        for (unsigned char i_11 = 1; i_11 < 11; i_11 += 2) 
                        {
                            var_20 ^= ((/* implicit */int) var_8);
                            arr_40 [12LL] [i_1] &= ((/* implicit */unsigned int) 11599869316590326367ULL);
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) 4895584791388984606LL))));
                            var_22 = ((/* implicit */unsigned int) arr_22 [i_1] [i_6] [1LL]);
                            var_23 = ((/* implicit */_Bool) ((long long int) var_6));
                        }
                        for (unsigned char i_12 = 0; i_12 < 14; i_12 += 2) 
                        {
                            var_24 += ((/* implicit */_Bool) (~(arr_9 [i_8])));
                            var_25 = ((/* implicit */unsigned int) min((var_9), (((/* implicit */int) ((signed char) arr_25 [(signed char)1] [(unsigned char)4] [i_7] [i_8])))));
                        }
                        var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
                    }
                } 
            } 
        } 
    }
}
