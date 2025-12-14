/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242050
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
    var_13 = ((/* implicit */_Bool) ((long long int) ((unsigned char) ((signed char) var_6))));
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) var_11))));
    var_15 = (+(min((((/* implicit */long long int) var_7)), (962072674304LL))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_16 *= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)40), (((/* implicit */unsigned char) arr_4 [i_0])))))) : (-2715218172025800076LL))), ((-(var_12)))));
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) max((((/* implicit */unsigned char) min((arr_4 [i_1]), (((/* implicit */signed char) (((_Bool)0) && (((/* implicit */_Bool) arr_3 [(signed char)10] [i_1])))))))), (((unsigned char) arr_0 [i_1])))))));
            }
        } 
    } 
}
