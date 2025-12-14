/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29199
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
    var_12 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) (short)14845)) * (((/* implicit */int) ((signed char) -6067483932707086578LL)))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9)))) : (((9223372036854775796LL) & (((/* implicit */long long int) var_10))))))));
    var_13 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */int) arr_3 [i_1]);
                var_15 *= ((/* implicit */_Bool) (unsigned char)72);
                var_16 = (short)31640;
            }
        } 
    } 
}
