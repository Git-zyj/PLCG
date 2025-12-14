/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27510
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
    var_13 = ((/* implicit */unsigned int) var_11);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))))));
                var_15 |= ((/* implicit */int) (((-(arr_3 [(unsigned short)8] [i_1] [i_1]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)31457))))));
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1])) ? (0) : (((/* implicit */int) (short)19280)))))) ? (((((/* implicit */int) (unsigned short)30469)) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) (short)19309)))))));
            }
        } 
    } 
}
