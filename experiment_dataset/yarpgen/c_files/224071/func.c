/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224071
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_10 -= ((/* implicit */unsigned int) ((((int) arr_1 [i_1] [i_1])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])))))));
                arr_4 [i_1] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) min((min(((+(-264757055))), (((/* implicit */int) ((short) arr_0 [i_0] [i_1]))))), (((/* implicit */int) ((((/* implicit */_Bool) max(((short)1768), (((/* implicit */short) arr_0 [i_0] [i_0]))))) || (((/* implicit */_Bool) (short)-30060)))))));
            }
        } 
    } 
    var_11 |= ((/* implicit */int) ((((((((/* implicit */int) var_9)) >= (((/* implicit */int) var_8)))) ? (3772537391790475851ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_2))))) << (((((var_8) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) - (6953156341718617258LL))))))));
}
