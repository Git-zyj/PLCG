/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50412
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
    var_16 &= ((/* implicit */unsigned int) max((((/* implicit */long long int) -408281816)), (((((/* implicit */long long int) (~(var_10)))) & (((8869283476764449175LL) & (((/* implicit */long long int) var_9))))))));
    var_17 = ((/* implicit */_Bool) -408281809);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((max((((/* implicit */int) (_Bool)1)), (-408281820))) & (((/* implicit */int) arr_2 [i_1] [9LL]))))) || ((_Bool)1))))));
                arr_5 [i_0] = ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1]);
                var_19 = ((/* implicit */_Bool) min((var_19), (((((/* implicit */_Bool) arr_1 [i_0])) && ((!(((/* implicit */_Bool) max((-586533342), (408281816))))))))));
            }
        } 
    } 
}
