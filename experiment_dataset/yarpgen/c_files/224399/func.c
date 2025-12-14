/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224399
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
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))) : (((((/* implicit */int) var_9)) & (((/* implicit */int) (unsigned short)37898))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 13; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                            {
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) (unsigned short)37898))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)24))))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) (unsigned short)65033)) : (((/* implicit */int) var_12)))) : ((+(((/* implicit */int) (unsigned char)147)))))) : (((((/* implicit */_Bool) arr_12 [i_0 - 3] [i_3 - 1] [i_0 - 3] [i_2 - 1] [i_4])) ? ((((-2147483647 - 1)) ^ (((/* implicit */int) var_9)))) : (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) var_6)))))))));
                                var_16 &= ((/* implicit */_Bool) ((unsigned int) (~((+(((/* implicit */int) var_7)))))));
                                var_17 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11)))) > (max((var_4), (((/* implicit */int) arr_9 [i_0 - 4] [i_0]))))));
                            }
                            arr_16 [i_0] [i_0] [i_1] [i_2] [i_3 - 2] = ((/* implicit */unsigned short) (((~(0))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (arr_11 [i_0 - 3] [i_0 - 3] [i_3 + 1]) : (var_8)))) ? (((((/* implicit */_Bool) 5423759634612596011ULL)) ? (((/* implicit */int) arr_15 [i_0 - 3])) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) (unsigned short)430)) ? (((/* implicit */int) (unsigned short)37898)) : (((/* implicit */int) (_Bool)1))))))));
                            var_18 = var_12;
                            arr_17 [i_1] [i_1] [i_2] [i_3] [i_3 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? ((+(var_5))) : (((/* implicit */int) (unsigned char)126))));
                            var_19 += ((/* implicit */unsigned int) (+((~((+(((/* implicit */int) var_0))))))));
                        }
                    } 
                } 
                var_20 ^= ((/* implicit */signed char) (+(min((((((/* implicit */_Bool) (short)-20478)) ? (((/* implicit */int) (_Bool)0)) : (146371714))), (((/* implicit */int) var_13))))));
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((((long long int) (_Bool)1)), (((/* implicit */long long int) arr_13 [i_0] [i_0 - 2] [i_0] [i_0 + 1] [(unsigned char)10]))))) ? (((/* implicit */unsigned long long int) ((max((arr_5 [i_0] [i_0]), (((/* implicit */int) (_Bool)1)))) + (((((/* implicit */int) arr_7 [i_0 + 1] [i_1] [i_1])) + (((/* implicit */int) var_0))))))) : (min((min((((/* implicit */unsigned long long int) var_11)), (325607777168154338ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                {
                    var_22 = ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (arr_23 [i_5] [i_5] [i_5] [i_6])))) ? (((/* implicit */int) var_13)) : ((~(((/* implicit */int) var_7))))));
                    var_23 = ((/* implicit */int) max((var_23), ((-(((int) var_6))))));
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (signed char)-1))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        arr_27 [4ULL] [i_7] [i_6] [i_6] [i_6] [4ULL] |= ((/* implicit */unsigned int) (((+(((/* implicit */int) var_11)))) | (var_5)));
                        arr_28 [i_5] [i_5] [(unsigned short)9] [i_6] [i_5] = ((/* implicit */unsigned int) min(((+(min((((/* implicit */int) (unsigned short)65535)), (-1))))), (((/* implicit */int) arr_21 [i_6]))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */int) ((unsigned short) 4213974248U)))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_9 = 2; i_9 < 18; i_9 += 3) 
                    {
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_30 [i_5] [i_5] [(_Bool)1] [i_6])) : (((/* implicit */int) var_12))));
                        var_27 = ((/* implicit */unsigned int) var_13);
                    }
                }
            } 
        } 
    } 
}
