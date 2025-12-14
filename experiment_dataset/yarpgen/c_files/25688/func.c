/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25688
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
    var_17 ^= ((/* implicit */short) max((((/* implicit */int) var_10)), ((+(((/* implicit */int) (unsigned short)65510))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_18 += ((/* implicit */unsigned char) var_9);
                var_19 = ((/* implicit */unsigned char) (!(((min((arr_2 [i_1] [i_0 - 1]), (((/* implicit */long long int) arr_1 [i_1])))) < (((/* implicit */long long int) max((1538907397U), (((/* implicit */unsigned int) var_12)))))))));
            }
        } 
    } 
}
