/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38317
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) (+((+(((/* implicit */int) ((_Bool) arr_6 [i_4])))))));
                                var_19 -= ((/* implicit */signed char) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_10 [10U] [i_1 + 1]))));
                                arr_13 [i_3] [i_1 + 1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) var_0);
                                arr_14 [i_0] [i_0] [i_3] [i_1 + 1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) max((var_9), (((/* implicit */unsigned char) ((signed char) var_16)))));
                            }
                        } 
                    } 
                    arr_15 [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13712425220054327967ULL)))) ? (-6049259882113813688LL) : (((/* implicit */long long int) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0])) - (13099))))))))));
                    var_20 ^= ((/* implicit */unsigned char) var_11);
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        arr_18 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) (signed char)-96);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            arr_21 [i_0] = ((/* implicit */signed char) (short)(-32767 - 1));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-112)) | (((/* implicit */int) (signed char)-126))));
                        }
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            var_22 = ((((/* implicit */_Bool) ((unsigned long long int) (signed char)0))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) var_12)));
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (4734318853655223648ULL))))) + (((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) var_9)))))))));
                        }
                        for (short i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned short) max(((~(arr_5 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) max(((unsigned char)213), (((/* implicit */unsigned char) (signed char)0)))))));
                            arr_26 [i_0] [i_1] [i_0] [i_5] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))) ? (1359936219U) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1 + 1])) * (((/* implicit */int) arr_4 [i_1 + 1]))))));
                            arr_27 [i_0] [i_0] [i_2] [i_2] [i_8] &= max(((-(((((/* implicit */_Bool) var_5)) ? (arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_5] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3977))))))), (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)27291)), (((((/* implicit */int) (signed char)-67)) ^ (((/* implicit */int) (short)3980))))))));
                        }
                    }
                    arr_28 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) arr_4 [i_1 + 1])))) & ((~(((/* implicit */int) var_5))))));
                }
            } 
        } 
    } 
    var_25 = ((((/* implicit */int) ((max((-6049259882113813673LL), (((/* implicit */long long int) (_Bool)0)))) <= (((/* implicit */long long int) ((/* implicit */int) var_4)))))) | (((/* implicit */int) var_13)));
    var_26 = ((/* implicit */int) var_10);
    var_27 *= ((/* implicit */unsigned char) var_11);
    var_28 = ((/* implicit */unsigned long long int) var_5);
}
