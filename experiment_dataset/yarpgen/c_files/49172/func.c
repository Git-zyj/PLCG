/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49172
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            {
                var_20 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_5) : (((/* implicit */long long int) (~(var_16))))))));
                var_21 = ((/* implicit */unsigned int) var_8);
                arr_4 [i_0] = ((/* implicit */unsigned long long int) var_16);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)58))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)185))))) ? (((/* implicit */unsigned long long int) (~(1274551190U)))) : ((~(13194123144564208737ULL)))))));
}
