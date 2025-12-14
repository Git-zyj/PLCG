/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206201
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
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) var_9))));
                arr_6 [i_0] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_3 [i_0]))))));
                arr_7 [i_0] [i_1] [i_0] = (~(min((((/* implicit */long long int) var_6)), (arr_0 [i_0]))));
                var_12 = ((/* implicit */int) max(((~(max((arr_0 [i_1]), (((/* implicit */long long int) var_1)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_4 [i_0])))))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) max((9ULL), (((/* implicit */unsigned long long int) 3330644972U))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) var_11))))))) | (var_2)));
    var_15 = ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) var_9)), (max((((/* implicit */unsigned long long int) var_4)), (var_8)))))));
}
