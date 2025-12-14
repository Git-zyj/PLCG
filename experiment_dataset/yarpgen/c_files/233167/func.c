/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233167
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_1] [i_0]) ? (((/* implicit */int) (short)21558)) : ((+(arr_0 [i_0] [i_0])))))) ? ((+(((/* implicit */int) arr_2 [i_0] [i_1])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_0 [i_0] [i_1])) != (3964387596U))))) > (330579722U))))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3964387608U)) ? (min((max((arr_0 [i_1] [i_1]), (((/* implicit */int) (signed char)0)))), (((/* implicit */int) (!((_Bool)0)))))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
                var_17 = ((/* implicit */int) ((_Bool) (signed char)-14));
            }
        } 
    } 
    var_18 += ((/* implicit */_Bool) (unsigned short)23244);
}
