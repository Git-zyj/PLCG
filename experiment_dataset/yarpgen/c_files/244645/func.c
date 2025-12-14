/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244645
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
    var_12 = ((/* implicit */short) min((min(((+(((/* implicit */int) (_Bool)1)))), (max((((/* implicit */int) var_2)), (var_0))))), (var_6)));
    var_13 &= ((((/* implicit */long long int) ((/* implicit */int) var_4))) - ((+(max((((/* implicit */long long int) var_3)), (-596305306060110411LL))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 -= (-(((min((arr_4 [(unsigned short)10] [i_1] [6ULL]), (((/* implicit */long long int) 161873119)))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_3 [(short)2] [2LL] [i_1]))))));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) 3817264836U)), (70334384439296LL)))) ? (((/* implicit */int) max((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1])))))));
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) arr_3 [i_0] [(short)2] [0ULL]))))) : (((/* implicit */int) min((arr_3 [i_0] [i_0] [i_0 - 1]), (var_7))))))) * ((~(((long long int) arr_4 [(_Bool)1] [i_1] [i_1])))))))));
            }
        } 
    } 
    var_17 = var_0;
}
