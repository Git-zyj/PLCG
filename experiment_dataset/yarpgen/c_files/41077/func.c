/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41077
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (((-(var_9))) / (-5189081561961692298LL)))) ? (((/* implicit */long long int) 3913076697U)) : (((((/* implicit */_Bool) (+(3913076697U)))) ? (var_0) : (max((7688874055555676007LL), (((/* implicit */long long int) var_10))))))));
    var_14 = ((/* implicit */int) var_5);
    var_15 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_7)) ? ((~(979232629))) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((short) ((long long int) var_11))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (signed char)26)) ? (-5189081561961692298LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))) ? (((((/* implicit */_Bool) max((arr_4 [i_1] [i_0] [i_0]), (((/* implicit */long long int) var_8))))) ? (-9223372036854775791LL) : ((~(var_0))))) : (max((((/* implicit */long long int) (unsigned short)45075)), (max((-7056188121806901346LL), (((/* implicit */long long int) (unsigned char)75)))))))))));
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (unsigned short)20030))));
                    var_18 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)1)))))))), (max((((/* implicit */long long int) var_10)), (((long long int) 832449217U))))));
                    var_19 = arr_3 [i_0];
                }
            }
        } 
    } 
}
