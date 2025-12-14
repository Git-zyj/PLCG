/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227858
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
    var_14 = ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_15 *= ((signed char) ((unsigned char) ((((/* implicit */_Bool) 13787876093766754915ULL)) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) var_12)))));
                var_16 -= ((/* implicit */unsigned char) arr_2 [i_0] [i_0] [(signed char)4]);
                var_17 = ((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_0]);
                var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0ULL))));
            }
        } 
    } 
}
