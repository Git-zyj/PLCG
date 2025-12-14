/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214427
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
    var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((4860143452906221094LL) | (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((long long int) (unsigned char)71))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1 + 1] |= ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_1] [i_1 + 3]))))))));
                var_14 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1 + 3])) % (((/* implicit */int) arr_1 [i_1 + 3]))))) ? (((long long int) 2498450976U)) : (((/* implicit */long long int) (((+(((/* implicit */int) var_2)))) + ((-(((/* implicit */int) var_7)))))))));
                arr_5 [i_1 + 3] [i_0] |= ((unsigned char) var_8);
                var_15 ^= ((/* implicit */long long int) (signed char)92);
            }
        } 
    } 
    var_16 |= ((/* implicit */unsigned int) var_6);
    var_17 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
}
