/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194784
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
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_14 = ((unsigned char) (unsigned char)157);
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_0] = ((long long int) ((unsigned char) arr_1 [i_0 - 1]));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 1] [i_0]))));
                }
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) (unsigned char)94);
    var_16 = ((/* implicit */unsigned short) var_0);
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3132905237658123741LL)) ? (63ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32524)))));
}
