/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50268
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
    var_19 = ((/* implicit */unsigned long long int) (-(var_1)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */long long int) 4370768111619379571ULL);
                var_21 *= ((/* implicit */_Bool) 21ULL);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 16; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_22 = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)3))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) & (3097566926075251690LL)))));
                var_23 *= ((/* implicit */_Bool) -1167951118);
            }
        } 
    } 
}
