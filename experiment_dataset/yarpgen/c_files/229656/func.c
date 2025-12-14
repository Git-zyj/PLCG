/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229656
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)127))));
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) arr_1 [i_0])), (arr_4 [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))))) : (((((/* implicit */_Bool) 1138104491699186681LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_17)) ? ((~((~(var_13))))) : (((/* implicit */long long int) (+((~(((/* implicit */int) (_Bool)1)))))))));
    var_20 = var_6;
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1510398414)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_15)))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)31986)) : (((/* implicit */int) var_9))))))) : ((+(var_15)))));
}
