/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229105
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
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) var_0))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_14 -= ((/* implicit */unsigned int) var_5);
                arr_5 [i_1] = ((/* implicit */unsigned short) ((_Bool) arr_4 [i_0] [i_1]));
                var_15 = ((/* implicit */_Bool) max((var_15), (((((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_0)))) : (((((/* implicit */long long int) ((/* implicit */int) var_9))) / (3174935974757057245LL))))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))))))))));
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (_Bool)1))));
                var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_0] [i_0])) < (((/* implicit */int) var_12)))))));
            }
        } 
    } 
}
