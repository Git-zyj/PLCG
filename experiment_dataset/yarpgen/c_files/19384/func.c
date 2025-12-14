/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19384
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)142)) == (((/* implicit */int) max((((/* implicit */unsigned char) var_7)), (arr_4 [i_0] [i_1])))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_2))))));
                var_14 = ((/* implicit */unsigned short) max((((/* implicit */int) (signed char)7)), ((-(((/* implicit */int) var_6))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_5))));
}
