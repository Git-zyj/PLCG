/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222263
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((3458659474U) | (836307822U)))))) || (((/* implicit */_Bool) var_15))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) (~(((3458659469U) << ((((~(836307826U))) - (3458659438U)))))));
                    var_22 = ((/* implicit */signed char) arr_5 [i_2] [i_1] [i_1]);
                }
            } 
        } 
    } 
}
