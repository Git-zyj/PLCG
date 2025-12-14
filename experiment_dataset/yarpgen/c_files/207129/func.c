/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207129
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
    var_18 ^= ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))), (0ULL))), (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned short) var_0)), ((unsigned short)29600))), (((/* implicit */unsigned short) (short)4614)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (short)4614)) % (var_10))) | ((-(var_10))))))));
                var_20 = ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)124)))) ? (-1054574147) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_3 [i_1] [8U])))));
                var_21 = ((/* implicit */unsigned char) (+(max((((/* implicit */int) arr_4 [i_0])), (max((-1054574147), (((/* implicit */int) (short)-11535))))))));
                var_22 -= (!(((/* implicit */_Bool) (short)29998)));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((((/* implicit */int) var_13)) << (((/* implicit */int) var_2)))) > (((/* implicit */int) max((var_9), (var_9)))))))));
    var_24 = ((/* implicit */unsigned char) max((((((/* implicit */int) var_0)) - (((/* implicit */int) var_16)))), (max((((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (var_14)))), (max((1054574147), (((/* implicit */int) var_16))))))));
    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) var_15))));
}
