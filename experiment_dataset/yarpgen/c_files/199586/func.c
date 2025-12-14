/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199586
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_1)), (arr_0 [i_0])))) ? (min((((/* implicit */unsigned int) var_0)), (arr_2 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) -170662444))));
                var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)38910)) ? (15422291756463313671ULL) : (14618570266902192214ULL)));
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_0);
}
