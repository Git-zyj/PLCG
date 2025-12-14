/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30350
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
    for (int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */int) (!(((_Bool) var_14))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    var_16 *= ((/* implicit */unsigned long long int) ((short) ((signed char) arr_0 [i_0 + 2] [i_0 + 3])));
                    var_17 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_1 + 3] [i_1 - 1] [i_0])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) 3580018241U)) ? (10675635142615968489ULL) : (7771108931093583126ULL))))), (((/* implicit */unsigned long long int) var_6))));
                    var_18 = ((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_0]);
                }
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (7771108931093583106ULL)))))));
    var_20 = ((/* implicit */unsigned char) var_4);
}
