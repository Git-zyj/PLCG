/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43400
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
    var_16 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(4294967283U)))) ? (((/* implicit */int) var_15)) : (1042140657)))) ? (((/* implicit */int) min(((unsigned short)28672), (((/* implicit */unsigned short) (short)858))))) : (1042140628)));
    var_17 = ((/* implicit */int) var_3);
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) ((unsigned char) var_7)))) ? ((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_10)))))) : (((/* implicit */int) var_11))));
    var_19 = ((/* implicit */short) (~(((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) max(((((_Bool)1) ? (((((/* implicit */_Bool) var_8)) ? (var_6) : (var_8))) : (var_3))), (((/* implicit */unsigned int) var_0))));
                var_21 = ((/* implicit */int) max((((/* implicit */long long int) ((((unsigned int) 1810205059)) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -535647542)) || (((/* implicit */_Bool) var_5))))))))), (8170452687074758388LL)));
                var_22 = ((/* implicit */unsigned long long int) (((+(min((-8170452687074758409LL), (((/* implicit */long long int) var_5)))))) ^ (((/* implicit */long long int) min((((/* implicit */int) max(((short)-858), (((/* implicit */short) (signed char)113))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (-1042140658))))))));
            }
        } 
    } 
}
