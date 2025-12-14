/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240123
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1]))));
                    var_13 = ((/* implicit */unsigned long long int) (unsigned char)43);
                    arr_8 [i_0] = ((/* implicit */unsigned char) 6071270381934997204ULL);
                    arr_9 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 2891959518193502243ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_1]), (2202157360675527192ULL))))))) : (((/* implicit */int) ((min((6071270381934997175ULL), (18243712416740776750ULL))) >= (min((((/* implicit */unsigned long long int) arr_2 [i_2])), (12375473691774554424ULL))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) ((unsigned long long int) var_9));
    var_15 = (-(max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) var_9)) ? (4294967295ULL) : (((/* implicit */unsigned long long int) 513900524U)))))));
}
