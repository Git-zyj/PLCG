/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244584
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
    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_19)) / ((+(((/* implicit */int) (unsigned char)78)))))) * (((/* implicit */int) var_2))));
    var_21 += ((/* implicit */unsigned short) ((long long int) min((var_0), (((/* implicit */short) var_18)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    var_22 *= ((/* implicit */_Bool) max(((unsigned short)65535), ((unsigned short)65512)));
                    var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((arr_4 [i_0]) + (1337824213)))))) ? ((-(arr_4 [i_1 - 1]))) : (((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_9))))));
                }
                var_24 = var_11;
                var_25 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1 - 1]))))) ^ (((/* implicit */int) var_19))));
                var_26 = ((/* implicit */unsigned long long int) var_10);
            }
        } 
    } 
}
