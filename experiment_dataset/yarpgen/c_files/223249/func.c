/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223249
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
    var_13 = ((/* implicit */signed char) var_11);
    var_14 = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) (+(((/* implicit */int) var_12))))) + (((((/* implicit */_Bool) var_0)) ? (var_6) : (var_6)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_15 = 4194303;
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_16 = ((/* implicit */unsigned char) var_1);
            arr_6 [i_1] = ((/* implicit */_Bool) (unsigned char)17);
        }
    }
}
