/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234207
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
    var_14 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) -1746293612744539819LL)) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)0)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned char) 3592590757U);
                var_16 = ((/* implicit */signed char) ((unsigned int) (((~(arr_3 [i_0] [i_0]))) - ((-(((/* implicit */int) arr_4 [10LL])))))));
                var_17 = ((/* implicit */signed char) ((unsigned short) var_9));
                var_18 *= ((/* implicit */signed char) arr_1 [i_0] [i_0]);
                var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_4 [i_0])), ((~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)220))) / (2951064064U)))))));
            }
        } 
    } 
}
