/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190579
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
    var_10 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((unsigned int) 2337980421U))))) || (((/* implicit */_Bool) var_4))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))))))))));
                var_12 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)33695))));
                var_13 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 4294967295U)) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
            }
        } 
    } 
}
