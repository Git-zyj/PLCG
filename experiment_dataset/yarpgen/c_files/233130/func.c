/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233130
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
    var_10 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_11 [i_1] [(short)4] [(unsigned char)12] |= ((/* implicit */unsigned short) min((max((var_1), (((/* implicit */unsigned int) arr_5 [i_2 + 2] [i_2 + 1] [i_2 - 1])))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)63)))))));
                            var_11 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!((_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (var_2)))) ? (((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) ((var_2) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236))))))))) : ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_10 [i_1])))))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) max(((unsigned short)4095), (((/* implicit */unsigned short) (unsigned char)120)))))));
            }
        } 
    } 
}
