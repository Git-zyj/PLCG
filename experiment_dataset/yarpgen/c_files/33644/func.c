/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33644
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [6ULL] = ((/* implicit */unsigned short) max((max((var_1), (max((16128), (((/* implicit */int) (unsigned short)48713)))))), ((-(((/* implicit */int) (unsigned short)50676))))));
                    arr_9 [(signed char)10] [i_1] [i_1] [i_1] = (~((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2]))) : (3345976505786117281ULL))))));
                }
            } 
        } 
    } 
    var_18 &= (unsigned short)1;
}
