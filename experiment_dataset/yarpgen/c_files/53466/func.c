/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53466
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
    for (int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_12 = var_11;
                arr_6 [i_1] [(signed char)0] = (~(-732005995));
            }
        } 
    } 
    var_13 -= ((1695018467218657694ULL) * (((unsigned long long int) ((((/* implicit */_Bool) (short)11228)) ? (-1101118667) : (((/* implicit */int) (short)11220))))));
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), (var_9))))));
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1394929451847995679LL))));
    var_16 = ((/* implicit */short) var_1);
}
