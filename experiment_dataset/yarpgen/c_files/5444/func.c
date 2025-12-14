/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5444
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
    var_12 = var_9;
    var_13 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) ((_Bool) var_6))))), (((/* implicit */int) ((signed char) max((var_7), (((/* implicit */int) (signed char)32))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1202091435U)) ? (min((15182752901808802719ULL), (((/* implicit */unsigned long long int) arr_1 [(signed char)0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [2])) ? (var_4) : (((/* implicit */int) arr_1 [(signed char)10]))))))))));
                var_15 &= ((/* implicit */_Bool) (((+(((/* implicit */int) arr_1 [6LL])))) + (((((/* implicit */_Bool) (unsigned short)60931)) ? (((/* implicit */int) max(((short)-7442), (((/* implicit */short) (unsigned char)203))))) : (((/* implicit */int) arr_3 [i_1 + 1] [(unsigned char)6] [i_0 + 2]))))));
            }
        } 
    } 
}
