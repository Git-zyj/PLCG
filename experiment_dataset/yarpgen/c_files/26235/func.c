/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26235
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_13 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)176))) + (min((((/* implicit */long long int) var_5)), (70368743129088LL)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_14 = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_0])) ? (-20LL) : (((/* implicit */long long int) 3652178580U))))) | (((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_2] [i_0])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) % (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_2 [i_0] [i_0])) + (2147483647))) >> (((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_1 [i_1] [(unsigned short)3])) : (((/* implicit */int) arr_0 [i_0])))) - (113))))))))) : (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_0])) ? (-20LL) : (((/* implicit */long long int) 3652178580U))))) | (((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_2] [i_0])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) * (((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_2 [i_0] [i_0])) - (2147483647))) + (2147483647))) >> (((((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_1 [i_1] [(unsigned short)3])) : (((/* implicit */int) arr_0 [i_0])))) - (113))) + (118)))))))));
                            arr_12 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-2846))));
                            var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_3 - 1] [i_3 - 1]))))) > (((unsigned long long int) arr_5 [i_3 - 1] [i_1 + 1] [i_0]))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_9))))) | (((/* implicit */int) (short)-2861))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            var_17 &= ((/* implicit */long long int) arr_15 [(short)16]);
            var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)0))))) % (((((/* implicit */_Bool) arr_13 [(short)0])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (0LL)))));
            arr_18 [i_5] [i_5] [15U] = ((/* implicit */_Bool) var_6);
        }
        arr_19 [i_4] |= ((/* implicit */unsigned long long int) arr_16 [7ULL] [i_4]);
    }
    for (long long int i_6 = 2; i_6 < 6; i_6 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (+(((((/* implicit */int) arr_5 [i_6] [i_6 + 1] [i_6])) % (((/* implicit */int) var_9)))))))));
        var_20 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) (unsigned char)10)) ? (((((/* implicit */int) var_7)) + (((/* implicit */int) var_6)))) : ((+(((/* implicit */int) var_6)))))));
    }
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (((-(((/* implicit */int) var_1)))) >> (((((/* implicit */int) ((signed char) (short)-2846))) + (34)))))) + (var_2)));
}
