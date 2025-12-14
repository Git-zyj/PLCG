/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3502
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) var_14);
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 3215770699348103614ULL)) ? (14351181131975868517ULL) : (18446744072635809792ULL)));
        var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (3215770699348103614ULL)))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) ((8013777789195838974ULL) == (var_11)))))) << (((arr_0 [i_0]) - (1774443175U)))));
        var_23 = ((/* implicit */long long int) min((min((var_13), (arr_1 [i_0] [(short)10]))), (((/* implicit */signed char) ((((/* implicit */_Bool) min((var_12), (var_6)))) || (((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0 - 3])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) var_17);
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (short i_2 = 4; i_2 < 10; i_2 += 4) 
        {
            {
                arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (_Bool)1);
                var_24 ^= ((/* implicit */signed char) var_18);
                var_25 *= var_3;
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (var_19) : (15230973374361448002ULL))) == (((((/* implicit */_Bool) var_6)) ? (3215770699348103604ULL) : (var_19))))))) >= (var_12)));
}
