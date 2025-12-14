/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227354
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) ((long long int) ((unsigned int) arr_1 [i_1 - 2])));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    var_21 |= ((unsigned char) ((unsigned long long int) 4294967295U));
                    var_22 = ((/* implicit */_Bool) ((unsigned long long int) ((signed char) arr_7 [i_0] [i_0] [i_0] [i_0])));
                }
                /* vectorizable */
                for (signed char i_3 = 3; i_3 < 16; i_3 += 1) 
                {
                    var_23 = ((/* implicit */long long int) ((unsigned int) (signed char)91));
                    var_24 = ((/* implicit */signed char) ((unsigned int) (_Bool)1));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) var_16);
    var_26 *= ((/* implicit */unsigned char) var_5);
}
