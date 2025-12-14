/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197069
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) (_Bool)0))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) 0ULL))));
                var_12 = ((/* implicit */_Bool) (~(((5196885789610280660ULL) & (((/* implicit */unsigned long long int) 2147483647))))));
            }
        } 
    } 
}
