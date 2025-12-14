/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47910
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
    var_19 = ((/* implicit */int) var_17);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((unsigned int) var_2)), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) & (var_15))))))) ? (((/* implicit */int) (!(((_Bool) (unsigned short)37897))))) : (((/* implicit */int) ((short) var_17))))))));
                var_21 = ((/* implicit */unsigned int) ((((unsigned int) var_7)) > (((/* implicit */unsigned int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_17))))))));
                arr_4 [i_0] [i_1 + 2] = ((((((/* implicit */_Bool) arr_1 [i_1 - 2])) || (((/* implicit */_Bool) arr_1 [i_1 - 2])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [i_0])))) ? ((-(var_6))) : (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_16)) << (((var_6) - (8722235127563294265LL)))))))))));
                var_22 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(min((arr_1 [i_1]), (arr_1 [i_1])))))) % (((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1])) ? (((((/* implicit */_Bool) var_6)) ? (var_0) : (arr_0 [i_0]))) : (min((1722066387U), (((/* implicit */unsigned int) var_16))))))));
            }
        } 
    } 
    var_23 = var_0;
}
