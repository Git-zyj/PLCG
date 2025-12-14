/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5115
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64810))) : (31ULL)))) ? (((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_0)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (+(((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] [i_0] = (+((((+(((/* implicit */int) var_6)))) + (((((/* implicit */int) var_4)) - (((/* implicit */int) var_1)))))));
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */int) var_0)))) - ((-(((/* implicit */int) var_2))))))) ? (((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_11))) > (var_12)))))) : (((((/* implicit */_Bool) (unsigned short)64810)) ? (-580232990) : (((/* implicit */int) (unsigned short)63)))))))));
                var_17 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))))))) : ((~(((unsigned int) (unsigned short)64811))))));
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? ((-(580232990))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))))))))));
            }
        } 
    } 
}
