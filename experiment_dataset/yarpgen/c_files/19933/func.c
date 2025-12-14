/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19933
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
    var_11 = ((/* implicit */short) max((((/* implicit */long long int) var_5)), (min((((((/* implicit */_Bool) (unsigned char)255)) ? (-4994411755268838996LL) : (-9223372036854775796LL))), (var_3)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((min((((/* implicit */long long int) (unsigned char)230)), (arr_1 [i_0 - 1]))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))));
                arr_5 [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)255)) ? (((/* implicit */int) (short)-13958)) : (((/* implicit */int) (unsigned char)241))));
                var_12 = ((/* implicit */int) min((min((3350811442075582389ULL), (((/* implicit */unsigned long long int) (short)-2252)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32704)) && (((((/* implicit */int) (unsigned char)64)) < (-12))))))));
            }
        } 
    } 
    var_13 &= ((/* implicit */unsigned short) var_3);
}
