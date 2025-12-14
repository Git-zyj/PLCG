/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49394
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
    var_12 = ((/* implicit */short) var_10);
    var_13 += ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? ((-(((/* implicit */int) (signed char)0)))) : (((/* implicit */int) (!(var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (!(((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_1 [i_0])))) || (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) arr_0 [i_0] [i_1])))))))))));
                var_15 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))) : ((~(((/* implicit */int) var_4)))))), (((var_6) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) : (((/* implicit */int) (!((_Bool)1))))))));
                var_16 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) % (((/* implicit */int) var_4))));
                var_17 ^= var_3;
            }
        } 
    } 
    var_18 = max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (var_5)))) ? (((int) var_0)) : (((/* implicit */int) var_1)))));
}
