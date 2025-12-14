/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26099
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
    var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) 7275377854942601040LL))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 += ((/* implicit */unsigned int) -1LL);
                    var_14 = var_1;
                }
            } 
        } 
    } 
}
