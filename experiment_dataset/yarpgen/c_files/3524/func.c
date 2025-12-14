/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3524
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) max(((short)16), (((/* implicit */short) (unsigned char)115)))))) + (((/* implicit */int) var_9))));
                var_21 ^= ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1 + 2] [i_1 + 1]))))), ((+(((/* implicit */int) arr_2 [i_0] [(signed char)5] [i_1 + 3]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) var_8);
}
