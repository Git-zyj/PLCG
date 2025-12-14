/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240206
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
    for (long long int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_14 = -5916278917884899648LL;
                arr_4 [i_1] = (-(288230376151711743LL));
                var_15 = ((/* implicit */unsigned char) (((~(min((((/* implicit */long long int) (unsigned char)151)), (2LL))))) & ((+(arr_3 [i_1])))));
                var_16 = (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)91))) : (arr_3 [i_0 + 1]))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) != (((/* implicit */int) (unsigned char)151))));
}
