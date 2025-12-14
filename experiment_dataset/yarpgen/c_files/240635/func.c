/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240635
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
    var_19 = ((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) (unsigned char)253)) - (252)))))) ? (((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_14), (((/* implicit */unsigned short) var_6)))))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_0]);
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_0] [i_0] [i_1]))) ? (((/* implicit */int) ((signed char) (unsigned char)251))) : (((/* implicit */int) max(((unsigned short)18476), (((/* implicit */unsigned short) (unsigned char)254)))))));
                arr_8 [i_0] [i_0] = ((/* implicit */signed char) (((+(((/* implicit */int) arr_0 [i_0] [i_1])))) - (((/* implicit */int) ((_Bool) arr_0 [i_0] [i_1])))));
            }
        } 
    } 
    var_21 -= ((/* implicit */unsigned short) var_4);
}
