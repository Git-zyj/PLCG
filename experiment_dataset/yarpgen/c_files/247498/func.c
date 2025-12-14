/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247498
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
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */long long int) arr_3 [11LL]);
                    var_15 = (+(510245732));
                    var_16 = ((/* implicit */long long int) max((var_16), (7647179630473104100LL)));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (+(((/* implicit */int) min((var_8), (min(((_Bool)1), ((_Bool)1)))))))))));
    var_18 &= ((/* implicit */long long int) (-((-((+(((/* implicit */int) (_Bool)1))))))));
}
