/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27231
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_12 &= ((/* implicit */signed char) arr_4 [i_1] [4ULL]);
                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((unsigned long long int) (unsigned char)201)))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (+(((((/* implicit */int) (signed char)1)) + (((/* implicit */int) (unsigned short)24)))))))));
                var_15 += ((/* implicit */unsigned char) var_6);
            }
        } 
    } 
    var_16 &= var_9;
    var_17 *= ((unsigned short) var_3);
    var_18 ^= ((/* implicit */unsigned char) (!(((((/* implicit */int) var_4)) != (((/* implicit */int) var_10))))));
}
