/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201361
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
    var_17 = ((/* implicit */short) (+(((/* implicit */int) var_1))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) (signed char)-13)))) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) ((((/* implicit */int) (signed char)-9)) >= (((/* implicit */int) var_2)))))))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)224)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) min(((+(0LL))), (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1 + 1] = ((/* implicit */signed char) min(((~(0LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) -8702460054792389503LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [i_0] [i_1 + 2] [i_2] [i_1 + 1])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1 - 1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) arr_10 [(short)0] [i_0] [i_1] [(short)1] [i_4 - 1] [i_4 + 3]))))), (((min((9223372036854775807LL), (((/* implicit */long long int) 0U)))) ^ (((/* implicit */long long int) (~(var_12))))))));
                                var_19 -= ((/* implicit */short) min((((/* implicit */int) arr_0 [i_0])), (min((((((/* implicit */int) (unsigned short)11)) & (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) (signed char)33))))));
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((unsigned char) (~(-3LL))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                arr_20 [i_0] [i_5] [i_2] [(unsigned short)5] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_9 [i_0] [i_2] [i_5] [9LL]))))) ? (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (short)-1))))) : (((((/* implicit */int) var_3)) - (((/* implicit */int) var_7))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_5]))) - (956821169581275808ULL)))));
                                arr_21 [i_2] [i_2] [i_2] [i_5] [10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 9LL))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */int) (short)13)) : (((/* implicit */int) (short)(-32767 - 1))))) : (((((/* implicit */int) arr_9 [13U] [i_1] [i_1 + 1] [i_5])) / (((/* implicit */int) var_6))))));
                                arr_22 [i_0] [(_Bool)1] [i_1 + 1] [i_2] [i_5] [i_6] [i_6] |= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_5] [i_2] [i_5])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)32767))))) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_2])) : (((((/* implicit */int) var_16)) / (((/* implicit */int) arr_11 [i_1 - 1] [i_2] [i_5]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 -= ((/* implicit */signed char) 0LL);
        arr_23 [i_0] [i_0] = ((/* implicit */unsigned int) (!((_Bool)1)));
    }
    var_21 |= ((/* implicit */unsigned long long int) (+((~(((((/* implicit */_Bool) 17LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))))));
    var_22 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((long long int) (unsigned char)0)) != (((/* implicit */long long int) ((/* implicit */int) var_15))))))) | (var_12)));
}
