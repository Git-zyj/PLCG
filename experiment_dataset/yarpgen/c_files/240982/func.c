/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240982
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
    var_16 |= ((/* implicit */unsigned char) var_8);
    var_17 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_4 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_4) : ((((+(((/* implicit */int) var_6)))) - (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)91)), (arr_8 [i_1] [i_3] [i_4 + 1]))))))));
                            var_18 = ((/* implicit */_Bool) max(((+(arr_6 [i_0] [i_3] [i_4 - 1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)1))))))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_8 [i_0] [i_0] [i_2]), (((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_0]))))) >> (((((((/* implicit */int) var_7)) & (((/* implicit */int) var_10)))) - (142)))))) ? ((+(((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_0] [i_3] [i_5]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63))))))));
                            var_20 = (-(max((((/* implicit */int) arr_9 [i_3] [i_5])), ((+(((/* implicit */int) (_Bool)1)))))));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            arr_21 [i_0] [i_2] [i_0] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((long long int) (~(((/* implicit */int) arr_11 [i_0] [i_1] [i_2])))));
                            var_21 -= ((/* implicit */long long int) ((((int) (signed char)-51)) != (((/* implicit */int) ((short) (unsigned char)63)))));
                        }
                        var_22 -= ((_Bool) ((arr_20 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] [i_2]) >> (((min((var_14), (((/* implicit */long long int) arr_1 [i_0] [i_2])))) + (22361LL)))));
                    }
                    arr_22 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_10 [i_0] [i_1] [i_2]);
                    arr_23 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
                }
            } 
        } 
    } 
}
