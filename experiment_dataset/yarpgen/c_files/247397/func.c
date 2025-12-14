/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247397
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */_Bool) arr_4 [i_1]);
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_3)) / (((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_1 [i_0]))))))) : (((min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), (18076087450144974432ULL))) / (((/* implicit */unsigned long long int) ((arr_4 [i_0]) / (arr_4 [i_1]))))))));
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_4 [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) != (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) || (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) var_9);
}
