/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199232
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
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_8) : (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) 2677135008U)) && ((_Bool)1)))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (unsigned char)255))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)254)) / (((/* implicit */int) arr_2 [i_0] [i_1]))))) : (min((var_13), (((/* implicit */unsigned int) var_4))))))) ? (((((((/* implicit */_Bool) var_11)) && (var_5))) ? (((/* implicit */int) (unsigned short)65535)) : ((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0])))))) : (((/* implicit */int) var_16))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                            {
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)1))))) ? (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_8)))))) : (((/* implicit */int) (unsigned char)5))));
                                arr_15 [i_1] &= ((/* implicit */_Bool) ((((long long int) ((1U) << (((((/* implicit */int) var_0)) - (57802)))))) / (((/* implicit */long long int) ((min(((_Bool)1), (var_14))) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])) >= (((/* implicit */int) arr_12 [i_0] [i_4] [i_2] [i_3] [i_2] [i_1]))))))))));
                                var_20 = max((var_6), (((/* implicit */unsigned short) (_Bool)1)));
                                arr_16 [i_4] [i_1] [i_3] [i_2] [i_1] [i_0] &= max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (arr_1 [i_0 + 1]))), (((/* implicit */unsigned int) var_0)));
                            }
                            var_21 = ((/* implicit */unsigned int) max((var_21), ((~(262080U)))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((min((((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_1] [i_0 + 1])), ((-(((/* implicit */int) var_11)))))) ^ (((arr_2 [i_0 + 1] [i_0 - 1]) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 3])) : (((/* implicit */int) (unsigned char)1)))))))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        {
                            arr_22 [i_5] [i_1] [i_1] [i_1] [i_6] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)75))));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((_Bool) (+(((/* implicit */int) var_7)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))))));
    var_25 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned int) (short)-10037))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)244)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) : (var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_0)))))))));
}
