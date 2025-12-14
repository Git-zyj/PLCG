/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193007
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */short) arr_2 [i_0] [i_1]);
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) min((((long long int) min((((/* implicit */long long int) arr_0 [i_1])), (arr_1 [i_0])))), (((/* implicit */long long int) (_Bool)1)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) min((((long long int) (+(var_15)))), (((/* implicit */long long int) ((int) (~(var_11)))))));
    var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_14)) >> (((var_8) + (1418863580)))))) ? (var_11) : (((/* implicit */unsigned long long int) var_13)))) >> (((max((var_9), (((/* implicit */unsigned long long int) (unsigned short)31830)))) - (10936529526709100543ULL)))));
}
