/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241591
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            {
                arr_6 [16U] [15LL] = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) 3105895829U)), (23LL)))));
                arr_7 [i_0] [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-16))) : (-6194051382913794801LL)));
                arr_8 [i_1] [9U] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (max((6194051382913794793LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 3813830603820935554LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_13 = var_9;
}
