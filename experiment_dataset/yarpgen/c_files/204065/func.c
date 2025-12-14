/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204065
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
    var_13 = ((/* implicit */signed char) (~(((134217727ULL) << (((/* implicit */int) (short)0))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] [10U] = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_1]))));
                arr_6 [2LL] [i_1] [2LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) max((arr_2 [i_0 + 1]), (max((((/* implicit */short) (_Bool)0)), ((short)-27313)))))) : (((/* implicit */int) var_9))));
                arr_7 [i_0 - 2] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_3))));
            }
        } 
    } 
}
