/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204134
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (~(((/* implicit */int) var_0)))))));
                    var_18 -= ((/* implicit */signed char) ((long long int) ((_Bool) arr_5 [i_0])));
                    var_19 = ((/* implicit */short) var_2);
                }
                var_20 -= ((/* implicit */signed char) (~(var_12)));
            }
        } 
    } 
    var_21 = 9978269684974832508ULL;
    var_22 = ((/* implicit */_Bool) (~(max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) var_10))))));
    var_23 = ((/* implicit */short) var_14);
    var_24 = ((/* implicit */int) min((var_24), (((int) max((var_2), (((long long int) 2047973210)))))));
}
