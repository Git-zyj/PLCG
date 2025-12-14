/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28026
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned short) 1644811369799012081LL);
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (((((~(((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2] [i_1 + 1])))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 2])))))));
                var_12 ^= ((((/* implicit */_Bool) min(((~(-1644811369799012081LL))), (((/* implicit */long long int) (~(((/* implicit */int) var_0)))))))) ? ((+(min((((/* implicit */unsigned long long int) var_8)), (var_9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1644811369799012092LL)) ? (var_10) : (((/* implicit */long long int) arr_0 [i_1 + 2]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) 16347129438327492767ULL)) ? (((/* implicit */int) (unsigned short)28708)) : (((/* implicit */int) (unsigned char)12))));
}
