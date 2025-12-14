/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21244
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
    var_10 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned short) ((_Bool) (unsigned char)131))), ((unsigned short)45220)))))));
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) (short)-32757)))))) : ((-(arr_4 [i_0] [(unsigned short)5] [i_1])))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) var_5))))) + (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_9))), (((/* implicit */long long int) ((-241472656) < (((/* implicit */int) var_5)))))))));
}
